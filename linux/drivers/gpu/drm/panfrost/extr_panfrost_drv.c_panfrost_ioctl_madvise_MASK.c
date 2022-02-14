
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int madv_list; } ;
struct panfrost_gem_object {TYPE_1__ base; } ;
struct panfrost_device {int shrinker_lock; int shrinker_list; } ;
struct drm_panfrost_madvise {scalar_t__ madv; scalar_t__ retained; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 scalar_t__ FUNC_3 (struct drm_gem_object*,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct panfrost_gem_object* FUNC_8 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_3, void *VAR_4,
      struct drm_file *VAR_5)
{
 struct drm_panfrost_madvise *VAR_6 = VAR_4;
 struct panfrost_device *VAR_7 = VAR_3->dev_private;
 struct drm_gem_object *VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_6->handle);
 if (!VAR_8) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_6->handle);
  return -VAR_0;
 }

 VAR_6->retained = FUNC_3(VAR_8, VAR_6->madv);

 if (VAR_6->retained) {
  struct panfrost_gem_object *VAR_9 = FUNC_8(VAR_8);

  FUNC_6(&VAR_7->shrinker_lock);

  if (VAR_6->madv == VAR_1)
   FUNC_4(&VAR_9->base.madv_list, &VAR_7->shrinker_list);
  else if (VAR_6->madv == VAR_2)
   FUNC_5(&VAR_9->base.madv_list);

  FUNC_7(&VAR_7->shrinker_lock);
 }

 FUNC_2(VAR_8);
 return 0;
}
