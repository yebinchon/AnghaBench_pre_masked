
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct component_ops {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct component_ops const*,int) ;

int FUNC_2(struct device *VAR_1, const struct component_ops *VAR_2,
 int VAR_3)
{
 if (FUNC_0(VAR_3 == 0))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
