
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dw_dsi {int bridge; struct dsi_hw_ctx* ctx; } ;
struct dsi_hw_ctx {int base; int pclk; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 int FUNC_5 (struct device_node*,int,int ,int *,int *) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1, struct dw_dsi *VAR_2)
{
 struct dsi_hw_ctx *VAR_3 = VAR_2->ctx;
 struct device_node *VAR_4 = VAR_1->dev.of_node;
 struct resource *VAR_5;
 int VAR_6;





 VAR_6 = FUNC_5(VAR_4, 1, 0, ((void*)0), &VAR_2->bridge);
 if (VAR_6)
  return VAR_6;

 VAR_3->pclk = FUNC_3(&VAR_1->dev, "pclk");
 if (FUNC_1(VAR_3->pclk)) {
  FUNC_0("failed to get pclk clock\n");
  return FUNC_2(VAR_3->pclk);
 }

 VAR_5 = FUNC_6(VAR_1, VAR_0, 0);
 VAR_3->base = FUNC_4(&VAR_1->dev, VAR_5);
 if (FUNC_1(VAR_3->base)) {
  FUNC_0("failed to remap dsi io region\n");
  return FUNC_2(VAR_3->base);
 }

 return 0;
}
