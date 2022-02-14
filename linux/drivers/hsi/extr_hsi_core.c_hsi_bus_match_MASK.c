
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,struct device_driver*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1))
  return 1;

 if (FUNC_2(FUNC_0(VAR_0), VAR_1->name) == 0)
  return 1;

 return 0;
}
