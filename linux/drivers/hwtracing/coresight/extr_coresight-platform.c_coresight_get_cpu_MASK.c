
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int fwnode; } ;


 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 if (FUNC_2(VAR_0->fwnode))
  return FUNC_3(VAR_0);
 else if (FUNC_1(VAR_0->fwnode))
  return FUNC_0(VAR_0);
 return 0;
}
