
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct p2wi {int adapter; int clk; int rstc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct p2wi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct p2wi *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->rstc);
 FUNC_0(VAR_1->clk);
 FUNC_1(&VAR_1->adapter);

 return 0;
}
