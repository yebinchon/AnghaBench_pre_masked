
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct component_match {int dummy; } ;


 scalar_t__ FUNC_0 (struct component_match*) ;
 int FUNC_1 (struct component_match*) ;
 int FUNC_2 (struct device*,int *,struct component_match*) ;
 struct component_match* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int VAR_0 ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct component_match *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_2, &VAR_0, VAR_3);
 if (VAR_4 < 0) {
  FUNC_4(VAR_2);
  return VAR_4;
 }

 return 0;
}
