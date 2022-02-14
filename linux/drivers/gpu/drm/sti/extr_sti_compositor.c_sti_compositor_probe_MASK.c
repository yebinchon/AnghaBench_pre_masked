
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sti_compositor_data {int dummy; } ;
struct sti_compositor {void** vtg; void* rst_aux; void* rst_main; void* clk_pix_aux; void* clk_pix_main; void* clk_compo_aux; void* clk_compo_main; int * regs; int data; TYPE_1__* vtg_vblank_nb; struct device* dev; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int notifier_call; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (struct device*,int *) ;
 int VAR_7 ;
 void* FUNC_5 (struct device*,char*) ;
 int * FUNC_6 (struct device*,int ,int ) ;
 struct sti_compositor* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (int *,int ,int) ;
 TYPE_2__* FUNC_10 (int ,struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int) ;
 void* FUNC_13 (struct device_node*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct sti_compositor*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (struct resource*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct device_node *VAR_13;
 struct sti_compositor *VAR_14;
 struct resource *VAR_15;
 unsigned int VAR_16;

 VAR_14 = FUNC_7(VAR_11, sizeof(*VAR_14), VAR_2);
 if (!VAR_14) {
  FUNC_1("Failed to allocate compositor context\n");
  return -VAR_0;
 }
 VAR_14->dev = VAR_11;
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
  VAR_14->vtg_vblank_nb[VAR_16].notifier_call = VAR_9;


 FUNC_0(!FUNC_10(VAR_7, VAR_12)->data);

 FUNC_9(&VAR_14->data, FUNC_10(VAR_7, VAR_12)->data,
        sizeof(struct sti_compositor_data));


 VAR_15 = FUNC_14(VAR_10, VAR_3, 0);
 if (VAR_15 == ((void*)0)) {
  FUNC_1("Get memory resource failed\n");
  return -VAR_1;
 }
 VAR_14->regs = FUNC_6(VAR_11, VAR_15->start, FUNC_17(VAR_15));
 if (VAR_14->regs == ((void*)0)) {
  FUNC_1("Register mapping failed\n");
  return -VAR_1;
 }


 VAR_14->clk_compo_main = FUNC_5(VAR_11, "compo_main");
 if (FUNC_2(VAR_14->clk_compo_main)) {
  FUNC_1("Cannot get compo_main clock\n");
  return FUNC_3(VAR_14->clk_compo_main);
 }

 VAR_14->clk_compo_aux = FUNC_5(VAR_11, "compo_aux");
 if (FUNC_2(VAR_14->clk_compo_aux)) {
  FUNC_1("Cannot get compo_aux clock\n");
  return FUNC_3(VAR_14->clk_compo_aux);
 }

 VAR_14->clk_pix_main = FUNC_5(VAR_11, "pix_main");
 if (FUNC_2(VAR_14->clk_pix_main)) {
  FUNC_1("Cannot get pix_main clock\n");
  return FUNC_3(VAR_14->clk_pix_main);
 }

 VAR_14->clk_pix_aux = FUNC_5(VAR_11, "pix_aux");
 if (FUNC_2(VAR_14->clk_pix_aux)) {
  FUNC_1("Cannot get pix_aux clock\n");
  return FUNC_3(VAR_14->clk_pix_aux);
 }


 VAR_14->rst_main = FUNC_8(VAR_11, "compo-main");

 if (!FUNC_2(VAR_14->rst_main))
  FUNC_16(VAR_14->rst_main);

 VAR_14->rst_aux = FUNC_8(VAR_11, "compo-aux");

 if (!FUNC_2(VAR_14->rst_aux))
  FUNC_16(VAR_14->rst_aux);

 VAR_13 = FUNC_12(VAR_10->dev.of_node, "st,vtg", 0);
 if (VAR_13)
  VAR_14->vtg[VAR_6] = FUNC_13(VAR_13);
 FUNC_11(VAR_13);

 VAR_13 = FUNC_12(VAR_10->dev.of_node, "st,vtg", 1);
 if (VAR_13)
  VAR_14->vtg[VAR_5] = FUNC_13(VAR_13);
 FUNC_11(VAR_13);

 FUNC_15(VAR_10, VAR_14);

 return FUNC_4(&VAR_10->dev, &VAR_8);
}
