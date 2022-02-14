
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_gem_object {int width; } ;
struct omap_drm_usergart_entry {int obj_pgoff; int * obj; } ;
struct omap_drm_private {TYPE_1__* usergart; } ;
struct drm_gem_object {TYPE_3__* dev; } ;
typedef int loff_t ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
struct TYPE_6__ {TYPE_2__* anon_inode; struct omap_drm_private* dev_private; } ;
struct TYPE_5__ {int i_mapping; } ;
struct TYPE_4__ {int height; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct omap_gem_object* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int ,int,size_t,int) ;

__attribute__((used)) static void FUNC_4(struct drm_gem_object *VAR_2,
  enum tiler_fmt VAR_3, struct omap_drm_usergart_entry *VAR_4)
{
 struct omap_gem_object *VAR_5 = FUNC_2(VAR_2);
 struct omap_drm_private *VAR_6 = VAR_2->dev->dev_private;
 int VAR_7 = VAR_6->usergart[VAR_3].height;
 size_t VAR_8 = VAR_1 * VAR_7;
 loff_t VAR_9 = FUNC_1(VAR_2) +
   (VAR_4->obj_pgoff << VAR_0);
 const int VAR_10 = FUNC_0(VAR_5->width << VAR_3, VAR_1);

 if (VAR_10 > 1) {
  int VAR_11;

  for (VAR_11 = VAR_7; VAR_11 > 0; VAR_11--) {
   FUNC_3(VAR_2->dev->anon_inode->i_mapping,
         VAR_9, VAR_1, 1);
   VAR_9 += VAR_1 * VAR_10;
  }
 } else {
  FUNC_3(VAR_2->dev->anon_inode->i_mapping,
        VAR_9, VAR_8, 1);
 }

 VAR_4->obj = ((void*)0);
}
