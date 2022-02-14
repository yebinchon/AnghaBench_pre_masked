
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_gem_object {int flags; } ;
struct omap_drm_usergart_entry {struct drm_gem_object* obj; } ;
struct omap_drm_private {TYPE_1__* usergart; } ;
struct drm_gem_object {TYPE_2__* dev; } ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
struct TYPE_4__ {struct omap_drm_private* dev_private; } ;
struct TYPE_3__ {struct omap_drm_usergart_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_gem_object*,int,struct omap_drm_usergart_entry*) ;
 struct omap_gem_object* FUNC_2 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_3(struct drm_gem_object *VAR_2)
{
 struct omap_gem_object *VAR_3 = FUNC_2(VAR_2);
 struct omap_drm_private *VAR_4 = VAR_2->dev->dev_private;

 if (VAR_3->flags & VAR_1) {
  enum tiler_fmt VAR_5 = FUNC_0(VAR_3->flags);
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   struct omap_drm_usergart_entry *VAR_7 =
    &VAR_4->usergart[VAR_5].entry[VAR_6];

   if (VAR_7->obj == VAR_2)
    FUNC_1(VAR_2, VAR_5, VAR_7);
  }
 }
}
