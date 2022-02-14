
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int has_fan_min; scalar_t__ has_fan_div; int * REG_FAN_MIN; int fan_min; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nct6775_data*) ;
 int FUNC_3 (struct nct6775_data*,int ) ;
 int FUNC_4 (struct nct6775_data*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0,
        struct nct6775_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 if (VAR_1->has_fan_div)
  FUNC_2(VAR_1);





 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->fan_min); VAR_2++) {
  if (VAR_1->has_fan_min & FUNC_1(VAR_2)) {
   VAR_3 = FUNC_3(VAR_1, VAR_1->REG_FAN_MIN[VAR_2]);
   if (!VAR_3)
    FUNC_4(VAR_1, VAR_1->REG_FAN_MIN[VAR_2],
          VAR_1->has_fan_div ? 0xff
              : 0xff1f);
  }
 }
}
