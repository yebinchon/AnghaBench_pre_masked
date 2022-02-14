
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_color {int ddp_comp; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 struct mtk_disp_color* FUNC_1 (struct device*) ;
 int FUNC_2 (struct drm_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device *VAR_1,
          void *VAR_2)
{
 struct mtk_disp_color *VAR_3 = FUNC_1(VAR_0);
 struct drm_device *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, &VAR_3->ddp_comp);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0, "Failed to register component %pOF: %d\n",
   VAR_0->of_node, VAR_5);
  return VAR_5;
 }

 return 0;
}
