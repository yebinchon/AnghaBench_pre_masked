
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vscsi_softc {int n_crqs; int srp_iu_arena; int srp_iu_phys; scalar_t__ crq_queue; int * srp_iu_queue; int crq_phys; } ;
struct vscsi_crq {int dummy; } ;
struct TYPE_3__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_3, bus_dma_segment_t *VAR_4, int VAR_5, int VAR_6)
{
 struct vscsi_softc *VAR_7 = VAR_3;

 VAR_7->crq_phys = VAR_4[0].ds_addr;
 VAR_7->n_crqs = VAR_2/sizeof(struct vscsi_crq);

 VAR_7->srp_iu_queue = (uint8_t *)(VAR_7->crq_queue);
 VAR_7->srp_iu_phys = VAR_4[0].ds_addr;
 VAR_7->srp_iu_arena = FUNC_0("VSCSI SRP IU", VAR_2,
     VAR_4[0].ds_len - VAR_2, 16, 0, VAR_0 | VAR_1);
}
