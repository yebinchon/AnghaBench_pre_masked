
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int num_pixelformats; int pixelformats; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct drm_plane*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(struct drm_device *VAR_2,
        struct drm_plane *VAR_3)
{
 struct tilcdc_drm_private *VAR_4 = VAR_2->dev_private;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, 1,
        &VAR_1,
        VAR_4->pixelformats,
        VAR_4->num_pixelformats,
        1);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Failed to initialize plane: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_3, &VAR_0);

 return 0;
}
