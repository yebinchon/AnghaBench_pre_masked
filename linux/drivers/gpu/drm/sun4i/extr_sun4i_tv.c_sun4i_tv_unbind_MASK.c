
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tv {int clk; int encoder; int connector; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun4i_tv* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
       void *VAR_2)
{
 struct sun4i_tv *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->connector);
 FUNC_3(&VAR_3->encoder);
 FUNC_0(VAR_3->clk);
}
