
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_cookie {scalar_t__ clkdm; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
         const struct ti_sysc_cookie *VAR_1)
{
 if (VAR_1->clkdm)
  FUNC_0(VAR_1->clkdm);
}
