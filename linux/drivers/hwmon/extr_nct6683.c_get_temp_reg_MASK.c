
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6683_data {int* temp_index; int customer_id; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nct6683_data *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->temp_index[VAR_3];
 int VAR_5 = -VAR_0;

 switch (VAR_1->customer_id) {
 case 129:
  switch (VAR_2) {
  default:
  case 1:
   VAR_5 = FUNC_1(VAR_4);
   break;
  case 3:
   VAR_5 = FUNC_0(VAR_4);
   break;
  }
  break;
 case 128:
 default:
  switch (VAR_2) {
  default:
  case 0:
   VAR_5 = FUNC_3(VAR_4);
   break;
  case 1:
   VAR_5 = FUNC_5(VAR_4);
   break;
  case 2:
   VAR_5 = FUNC_4(VAR_4);
   break;
  case 3:
   VAR_5 = FUNC_2(VAR_4);
   break;
  }
  break;
 }
 return VAR_5;
}
