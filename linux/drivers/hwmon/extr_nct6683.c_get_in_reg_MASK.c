
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6683_data {int* in_index; int customer_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct nct6683_data *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2->in_index[VAR_4];
 int VAR_6 = -VAR_0;

 switch (VAR_3) {
 case 0:
  VAR_6 = FUNC_0(VAR_5);
  break;
 case 1:
  if (VAR_2->customer_id != VAR_1)
   VAR_6 = FUNC_2(VAR_5);
  break;
 case 2:
  if (VAR_2->customer_id != VAR_1)
   VAR_6 = FUNC_1(VAR_5);
  break;
 default:
  break;
 }
 return VAR_6;
}
