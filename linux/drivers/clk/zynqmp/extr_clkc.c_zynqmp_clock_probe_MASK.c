
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->dev;

 VAR_0 = FUNC_3();
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_3->of_node);

 return VAR_2;
}
