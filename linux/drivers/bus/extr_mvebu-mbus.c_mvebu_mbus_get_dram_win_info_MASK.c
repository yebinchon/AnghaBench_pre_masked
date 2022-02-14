
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mbus_dram_window {int base; int size; int mbus_attr; } ;
struct mbus_dram_target_info {int num_cs; int mbus_dram_target_id; struct mbus_dram_window* cs; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mbus_dram_target_info* FUNC_0 () ;
 int FUNC_1 (char*,...) ;

int FUNC_2(phys_addr_t VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 const struct mbus_dram_target_info *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_0();
 if (!VAR_5) {
  FUNC_1("missing DRAM information\n");
  return -VAR_1;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->num_cs; VAR_6++) {
  const struct mbus_dram_window *VAR_7 = VAR_5->cs + VAR_6;

  if (VAR_7->base <= VAR_2 &&
   VAR_2 <= (VAR_7->base + VAR_7->size - 1)) {
   *VAR_3 = VAR_5->mbus_dram_target_id;
   *VAR_4 = VAR_7->mbus_attr;
   return 0;
  }
 }

 FUNC_1("invalid dram address %pa\n", &VAR_2);
 return -VAR_0;
}
