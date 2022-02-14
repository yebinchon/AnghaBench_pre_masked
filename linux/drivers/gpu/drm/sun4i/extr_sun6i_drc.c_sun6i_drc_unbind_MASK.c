
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_drc {int reset; int bus_clk; int mod_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun6i_drc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
       void *VAR_2)
{
 struct sun6i_drc *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->mod_clk);
 FUNC_0(VAR_3->bus_clk);
 FUNC_2(VAR_3->reset);
}
