
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_1);

 if (!VAR_1->of_node)
  return 0;

 FUNC_1(VAR_1->of_node, VAR_0);
 FUNC_0(VAR_3);

 return 0;
}
