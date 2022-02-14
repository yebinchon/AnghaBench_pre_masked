
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int dummy; } ;
struct clockdomain {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clockdomain* FUNC_0 (struct omap_hwmod*) ;
 int FUNC_1 (struct clockdomain*,struct clockdomain*) ;

__attribute__((used)) static int FUNC_2(struct omap_hwmod *VAR_2, struct omap_hwmod *VAR_3)
{
 struct clockdomain *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 if (!VAR_4 || !VAR_5)
  return -VAR_1;

 if (VAR_4 && VAR_4->flags & VAR_0)
  return 0;

 return FUNC_1(VAR_4, VAR_5);
}
