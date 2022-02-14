
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_cursor2 {scalar_t__ hot_y; scalar_t__ hot_x; } ;
struct drm_mode_cursor {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_mode_cursor2*,struct drm_file*) ;
 int FUNC_1 (struct drm_mode_cursor2*,struct drm_mode_cursor*,int) ;

int FUNC_2(struct drm_device *VAR_0,
     void *VAR_1, struct drm_file *VAR_2)
{
 struct drm_mode_cursor *VAR_3 = VAR_1;
 struct drm_mode_cursor2 VAR_4;

 FUNC_1(&VAR_4, VAR_3, sizeof(struct drm_mode_cursor));
 VAR_4.hot_x = VAR_4.hot_y = 0;

 return FUNC_0(VAR_0, &VAR_4, VAR_2);
}
