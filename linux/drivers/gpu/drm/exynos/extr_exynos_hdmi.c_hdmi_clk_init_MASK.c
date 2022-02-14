
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct hdmi_driver_data {TYPE_1__ clk_muxes; TYPE_1__ clk_gates; } ;
struct hdmi_context {struct clk** clk_muxes; struct clk** clk_gates; struct device* dev; struct hdmi_driver_data* drv_data; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk** FUNC_0 (struct device*,int,int,int ) ;
 int FUNC_1 (struct hdmi_context*,TYPE_1__*,struct clk**) ;

__attribute__((used)) static int FUNC_2(struct hdmi_context *VAR_2)
{
 const struct hdmi_driver_data *VAR_3 = VAR_2->drv_data;
 int VAR_4 = VAR_3->clk_gates.count + VAR_3->clk_muxes.count;
 struct device *VAR_5 = VAR_2->dev;
 struct clk **VAR_6;
 int VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_2->clk_gates = VAR_6;
 VAR_2->clk_muxes = VAR_6 + VAR_3->clk_gates.count;

 VAR_7 = FUNC_1(VAR_2, &VAR_3->clk_gates, VAR_2->clk_gates);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_2, &VAR_3->clk_muxes, VAR_2->clk_muxes);
}
