
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ pm_domain; } ;


 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (VAR_0->pm_domain)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0);

 return VAR_2 < 0 ? VAR_2 : 0;
}
