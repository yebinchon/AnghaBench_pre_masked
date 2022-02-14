
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct gdsc {scalar_t__ pwrsts; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gdsc* FUNC_0 (struct generic_pm_domain*) ;
 int FUNC_1 (struct gdsc*) ;
 int FUNC_2 (struct gdsc*) ;
 int FUNC_3 (struct gdsc*) ;
 int FUNC_4 (struct gdsc*,int) ;
 int FUNC_5 (struct gdsc*,int ) ;
 int FUNC_6 (struct gdsc*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct generic_pm_domain *VAR_6)
{
 struct gdsc *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 if (VAR_7->pwrsts == VAR_5)
  return FUNC_2(VAR_7);


 if (VAR_7->flags & VAR_3) {
  VAR_8 = FUNC_4(VAR_7, 0);
  if (VAR_8 < 0)
   return VAR_8;






  FUNC_7(1);

  VAR_8 = FUNC_5(VAR_7, VAR_2);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_7->pwrsts & VAR_4)
  FUNC_3(VAR_7);

 VAR_8 = FUNC_6(VAR_7, VAR_1);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->flags & VAR_0)
  FUNC_1(VAR_7);

 return 0;
}
