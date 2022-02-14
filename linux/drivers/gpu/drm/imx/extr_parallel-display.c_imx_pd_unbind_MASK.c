
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_parallel_display {int edid; scalar_t__ panel; } ;
struct device {int dummy; } ;


 struct imx_parallel_display* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
 void *VAR_2)
{
 struct imx_parallel_display *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->panel)
  FUNC_1(VAR_3->panel);

 FUNC_2(VAR_3->edid);
}
