
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_context {TYPE_2__* drv_data; struct clk** clk_muxes; struct device* dev; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int count; int * data; } ;
struct TYPE_4__ {TYPE_1__ clk_muxes; } ;


 int FUNC_0 (struct clk*,struct clk*) ;
 int FUNC_1 (struct device*,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hdmi_context *VAR_0, bool VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->drv_data->clk_muxes.count; VAR_4 += 3) {
  struct clk **VAR_5 = &VAR_0->clk_muxes[VAR_4];

  VAR_3 = FUNC_0(VAR_5[2], VAR_5[VAR_1]);
  if (!VAR_3)
   continue;

  FUNC_1(VAR_2, "Cannot set clock parent of '%s' to '%s', %d\n",
   VAR_0->drv_data->clk_muxes.data[VAR_4 + 2],
   VAR_0->drv_data->clk_muxes.data[VAR_4 + VAR_1], VAR_3);
 }

 return VAR_3;
}
