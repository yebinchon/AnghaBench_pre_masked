
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int dummy; } ;
struct clkdm_dep {scalar_t__ clkdm_name; struct clockdomain* clkdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clkdm_dep* FUNC_0 (int ) ;
 struct clockdomain* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct clkdm_dep *FUNC_2(struct clockdomain *VAR_2,
         struct clkdm_dep *VAR_3)
{
 struct clkdm_dep *VAR_4;

 if (!VAR_2 || !VAR_3)
  return FUNC_0(-VAR_0);

 for (VAR_4 = VAR_3; VAR_4->clkdm_name; VAR_4++) {
  if (!VAR_4->clkdm && VAR_4->clkdm_name)
   VAR_4->clkdm = FUNC_1(VAR_4->clkdm_name);

  if (VAR_4->clkdm == VAR_2)
   break;
 }

 if (!VAR_4->clkdm_name)
  return FUNC_0(-VAR_1);

 return VAR_4;
}
