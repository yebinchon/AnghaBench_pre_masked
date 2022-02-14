
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6775_data {int* fan_div; int has_fan; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nct6775_data*) ;
 int FUNC_3 (struct nct6775_data*,int) ;

__attribute__((used)) static void FUNC_4(struct nct6775_data *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);






 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->fan_div); VAR_1++) {
  if (!(VAR_0->has_fan & FUNC_1(VAR_1)))
   continue;
  if (VAR_0->fan_div[VAR_1] == 0) {
   VAR_0->fan_div[VAR_1] = 7;
   FUNC_3(VAR_0, VAR_1);
  }
 }
}
