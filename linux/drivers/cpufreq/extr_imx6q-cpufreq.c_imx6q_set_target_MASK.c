
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dev_pm_opp {int dummy; } ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {unsigned int frequency; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct dev_pm_opp*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct dev_pm_opp* VAR_7 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,unsigned int) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,unsigned int,unsigned long,unsigned int,unsigned long) ;
 int FUNC_8 (int ,char*,int) ;
 struct dev_pm_opp* FUNC_9 (int ,unsigned long*) ;
 unsigned long FUNC_10 (struct dev_pm_opp*) ;
 int FUNC_11 (struct dev_pm_opp*) ;
 int FUNC_12 (int ,char*,int) ;
 TYPE_1__* VAR_10 ;
 unsigned long* VAR_11 ;
 scalar_t__ FUNC_13 (char*) ;
 struct dev_pm_opp* VAR_12 ;
 unsigned long FUNC_14 (struct dev_pm_opp*) ;
 int FUNC_15 (struct dev_pm_opp*,unsigned long,int ) ;
 struct dev_pm_opp* VAR_13 ;

__attribute__((used)) static int FUNC_16(struct cpufreq_policy *VAR_14, unsigned int VAR_15)
{
 struct dev_pm_opp *VAR_16;
 unsigned long VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 bool VAR_22 = 0;
 int VAR_23;

 VAR_21 = VAR_10[VAR_15].frequency;
 VAR_17 = VAR_21 * 1000;
 VAR_20 = FUNC_3(VAR_8[VAR_0].clk) / 1000;

 VAR_16 = FUNC_9(VAR_9, &VAR_17);
 if (FUNC_0(VAR_16)) {
  FUNC_8(VAR_9, "failed to find OPP for %ld\n", VAR_17);
  return FUNC_1(VAR_16);
 }

 VAR_18 = FUNC_10(VAR_16);
 FUNC_11(VAR_16);

 VAR_19 = FUNC_14(VAR_7);

 FUNC_7(VAR_9, "%u MHz, %ld mV --> %u MHz, %ld mV\n",
  VAR_20 / 1000, VAR_19 / 1000,
  VAR_21 / 1000, VAR_18 / 1000);


 if (VAR_21 > VAR_20) {
  if (!FUNC_0(VAR_12)) {
   VAR_23 = FUNC_15(VAR_12, VAR_11[VAR_15], 0);
   if (VAR_23) {
    FUNC_8(VAR_9, "failed to scale vddpu up: %d\n", VAR_23);
    return VAR_23;
   }
  }
  VAR_23 = FUNC_15(VAR_13, VAR_11[VAR_15], 0);
  if (VAR_23) {
   FUNC_8(VAR_9, "failed to scale vddsoc up: %d\n", VAR_23);
   return VAR_23;
  }
  VAR_23 = FUNC_15(VAR_7, VAR_18, 0);
  if (VAR_23) {
   FUNC_8(VAR_9,
    "failed to scale vddarm up: %d\n", VAR_23);
   return VAR_23;
  }
 }
 if (FUNC_13("fsl,imx6ul") ||
     FUNC_13("fsl,imx6ull")) {







  FUNC_6(VAR_8[VAR_0].clk, (VAR_20 >> 1) * 1000);
  FUNC_5(VAR_8[VAR_1].clk, VAR_8[VAR_2].clk);
  if (VAR_17 > FUNC_3(VAR_8[VAR_4].clk))
   FUNC_5(VAR_8[VAR_5].clk,
           VAR_8[VAR_3].clk);
  else
   FUNC_5(VAR_8[VAR_5].clk,
           VAR_8[VAR_4].clk);
  FUNC_5(VAR_8[VAR_6].clk, VAR_8[VAR_5].clk);
  FUNC_5(VAR_8[VAR_1].clk, VAR_8[VAR_6].clk);
  if (VAR_17 > FUNC_3(VAR_8[VAR_3].clk)) {
   FUNC_6(VAR_8[VAR_2].clk, VAR_21 * 1000);
   FUNC_5(VAR_8[VAR_1].clk, VAR_8[VAR_2].clk);
  }
 } else {
  FUNC_5(VAR_8[VAR_6].clk, VAR_8[VAR_4].clk);
  FUNC_5(VAR_8[VAR_1].clk, VAR_8[VAR_6].clk);
  if (VAR_17 > FUNC_3(VAR_8[VAR_4].clk)) {
   FUNC_6(VAR_8[VAR_2].clk, VAR_21 * 1000);
   FUNC_5(VAR_8[VAR_1].clk, VAR_8[VAR_2].clk);
  } else {

   VAR_22 = 1;
   FUNC_4(VAR_8[VAR_2].clk);
  }
 }


 VAR_23 = FUNC_6(VAR_8[VAR_0].clk, VAR_21 * 1000);
 if (VAR_23) {
  int VAR_24;

  FUNC_8(VAR_9, "failed to set clock rate: %d\n", VAR_23);
  VAR_24 = FUNC_15(VAR_7, VAR_19, 0);
  if (VAR_24)
   FUNC_12(VAR_9,
     "failed to restore vddarm voltage: %d\n", VAR_24);
  return VAR_23;
 }


 if (VAR_22)
  FUNC_2(VAR_8[VAR_2].clk);


 if (VAR_21 < VAR_20) {
  VAR_23 = FUNC_15(VAR_7, VAR_18, 0);
  if (VAR_23)
   FUNC_12(VAR_9,
     "failed to scale vddarm down: %d\n", VAR_23);
  VAR_23 = FUNC_15(VAR_13, VAR_11[VAR_15], 0);
  if (VAR_23)
   FUNC_12(VAR_9, "failed to scale vddsoc down: %d\n", VAR_23);
  if (!FUNC_0(VAR_12)) {
   VAR_23 = FUNC_15(VAR_12, VAR_11[VAR_15], 0);
   if (VAR_23)
    FUNC_12(VAR_9, "failed to scale vddpu down: %d\n", VAR_23);
  }
 }

 return 0;
}
