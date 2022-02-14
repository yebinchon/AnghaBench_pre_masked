
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dcn_hubbub_page_table_block_size { ____Placeholder_dcn_hubbub_page_table_block_size } dcn_hubbub_page_table_block_size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum dcn_hubbub_page_table_block_size FUNC_1(unsigned int VAR_2)
{
 enum dcn_hubbub_page_table_block_size VAR_3 = 0;

 switch (VAR_2) {
 case 4096:
  VAR_3 = VAR_0;
  break;
 case 65536:
  VAR_3 = VAR_1;
  break;
 default:
  FUNC_0(0);
  VAR_3 = VAR_2;
  break;
 }

 return VAR_3;
}
