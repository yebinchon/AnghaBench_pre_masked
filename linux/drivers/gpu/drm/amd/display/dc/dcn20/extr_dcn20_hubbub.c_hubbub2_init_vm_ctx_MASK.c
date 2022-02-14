
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn_vmid_page_table_config {int page_table_start_addr; int page_table_end_addr; int page_table_base_addr; int block_size; int depth; } ;
struct dcn_hubbub_virt_addr_config {int page_table_start_addr; int page_table_end_addr; int page_table_base_addr; int page_table_block_size; int page_table_depth; } ;
struct dcn20_hubbub {int * vmid; } ;


 struct dcn20_hubbub* FUNC_0 (struct hubbub*) ;
 int FUNC_1 (int *,struct dcn_vmid_page_table_config*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct hubbub *VAR_0,
  struct dcn_hubbub_virt_addr_config *VAR_1,
  int VAR_2)
{
 struct dcn20_hubbub *VAR_3 = FUNC_0(VAR_0);
 struct dcn_vmid_page_table_config VAR_4;

 VAR_4.page_table_start_addr = VAR_1->page_table_start_addr >> 12;
 VAR_4.page_table_end_addr = VAR_1->page_table_end_addr >> 12;
 VAR_4.depth = FUNC_3(VAR_1->page_table_depth);
 VAR_4.block_size = FUNC_2(VAR_1->page_table_block_size);
 VAR_4.page_table_base_addr = VAR_1->page_table_base_addr;

 FUNC_1(&VAR_3->vmid[VAR_2], &VAR_4);
}
