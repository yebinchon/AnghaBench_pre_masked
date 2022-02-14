
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dcn_hubbub_page_table_depth { ____Placeholder_dcn_hubbub_page_table_depth } dcn_hubbub_page_table_depth ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum dcn_hubbub_page_table_depth FUNC_1(unsigned int VAR_4)
{
 enum dcn_hubbub_page_table_depth VAR_5 = 0;

 switch (VAR_4) {
 case 1:
  VAR_5 = VAR_0;
  break;
 case 2:
  VAR_5 = VAR_1;
  break;
 case 3:
  VAR_5 = VAR_2;
  break;
 case 4:
  VAR_5 = VAR_3;
  break;
 default:
  FUNC_0(0);
  break;
 }

 return VAR_5;
}
