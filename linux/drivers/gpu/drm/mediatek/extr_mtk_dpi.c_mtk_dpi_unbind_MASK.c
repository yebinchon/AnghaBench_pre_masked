
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi {int ddp_comp; int encoder; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct mtk_dpi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct mtk_dpi *VAR_3 = FUNC_0(VAR_0);
 struct drm_device *VAR_4 = VAR_2;

 FUNC_1(&VAR_3->encoder);
 FUNC_2(VAR_4, &VAR_3->ddp_comp);
}
