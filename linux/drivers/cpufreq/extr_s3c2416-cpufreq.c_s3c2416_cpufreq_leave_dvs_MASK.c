
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2416_dvfs {int vddarm_max; int vddarm_min; } ;
struct s3c2416_data {scalar_t__ is_dvs; int armdiv; int armclk; int hclk; scalar_t__ vddarm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct s3c2416_data*,int) ;
 struct s3c2416_dvfs* VAR_0 ;

__attribute__((used)) static int FUNC_6(struct s3c2416_data *VAR_1, int VAR_2)
{



 int VAR_3;

 if (!VAR_1->is_dvs) {
  FUNC_2("cpufreq: not in dvs mode, so can't leave\n");
  return 0;
 }
 if (FUNC_0(VAR_1->armdiv) > FUNC_0(VAR_1->hclk)) {
  FUNC_2("cpufreq: force armdiv to hclk frequency (%lukHz)\n",
    FUNC_0(VAR_1->hclk) / 1000);
  VAR_3 = FUNC_5(VAR_1,
     FUNC_0(VAR_1->hclk) / 1000);
  if (VAR_3 < 0) {
   FUNC_3("cpufreq: Failed to set the armdiv to %lukHz: %d\n",
          FUNC_0(VAR_1->hclk) / 1000, VAR_3);
   return VAR_3;
  }
 }

 FUNC_2("cpufreq: switching armclk parent to armdiv (%lukHz)\n",
   FUNC_0(VAR_1->armdiv) / 1000);

 VAR_3 = FUNC_1(VAR_1->armclk, VAR_1->armdiv);
 if (VAR_3 < 0) {
  FUNC_3("cpufreq: Failed to switch armclk clock parent to armdiv: %d\n",
         VAR_3);
  return VAR_3;
 }

 VAR_1->is_dvs = 0;

 return 0;
}
