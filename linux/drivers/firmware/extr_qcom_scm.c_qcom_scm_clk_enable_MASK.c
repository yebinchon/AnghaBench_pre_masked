
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_clk; int iface_clk; int bus_clk; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->core_clk);
 if (VAR_1)
  goto bail;

 VAR_1 = FUNC_1(VAR_0->iface_clk);
 if (VAR_1)
  goto disable_core;

 VAR_1 = FUNC_1(VAR_0->bus_clk);
 if (VAR_1)
  goto disable_iface;

 return 0;

disable_iface:
 FUNC_0(VAR_0->iface_clk);
disable_core:
 FUNC_0(VAR_0->core_clk);
bail:
 return VAR_1;
}
