
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65086_gpio {int chip; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tps65086_gpio* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct tps65086_gpio *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->chip);

 return 0;
}
