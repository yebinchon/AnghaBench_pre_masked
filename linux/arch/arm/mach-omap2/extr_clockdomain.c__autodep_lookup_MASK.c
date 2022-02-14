
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int dummy; } ;
struct TYPE_2__ {struct clockdomain* ptr; int name; } ;
struct clkdm_autodep {TYPE_1__ clkdm; } ;


 int VAR_0 ;
 struct clockdomain* FUNC_0 (int ) ;
 struct clockdomain* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct clkdm_autodep *VAR_1)
{
 struct clockdomain *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1->clkdm.name);
 if (!VAR_2) {
  FUNC_2("clockdomain: autodeps: clockdomain %s does not exist\n",
    VAR_1->clkdm.name);
  VAR_2 = FUNC_0(-VAR_0);
 }
 VAR_1->clkdm.ptr = VAR_2;
}
