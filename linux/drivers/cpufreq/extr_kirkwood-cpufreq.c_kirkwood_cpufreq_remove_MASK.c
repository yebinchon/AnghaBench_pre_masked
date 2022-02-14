
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int cpu_clk; int ddr_clk; int powersave_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 FUNC_1(&VAR_0);

 FUNC_0(VAR_1.powersave_clk);
 FUNC_0(VAR_1.ddr_clk);
 FUNC_0(VAR_1.cpu_clk);

 return 0;
}
