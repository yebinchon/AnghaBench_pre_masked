
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  goto err_plane;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err_crtc;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto err_encoder;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err_connector;

 return 0;

err_connector:
 FUNC_4(VAR_0);
err_encoder:
 FUNC_2(VAR_0);
err_crtc:
 FUNC_6(VAR_0);
err_plane:
 return VAR_1;
}
