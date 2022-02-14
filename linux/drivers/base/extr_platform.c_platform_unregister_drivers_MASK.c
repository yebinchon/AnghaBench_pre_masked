
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {int dummy; } ;


 int FUNC_0 (struct platform_driver* const) ;
 int FUNC_1 (char*,struct platform_driver* const) ;

void FUNC_2(struct platform_driver * const *VAR_0,
     unsigned int VAR_1)
{
 while (VAR_1--) {
  FUNC_1("unregistering platform driver %ps\n", VAR_0[VAR_1]);
  FUNC_0(VAR_0[VAR_1]);
 }
}
