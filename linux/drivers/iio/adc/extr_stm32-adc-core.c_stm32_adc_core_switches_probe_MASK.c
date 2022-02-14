
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adc_priv {int vdd_uv; int * vdd; TYPE_1__* cfg; int * booster; int * syscfg; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {int has_syscfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4,
      struct stm32_adc_priv *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->of_node;
 int VAR_7;


 VAR_5->syscfg = FUNC_8(VAR_6, "st,syscfg");
 if (FUNC_0(VAR_5->syscfg)) {
  VAR_7 = FUNC_1(VAR_5->syscfg);
  if (VAR_7 != -VAR_0) {
   if (VAR_7 != -VAR_1)
    FUNC_2(VAR_4, "Can't probe syscfg: %d\n", VAR_7);
   return VAR_7;
  }
  VAR_5->syscfg = ((void*)0);
 }


 if (VAR_5->cfg->has_syscfg & VAR_3 &&
     FUNC_4(VAR_6, "booster-supply")) {
  VAR_5->booster = FUNC_3(VAR_4, "booster");
  if (FUNC_0(VAR_5->booster)) {
   VAR_7 = FUNC_1(VAR_5->booster);
   if (VAR_7 != -VAR_0) {
    if (VAR_7 != -VAR_1)
     FUNC_2(VAR_4, "can't get booster %d\n",
      VAR_7);
    return VAR_7;
   }
   VAR_5->booster = ((void*)0);
  }
 }


 if (VAR_5->cfg->has_syscfg & VAR_2 &&
     FUNC_4(VAR_6, "vdd-supply")) {
  VAR_5->vdd = FUNC_3(VAR_4, "vdd");
  if (FUNC_0(VAR_5->vdd)) {
   VAR_7 = FUNC_1(VAR_5->vdd);
   if (VAR_7 != -VAR_0) {
    if (VAR_7 != -VAR_1)
     FUNC_2(VAR_4, "can't get vdd %d\n", VAR_7);
    return VAR_7;
   }
   VAR_5->vdd = ((void*)0);
  }
 }

 if (VAR_5->vdd) {
  VAR_7 = FUNC_6(VAR_5->vdd);
  if (VAR_7 < 0) {
   FUNC_2(VAR_4, "vdd enable failed %d\n", VAR_7);
   return VAR_7;
  }

  VAR_7 = FUNC_7(VAR_5->vdd);
  if (VAR_7 < 0) {
   FUNC_2(VAR_4, "vdd get voltage failed %d\n", VAR_7);
   FUNC_5(VAR_5->vdd);
   return VAR_7;
  }
  VAR_5->vdd_uv = VAR_7;

  FUNC_5(VAR_5->vdd);
 }

 return 0;
}
