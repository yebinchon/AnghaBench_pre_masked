
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct aspeed_i2c_bus {int lock; scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct aspeed_i2c_bus*,struct platform_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct platform_device* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct aspeed_i2c_bus *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_3(VAR_2->dev);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->lock, VAR_4);


 FUNC_4(0, VAR_2->base + VAR_0);
 FUNC_4(0xffffffff, VAR_2->base + VAR_1);

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 FUNC_2(&VAR_2->lock, VAR_4);

 return VAR_5;
}
