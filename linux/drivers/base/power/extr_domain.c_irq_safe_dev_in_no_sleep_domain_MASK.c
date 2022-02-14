
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct generic_pm_domain const*) ;
 int FUNC_2 (struct generic_pm_domain const*) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static inline bool FUNC_4(struct device *VAR_0,
  const struct generic_pm_domain *VAR_1)
{
 bool VAR_2;

 VAR_2 = FUNC_3(VAR_0) && !FUNC_2(VAR_1);






 if (VAR_2 && !FUNC_1(VAR_1))
  FUNC_0(VAR_0, "PM domain %s will not be powered off\n",
    VAR_1->name);

 return VAR_2;
}
