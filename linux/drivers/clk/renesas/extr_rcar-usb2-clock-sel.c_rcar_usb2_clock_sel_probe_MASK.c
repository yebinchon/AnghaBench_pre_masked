
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct clk_init_data* init; } ;
struct usb2_clock_sel_priv {int extal; int xtal; TYPE_1__ hw; struct clk* base; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char* name; scalar_t__ num_parents; int * parent_names; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 struct clk* FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct usb2_clock_sel_priv*) ;
 struct clk* FUNC_8 (struct device*,char*) ;
 struct usb2_clock_sel_priv* FUNC_9 (struct device*,int,int ) ;
 struct clk* FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_12 (struct platform_device*,struct usb2_clock_sel_priv*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct usb2_clock_sel_priv *VAR_8;
 struct clk *VAR_9;
 struct clk_init_data VAR_10;

 VAR_8 = FUNC_9(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->base = FUNC_10(VAR_5, 0);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 FUNC_13(VAR_6);
 FUNC_14(VAR_6);

 VAR_9 = FUNC_8(VAR_6, "usb_extal");
 if (!FUNC_0(VAR_9) && !FUNC_4(VAR_9)) {
  VAR_8->extal = !!FUNC_3(VAR_9);
  FUNC_2(VAR_9);
 }
 VAR_9 = FUNC_8(VAR_6, "usb_xtal");
 if (!FUNC_0(VAR_9) && !FUNC_4(VAR_9)) {
  VAR_8->xtal = !!FUNC_3(VAR_9);
  FUNC_2(VAR_9);
 }

 if (!VAR_8->extal && !VAR_8->xtal) {
  FUNC_6(VAR_6, "This driver needs usb_extal or usb_xtal\n");
  return -VAR_0;
 }

 FUNC_12(VAR_5, VAR_8);
 FUNC_7(VAR_6, VAR_8);

 VAR_10.name = "rcar_usb2_clock_sel";
 VAR_10.ops = &VAR_4;
 VAR_10.flags = 0;
 VAR_10.parent_names = ((void*)0);
 VAR_10.num_parents = 0;
 VAR_8->hw.init = &VAR_10;

 VAR_9 = FUNC_5(((void*)0), &VAR_8->hw);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 return FUNC_11(VAR_7, VAR_3, &VAR_8->hw);
}
