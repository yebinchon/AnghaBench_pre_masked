
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct aspeed_i2c_bus {int adap; int rst; int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct aspeed_i2c_bus* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct aspeed_i2c_bus *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);


 FUNC_5(0, VAR_3->base + VAR_0);
 FUNC_5(0, VAR_3->base + VAR_1);

 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_3->rst);

 FUNC_0(&VAR_3->adap);

 return 0;
}
