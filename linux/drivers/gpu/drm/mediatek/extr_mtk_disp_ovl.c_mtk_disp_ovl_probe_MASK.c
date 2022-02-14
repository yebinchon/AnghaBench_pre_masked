
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_disp_ovl {int data; int ddp_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*) ;
 struct mtk_disp_ovl* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int ,int ,int ,struct mtk_disp_ovl*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct device*,int ,int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct mtk_disp_ovl*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mtk_disp_ovl *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_7, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_5(VAR_8->of_node, VAR_3);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8, "Failed to identify by alias: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_12 = FUNC_6(VAR_8, VAR_8->of_node, &VAR_9->ddp_comp, VAR_10,
    &VAR_5);
 if (VAR_12) {
  FUNC_1(VAR_8, "Failed to initialize component: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->data = FUNC_7(VAR_8);

 FUNC_9(VAR_7, VAR_9);

 VAR_12 = FUNC_4(VAR_8, VAR_11, VAR_6,
          VAR_2, FUNC_2(VAR_8), VAR_9);
 if (VAR_12 < 0) {
  FUNC_1(VAR_8, "Failed to request irq %d: %d\n", VAR_11, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_8, &VAR_4);
 if (VAR_12)
  FUNC_1(VAR_8, "Failed to add component: %d\n", VAR_12);

 return VAR_12;
}
