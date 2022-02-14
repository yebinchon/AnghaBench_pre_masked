
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_crtc {int base; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_device*,int *,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2,
        struct mtk_drm_crtc *VAR_3,
        struct drm_plane *VAR_4,
        struct drm_plane *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, &VAR_3->base, VAR_4, VAR_5,
     &VAR_0, ((void*)0));
 if (VAR_7)
  goto err_cleanup_crtc;

 FUNC_1(&VAR_3->base, &VAR_1);

 return 0;

err_cleanup_crtc:
 FUNC_0(&VAR_3->base);
 return VAR_7;
}
