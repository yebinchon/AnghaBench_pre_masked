
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_1(struct drm_connector *VAR_2,
     struct drm_display_mode *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 > 1)
  return VAR_1;
 else
  return VAR_0;
}
