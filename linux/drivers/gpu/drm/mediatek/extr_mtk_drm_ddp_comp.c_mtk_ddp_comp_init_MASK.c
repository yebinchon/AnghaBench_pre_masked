
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_ddp_comp_funcs {int dummy; } ;
struct mtk_ddp_comp {int id; int * larb_dev; int * clk; scalar_t__ irq; int * regs; int funcs; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum mtk_ddp_comp_type { ____Placeholder_mtk_ddp_comp_type } mtk_ddp_comp_type ;
typedef enum mtk_ddp_comp_id { ____Placeholder_mtk_ddp_comp_id } mtk_ddp_comp_id ;
struct TYPE_2__ {int type; int funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,struct device_node*) ;
 int FUNC_3 (struct device*,char*,struct device_node*) ;
 TYPE_1__* VAR_14 ;
 int * FUNC_4 (struct device_node*,int ) ;
 struct platform_device* FUNC_5 (struct device_node*) ;
 int * FUNC_6 (struct device_node*,int ) ;
 scalar_t__ FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (struct device_node*,char*,int ) ;

int FUNC_10(struct device *VAR_15, struct device_node *VAR_16,
        struct mtk_ddp_comp *VAR_17, enum mtk_ddp_comp_id VAR_18,
        const struct mtk_ddp_comp_funcs *VAR_19)
{
 enum mtk_ddp_comp_type VAR_20;
 struct device_node *VAR_21;
 struct platform_device *VAR_22;

 if (VAR_18 < 0 || VAR_18 >= VAR_7)
  return -VAR_9;

 VAR_20 = VAR_14[VAR_18].type;

 VAR_17->id = VAR_18;
 VAR_17->funcs = VAR_19 ?: VAR_14[VAR_18].funcs;

 if (VAR_18 == VAR_0 ||
     VAR_18 == VAR_1 ||
     VAR_18 == VAR_2 ||
     VAR_18 == VAR_3 ||
     VAR_18 == VAR_4 ||
     VAR_18 == VAR_5 ||
     VAR_18 == VAR_6 ||
     VAR_18 == VAR_8) {
  VAR_17->regs = ((void*)0);
  VAR_17->clk = ((void*)0);
  VAR_17->irq = 0;
  return 0;
 }

 VAR_17->regs = FUNC_6(VAR_16, 0);
 VAR_17->irq = FUNC_7(VAR_16, 0);
 VAR_17->clk = FUNC_4(VAR_16, 0);
 if (FUNC_0(VAR_17->clk))
  return FUNC_1(VAR_17->clk);


 VAR_17->larb_dev = ((void*)0);
 if (VAR_20 != VAR_11 &&
     VAR_20 != VAR_12 &&
     VAR_20 != VAR_13)
  return 0;

 VAR_21 = FUNC_9(VAR_16, "mediatek,larb", 0);
 if (!VAR_21) {
  FUNC_2(VAR_15,
   "Missing mediadek,larb phandle in %pOF node\n", VAR_16);
  return -VAR_9;
 }

 VAR_22 = FUNC_5(VAR_21);
 if (!VAR_22) {
  FUNC_3(VAR_15, "Waiting for larb device %pOF\n", VAR_21);
  FUNC_8(VAR_21);
  return -VAR_10;
 }
 FUNC_8(VAR_21);

 VAR_17->larb_dev = &VAR_22->dev;

 return 0;
}
