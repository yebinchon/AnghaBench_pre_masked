
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6775_data {int* temp_src; int * REG_TEMP_SOURCE; } ;


 int VAR_0 ;
 int FUNC_0 (struct nct6775_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct nct6775_data *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->temp_src[VAR_2];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  int VAR_6;

  VAR_6 = FUNC_0(VAR_1,
      VAR_1->REG_TEMP_SOURCE[VAR_5]) & 0x1f;
  if (VAR_6 == VAR_4)
   return VAR_5;
 }
 return -VAR_0;
}
