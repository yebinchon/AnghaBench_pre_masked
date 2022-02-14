
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_lvds {int bridge; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rcar_lvds* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rcar_lvds *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->bridge);

 return 0;
}
