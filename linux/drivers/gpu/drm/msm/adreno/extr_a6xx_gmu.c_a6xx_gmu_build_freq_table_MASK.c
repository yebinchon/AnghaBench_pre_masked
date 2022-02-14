
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 scalar_t__ FUNC_1 (int,char*) ;
 struct dev_pm_opp* FUNC_2 (struct device*,unsigned long*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct dev_pm_opp*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, unsigned long *VAR_1,
  u32 VAR_2)
{
 int VAR_3 = FUNC_3(VAR_0);
 struct dev_pm_opp *VAR_4;
 int VAR_5, VAR_6 = 0;
 unsigned long VAR_7 = 1;






 if (FUNC_1(VAR_3 + 1 > VAR_2,
  "The GMU frequency table is being truncated\n"))
  VAR_3 = VAR_2 - 1;


 VAR_1[VAR_6++] = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_2(VAR_0, &VAR_7);
  if (FUNC_0(VAR_4))
   break;

  FUNC_4(VAR_4);
  VAR_1[VAR_6++] = VAR_7++;
 }

 return VAR_6;
}
