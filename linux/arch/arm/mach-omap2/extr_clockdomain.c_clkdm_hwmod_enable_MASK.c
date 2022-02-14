
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int dummy; } ;
struct clockdomain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clockdomain*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(struct clockdomain *VAR_1, struct omap_hwmod *VAR_2)
{

 if (FUNC_1() || FUNC_2())
  return 0;






 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1);
}
