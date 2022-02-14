
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sti_hqvdp_cmd {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct sti_hqvdp {int hqvdp_cmd; scalar_t__ hqvdp_cmd_paddr; int dev; TYPE_1__ vtg_nb; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,scalar_t__*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct sti_hqvdp *VAR_4)
{
 int VAR_5;
 dma_addr_t VAR_6;

 VAR_4->vtg_nb.notifier_call = VAR_3;


 VAR_5 = VAR_2 * sizeof(struct sti_hqvdp_cmd);
 VAR_4->hqvdp_cmd = FUNC_1(VAR_4->dev, VAR_5,
     &VAR_6,
     VAR_1 | VAR_0);
 if (!VAR_4->hqvdp_cmd) {
  FUNC_0("Failed to allocate memory for VDP cmd\n");
  return;
 }

 VAR_4->hqvdp_cmd_paddr = (u32)VAR_6;
 FUNC_2(VAR_4->hqvdp_cmd, 0, VAR_5);
}
