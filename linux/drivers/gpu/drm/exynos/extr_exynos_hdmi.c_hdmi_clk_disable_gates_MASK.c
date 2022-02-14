
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_context {int * clk_gates; TYPE_2__* drv_data; } ;
struct TYPE_3__ {int count; } ;
struct TYPE_4__ {TYPE_1__ clk_gates; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hdmi_context *VAR_0)
{
 int VAR_1 = VAR_0->drv_data->clk_gates.count;

 while (VAR_1--)
  FUNC_0(VAR_0->clk_gates[VAR_1]);
}
