
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi {int mode; } ;
struct drm_encoder {int dummy; } ;


 struct mtk_dpi* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct mtk_dpi*) ;
 int FUNC_2 (struct mtk_dpi*,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0)
{
 struct mtk_dpi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1, &VAR_1->mode);
}
