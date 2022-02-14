
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_context {int * clk_gates; TYPE_2__* drv_data; int dev; } ;
struct TYPE_3__ {int count; int * data; } ;
struct TYPE_4__ {TYPE_1__ clk_gates; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hdmi_context *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->drv_data->clk_gates.count; ++VAR_1) {
  VAR_2 = FUNC_1(VAR_0->clk_gates[VAR_1]);
  if (!VAR_2)
   continue;

  FUNC_2(VAR_0->dev, "Cannot enable clock '%s', %d\n",
   VAR_0->drv_data->clk_gates.data[VAR_1], VAR_2);
  while (VAR_1--)
   FUNC_0(VAR_0->clk_gates[VAR_1]);
  return VAR_2;
 }

 return 0;
}
