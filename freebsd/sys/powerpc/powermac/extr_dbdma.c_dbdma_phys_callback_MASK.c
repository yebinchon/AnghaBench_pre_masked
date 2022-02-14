
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_slots_pa; } ;
typedef TYPE_1__ dbdma_channel_t ;
struct TYPE_6__ {int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 dbdma_channel_t *VAR_5 = (dbdma_channel_t *)(VAR_1);

 VAR_5->sc_slots_pa = VAR_2[0].ds_addr;
 FUNC_0(VAR_5, VAR_0, VAR_5->sc_slots_pa);
}
