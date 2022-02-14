
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_connector {struct drm_display_mode* native_mode; } ;
struct moderec {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,scalar_t__,scalar_t__,int ,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;
 struct moderec* VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_1)
{
 struct nouveau_connector *VAR_2 = FUNC_3(VAR_1);
 struct drm_display_mode *VAR_3 = VAR_2->native_mode, *VAR_4;
 struct drm_device *VAR_5 = VAR_1->dev;
 struct moderec *VAR_6 = &VAR_0[0];
 int VAR_7 = 0;

 if (!VAR_3)
  return 0;

 while (VAR_6->hdisplay) {
  if (VAR_6->hdisplay <= VAR_3->hdisplay &&
      VAR_6->vdisplay <= VAR_3->vdisplay &&
      (VAR_6->hdisplay != VAR_3->hdisplay ||
       VAR_6->vdisplay != VAR_3->vdisplay)) {
   VAR_4 = FUNC_0(VAR_5, VAR_6->hdisplay, VAR_6->vdisplay,
      FUNC_2(VAR_3), 0,
      0, 0);
   if (!VAR_4)
    continue;

   FUNC_1(VAR_1, VAR_4);
   VAR_7++;
  }

  VAR_6++;
 }

 return VAR_7;
}
