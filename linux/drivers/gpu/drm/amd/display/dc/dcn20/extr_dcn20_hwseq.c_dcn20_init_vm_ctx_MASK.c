
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dcn_hubbub_virt_addr_config {int page_table_base_addr; int page_table_depth; int page_table_block_size; int page_table_end_addr; int page_table_start_addr; } ;
struct dce_hwseq {int dummy; } ;
struct dc_virtual_addr_space_config {int page_table_base_addr; int page_table_depth; int page_table_block_size_in_bytes; int page_table_end_addr; int page_table_start_addr; } ;
struct dc {TYPE_2__* res_pool; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {TYPE_3__* hubbub; } ;
struct TYPE_4__ {int (* init_vm_ctx ) (TYPE_3__*,struct dcn_hubbub_virt_addr_config*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,struct dcn_hubbub_virt_addr_config*,int) ;

__attribute__((used)) static void FUNC_2(
  struct dce_hwseq *VAR_0,
  struct dc *VAR_1,
  struct dc_virtual_addr_space_config *VAR_2,
  int VAR_3)
{
 struct dcn_hubbub_virt_addr_config VAR_4;

 if (VAR_3 == 0) {
  FUNC_0(0);
  return;
 }

 VAR_4.page_table_start_addr = VAR_2->page_table_start_addr;
 VAR_4.page_table_end_addr = VAR_2->page_table_end_addr;
 VAR_4.page_table_block_size = VAR_2->page_table_block_size_in_bytes;
 VAR_4.page_table_depth = VAR_2->page_table_depth;
 VAR_4.page_table_base_addr = VAR_2->page_table_base_addr;

 VAR_1->res_pool->hubbub->funcs->init_vm_ctx(VAR_1->res_pool->hubbub, &VAR_4, VAR_3);
}
