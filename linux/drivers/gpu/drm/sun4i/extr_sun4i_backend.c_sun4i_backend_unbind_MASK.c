
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct sun4i_backend {int reset; int bus_clk; int mod_clk; int ram_clk; TYPE_1__ engine; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 struct sun4i_backend* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0, struct device *VAR_1,
     void *VAR_2)
{
 struct sun4i_backend *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->engine.list);

 if (FUNC_3(VAR_0->of_node,
        "allwinner,sun8i-a33-display-backend"))
  FUNC_5(VAR_0);

 FUNC_0(VAR_3->ram_clk);
 FUNC_0(VAR_3->mod_clk);
 FUNC_0(VAR_3->bus_clk);
 FUNC_4(VAR_3->reset);
}
