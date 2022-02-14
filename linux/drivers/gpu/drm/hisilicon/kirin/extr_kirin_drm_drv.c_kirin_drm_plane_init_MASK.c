
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_drm_data {int plane_helper_funcs; int channel_formats_cnt; int channel_formats; int plane_funcs; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_plane*,int ) ;
 int FUNC_2 (struct drm_device*,struct drm_plane*,int,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0, struct drm_plane *VAR_1,
    enum drm_plane_type VAR_2,
    const struct kirin_drm_data *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_0, VAR_1, 1, VAR_3->plane_funcs,
           VAR_3->channel_formats,
           VAR_3->channel_formats_cnt,
           ((void*)0), VAR_2, ((void*)0));
 if (VAR_4) {
  FUNC_0("fail to init plane, ch=%d\n", 0);
  return VAR_4;
 }

 FUNC_1(VAR_1, VAR_3->plane_helper_funcs);

 return 0;
}
