
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct palmld_pata {int power; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 struct palmld_pata* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct palmld_pata *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);


 FUNC_1(VAR_1->power, 0);

 return 0;
}
