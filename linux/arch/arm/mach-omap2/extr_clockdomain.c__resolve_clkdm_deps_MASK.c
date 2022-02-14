
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int name; } ;
struct clkdm_dep {scalar_t__ clkdm_name; scalar_t__ clkdm; } ;


 int FUNC_0 (int,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct clockdomain *VAR_0,
    struct clkdm_dep *VAR_1)
{
 struct clkdm_dep *VAR_2;

 for (VAR_2 = VAR_1; VAR_2 && VAR_2->clkdm_name; VAR_2++) {
  if (VAR_2->clkdm)
   continue;
  VAR_2->clkdm = FUNC_1(VAR_2->clkdm_name);

  FUNC_0(!VAR_2->clkdm, "clockdomain: %s: could not find clkdm %s while resolving dependencies - should never happen",
       VAR_0->name, VAR_2->clkdm_name);
 }
}
