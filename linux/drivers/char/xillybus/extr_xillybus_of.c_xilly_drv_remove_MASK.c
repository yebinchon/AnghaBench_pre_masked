
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 struct xilly_endpoint* FUNC_0 (struct device*) ;
 int FUNC_1 (struct xilly_endpoint*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct xilly_endpoint *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);

 return 0;
}
