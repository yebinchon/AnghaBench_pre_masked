
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nct6775_data {int* fan_div; int has_fan_min; int* fan_min; int * REG_FAN_MIN; int has_fan_div; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nct6775_data*,int) ;
 int FUNC_4 (struct nct6775_data*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0,
       struct nct6775_data *VAR_1, int VAR_2, u16 VAR_3)
{
 u8 VAR_4 = VAR_1->fan_div[VAR_2];
 u16 VAR_5;

 if (!VAR_1->has_fan_div)
  return;






 if (VAR_3 == 0x00 && VAR_4 < 0x07)
  VAR_4++;
 else if (VAR_3 != 0x00 && VAR_3 < 0x30 && VAR_4 > 0)
  VAR_4--;

 if (VAR_4 != VAR_1->fan_div[VAR_2]) {
  FUNC_1(VAR_0, "Modifying fan%d clock divider from %u to %u\n",
   VAR_2 + 1, FUNC_2(VAR_1->fan_div[VAR_2]),
   FUNC_2(VAR_4));


  if (VAR_1->has_fan_min & FUNC_0(VAR_2)) {
   VAR_5 = VAR_1->fan_min[VAR_2];
   if (VAR_4 > VAR_1->fan_div[VAR_2]) {
    if (VAR_5 != 255 && VAR_5 > 1)
     VAR_5 >>= 1;
   } else {
    if (VAR_5 != 255) {
     VAR_5 <<= 1;
     if (VAR_5 > 254)
      VAR_5 = 254;
    }
   }
   if (VAR_5 != VAR_1->fan_min[VAR_2]) {
    VAR_1->fan_min[VAR_2] = VAR_5;
    FUNC_4(VAR_1, VAR_1->REG_FAN_MIN[VAR_2],
          VAR_5);
   }
  }
  VAR_1->fan_div[VAR_2] = VAR_4;
  FUNC_3(VAR_1, VAR_2);
 }
}
