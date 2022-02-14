
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {int ddp_comp; int host; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct mtk_dsi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (struct mtk_dsi*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2;
 struct mtk_dsi *VAR_4 = FUNC_0(VAR_0);

 FUNC_3(VAR_4);
 FUNC_1(&VAR_4->host);
 FUNC_2(VAR_3, &VAR_4->ddp_comp);
}
