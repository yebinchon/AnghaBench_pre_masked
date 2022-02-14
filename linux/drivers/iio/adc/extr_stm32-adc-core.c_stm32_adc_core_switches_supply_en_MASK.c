
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc_priv {int vdda_uv; int vdd_uv; scalar_t__ booster; scalar_t__ vdd; scalar_t__ syscfg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct stm32_adc_priv *VAR_2,
          struct device *VAR_3)
{
 int VAR_4;
 if (VAR_2->vdda_uv < 2700000) {
  if (VAR_2->syscfg && VAR_2->vdd_uv > 2700000) {
   VAR_4 = FUNC_4(VAR_2->vdd);
   if (VAR_4 < 0) {
    FUNC_1(VAR_3, "vdd enable failed %d\n", VAR_4);
    return VAR_4;
   }

   VAR_4 = FUNC_2(VAR_2->syscfg,
        VAR_1,
        VAR_0);
   if (VAR_4 < 0) {
    FUNC_3(VAR_2->vdd);
    FUNC_1(VAR_3, "vdd select failed, %d\n", VAR_4);
    return VAR_4;
   }
   FUNC_0(VAR_3, "analog switches supplied by vdd\n");

   return 0;
  }

  if (VAR_2->booster) {




   VAR_4 = FUNC_4(VAR_2->booster);
   if (VAR_4 < 0) {
    FUNC_1(VAR_3, "booster enable failed %d\n", VAR_4);
    return VAR_4;
   }
   FUNC_0(VAR_3, "analog switches supplied by booster\n");

   return 0;
  }
 }


 FUNC_0(VAR_3, "analog switches supplied by vdda (%d uV)\n",
  VAR_2->vdda_uv);

 return 0;
}
