
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;

 if (!VAR_3->of_node) {
  FUNC_0(VAR_3, "can't find vop devices\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_3, &VAR_1);
}
