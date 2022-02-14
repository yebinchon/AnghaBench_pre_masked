
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn_vmid_page_table_config {int page_table_start_addr; int page_table_end_addr; int page_table_base_addr; int block_size; int depth; } ;
struct dcn20_vmid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct dcn20_vmid*) ;

void FUNC_3(struct dcn20_vmid *VAR_15, const struct dcn_vmid_page_table_config *VAR_16)
{
 FUNC_0(VAR_5, 0,
   VAR_13, (VAR_16->page_table_start_addr >> 32) & 0xF);
 FUNC_0(VAR_6, 0,
   VAR_14, VAR_16->page_table_start_addr & 0xFFFFFFFF);

 FUNC_0(VAR_3, 0,
   VAR_7, (VAR_16->page_table_end_addr >> 32) & 0xF);
 FUNC_0(VAR_4, 0,
   VAR_8, VAR_16->page_table_end_addr & 0xFFFFFFFF);

 FUNC_1(VAR_0, 0,
   VAR_12, VAR_16->depth,
   VAR_11, VAR_16->block_size);

 FUNC_0(VAR_1, 0,
   VAR_9, (VAR_16->page_table_base_addr >> 32) & 0xFFFFFFFF);

 FUNC_0(VAR_2, 0,
   VAR_10, VAR_16->page_table_base_addr & 0xFFFFFFFF);

 FUNC_2(VAR_15);
}
