
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct resource*,int) ;
 int FUNC_1 (struct platform_device*,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct resource *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_1, 0);
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_2, 0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(&VAR_2->dev, VAR_3, VAR_4);
}
