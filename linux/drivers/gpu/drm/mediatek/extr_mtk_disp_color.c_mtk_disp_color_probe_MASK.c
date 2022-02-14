
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_disp_color {int data; int ddp_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct mtk_disp_color* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*,int ,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct platform_device*,struct mtk_disp_color*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mtk_disp_color *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6->of_node, VAR_2);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "Failed to identify by alias: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_6->of_node, &VAR_7->ddp_comp, VAR_8,
    &VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_6, "Failed to initialize component: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_7->data = FUNC_5(VAR_6);

 FUNC_6(VAR_5, VAR_7);

 VAR_9 = FUNC_0(VAR_6, &VAR_3);
 if (VAR_9)
  FUNC_1(VAR_6, "Failed to add component: %d\n", VAR_9);

 return VAR_9;
}
