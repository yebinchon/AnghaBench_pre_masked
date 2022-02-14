
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {unsigned long fast_rate; struct dev_pm_opp* icc_path; } ;
struct device {int of_node; } ;
struct dev_pm_opp {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct dev_pm_opp*) ;
 unsigned long VAR_0 ;
 int FUNC_3 (struct device*) ;
 struct dev_pm_opp* FUNC_4 (struct device*,unsigned long*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (int ,char*,int *) ;
 struct dev_pm_opp* FUNC_9 (struct device*,int *) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_1,
  struct msm_gpu *VAR_2)
{
 unsigned long VAR_3 = VAR_0;
 struct dev_pm_opp *VAR_4;
 int VAR_5;

 VAR_2->fast_rate = 0;


 if (!FUNC_8(VAR_1->of_node, "operating-points-v2", ((void*)0)))
  VAR_5 = FUNC_3(VAR_1);
 else {
  VAR_5 = FUNC_5(VAR_1);
  if (VAR_5)
   FUNC_1(VAR_1, "Unable to set the OPP table\n");
 }

 if (!VAR_5) {

  VAR_4 = FUNC_4(VAR_1, &VAR_3);
  if (!FUNC_2(VAR_4)) {
   VAR_2->fast_rate = VAR_3;
   FUNC_6(VAR_4);
  }
 }

 if (!VAR_2->fast_rate) {
  FUNC_7(VAR_1,
   "Could not find a clock rate. Using a reasonable default\n");

  VAR_2->fast_rate = 200000000;
 }

 FUNC_0("fast_rate=%u, slow_rate=27000000", VAR_2->fast_rate);


 VAR_2->icc_path = FUNC_9(VAR_1, ((void*)0));
 if (FUNC_2(VAR_2->icc_path))
  VAR_2->icc_path = ((void*)0);

 return 0;
}
