
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *,struct component_match*) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,struct component_match**,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct component_match *VAR_3 = ((void*)0);
 struct device *VAR_4 = &VAR_2->dev;

 FUNC_2(VAR_4, &VAR_3,
         VAR_0, FUNC_0(VAR_0));

 return FUNC_1(VAR_4, &VAR_1, VAR_3);
}
