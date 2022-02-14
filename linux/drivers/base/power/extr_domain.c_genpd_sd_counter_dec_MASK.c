
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int sd_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct generic_pm_domain *VAR_0)
{
 bool VAR_1 = 0;

 if (!FUNC_0(FUNC_2(&VAR_0->sd_count) == 0))
  VAR_1 = !!FUNC_1(&VAR_0->sd_count);

 return VAR_1;
}
