
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ pm_domain; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 struct device* FUNC_1 (struct device*,char const*) ;

struct device *FUNC_2(struct device *VAR_1,
         const char *VAR_2)
{
 if (VAR_1->pm_domain)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2);
}
