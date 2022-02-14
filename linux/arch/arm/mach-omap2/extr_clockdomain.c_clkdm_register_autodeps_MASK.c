
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptr; } ;
struct clkdm_autodep {TYPE_1__ clkdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clkdm_autodep*) ;
 struct clkdm_autodep* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct clkdm_autodep *VAR_5)
{
 struct clkdm_autodep *VAR_6 = ((void*)0);

 if (FUNC_1(&VAR_4))
  return -VAR_0;

 if (!VAR_5)
  return -VAR_2;

 if (VAR_3)
  return -VAR_1;

 VAR_3 = VAR_5;
 for (VAR_6 = VAR_3; VAR_6->clkdm.ptr; VAR_6++)
  FUNC_0(VAR_6);

 return 0;
}
