
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct adm1031_data {scalar_t__*** chan_select_table; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct adm1031_data *VAR_1, int VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 int VAR_6 = -1, VAR_7 = -1;
 u8 VAR_8 =
     (*VAR_1->chan_select_table)[FUNC_0(VAR_4)][VAR_2 ? 0 : 1];

 if (VAR_3 == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if ((VAR_3 == (*VAR_1->chan_select_table)[VAR_5][VAR_2]) &&
      ((*VAR_1->chan_select_table)[VAR_5][VAR_2 ? 0 : 1] ==
       VAR_8)) {

   VAR_7 = VAR_5;
   break;
  } else if (VAR_3 == (*VAR_1->chan_select_table)[VAR_5][VAR_2] &&
      VAR_6 == -1) {




   VAR_6 = VAR_5;
  }
 }

 if (VAR_7 >= 0)
  return VAR_7;
 else if (VAR_6 >= 0)
  return VAR_6;

 return -VAR_0;
}
