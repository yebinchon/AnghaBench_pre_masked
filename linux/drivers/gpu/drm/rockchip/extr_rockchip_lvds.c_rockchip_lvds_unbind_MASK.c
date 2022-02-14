
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_lvds {int encoder; int connector; scalar_t__ panel; } ;
struct device {int dummy; } ;


 struct rockchip_lvds* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0, struct device *VAR_1,
    void *VAR_2)
{
 struct rockchip_lvds *VAR_3 = FUNC_0(VAR_0);

 FUNC_5(&VAR_3->encoder);
 if (VAR_3->panel)
  FUNC_3(VAR_3->panel);
 FUNC_4(VAR_0);
 FUNC_1(&VAR_3->connector);
 FUNC_2(&VAR_3->encoder);
}
