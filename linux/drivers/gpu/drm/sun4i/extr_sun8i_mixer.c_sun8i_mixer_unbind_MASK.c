
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct sun8i_mixer {int reset; int bus_clk; int mod_clk; TYPE_1__ engine; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun8i_mixer* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
     void *VAR_2)
{
 struct sun8i_mixer *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->engine.list);

 FUNC_0(VAR_3->mod_clk);
 FUNC_0(VAR_3->bus_clk);
 FUNC_3(VAR_3->reset);
}
