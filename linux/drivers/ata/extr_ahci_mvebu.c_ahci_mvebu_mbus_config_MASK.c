
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbus_dram_window {int mbus_attr; int base; int size; } ;
struct mbus_dram_target_info {int num_cs; int mbus_dram_target_id; struct mbus_dram_window* cs; } ;
struct ahci_host_priv {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ahci_host_priv *VAR_0,
       const struct mbus_dram_target_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  FUNC_3(0, VAR_0->mmio + FUNC_1(VAR_2));
  FUNC_3(0, VAR_0->mmio + FUNC_0(VAR_2));
  FUNC_3(0, VAR_0->mmio + FUNC_2(VAR_2));
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_cs; VAR_2++) {
  const struct mbus_dram_window *VAR_3 = VAR_1->cs + VAR_2;

  FUNC_3((VAR_3->mbus_attr << 8) |
         (VAR_1->mbus_dram_target_id << 4) | 1,
         VAR_0->mmio + FUNC_1(VAR_2));
  FUNC_3(VAR_3->base >> 16, VAR_0->mmio + FUNC_0(VAR_2));
  FUNC_3(((VAR_3->size - 1) & 0xffff0000),
         VAR_0->mmio + FUNC_2(VAR_2));
 }
}
