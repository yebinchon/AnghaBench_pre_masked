
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int canvas_id_vd1_2; scalar_t__ canvas; int canvas_id_vd1_1; int canvas_id_vd1_0; int canvas_id_osd1; struct drm_device* drm; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct meson_drm* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct meson_drm *VAR_1 = FUNC_0(VAR_0);
 struct drm_device *VAR_2 = VAR_1->drm;

 if (VAR_1->canvas) {
  FUNC_6(VAR_1->canvas, VAR_1->canvas_id_osd1);
  FUNC_6(VAR_1->canvas, VAR_1->canvas_id_vd1_0);
  FUNC_6(VAR_1->canvas, VAR_1->canvas_id_vd1_1);
  FUNC_6(VAR_1->canvas, VAR_1->canvas_id_vd1_2);
 }

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2);

}
