
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; struct omap_dss_device* next; } ;
struct drm_display_mode {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int (* check_timings ) (struct omap_dss_device*,struct drm_display_mode*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode*,struct drm_display_mode const*) ;
 int FUNC_1 (struct omap_dss_device*,struct drm_display_mode*) ;

enum drm_mode_status FUNC_2(struct omap_dss_device *VAR_2,
     const struct drm_display_mode *VAR_3,
     struct drm_display_mode *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, VAR_3);

 for (; VAR_2; VAR_2 = VAR_2->next) {
  if (!VAR_2->ops->check_timings)
   continue;

  VAR_5 = VAR_2->ops->check_timings(VAR_2, VAR_4);
  if (VAR_5)
   return VAR_0;
 }

 return VAR_1;
}
