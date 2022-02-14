
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk_ops; } ;
struct ti_sci_handle {TYPE_1__ ops; } ;
struct sci_clk_provider {struct device* dev; int * ops; struct ti_sci_handle const* sci; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_handle const*) ;
 int FUNC_1 (struct ti_sci_handle const*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct sci_clk_provider* FUNC_3 (struct device*,int,int ) ;
 struct ti_sci_handle* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device_node*,int ,struct sci_clk_provider*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (struct sci_clk_provider*) ;
 int FUNC_8 (struct sci_clk_provider*) ;
 int FUNC_9 (struct sci_clk_provider*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct sci_clk_provider *VAR_6;
 const struct ti_sci_handle *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->sci = VAR_7;
 VAR_6->ops = &VAR_7->ops.clk_ops;
 VAR_6->dev = VAR_4;
 VAR_8 = FUNC_8(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_4, "scan clocks from DT failed: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_6("ti-sci-init-clocks failed.\n");
  return VAR_8;
 }

 return FUNC_5(VAR_5, VAR_2, VAR_6);
}
