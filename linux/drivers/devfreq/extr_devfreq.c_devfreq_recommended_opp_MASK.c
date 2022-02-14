
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dev_pm_opp* FUNC_0 (int ) ;
 struct dev_pm_opp* FUNC_1 (struct device*,unsigned long*) ;
 struct dev_pm_opp* FUNC_2 (struct device*,unsigned long*) ;

struct dev_pm_opp *FUNC_3(struct device *VAR_2,
        unsigned long *VAR_3,
        u32 VAR_4)
{
 struct dev_pm_opp *VAR_5;

 if (VAR_4 & VAR_0) {

  VAR_5 = FUNC_2(VAR_2, VAR_3);


  if (VAR_5 == FUNC_0(-VAR_1))
   VAR_5 = FUNC_1(VAR_2, VAR_3);
 } else {

  VAR_5 = FUNC_1(VAR_2, VAR_3);


  if (VAR_5 == FUNC_0(-VAR_1))
   VAR_5 = FUNC_2(VAR_2, VAR_3);
 }

 return VAR_5;
}
