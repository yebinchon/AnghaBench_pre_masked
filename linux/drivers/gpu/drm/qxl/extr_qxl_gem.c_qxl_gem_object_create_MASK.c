
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qxl_surface {int dummy; } ;
struct TYPE_4__ {int mutex; int objects; } ;
struct qxl_device {TYPE_2__ gem; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_3__ {struct drm_gem_object base; } ;
struct qxl_bo {int list; TYPE_1__ tbo; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qxl_device*,int,int,int,int,struct qxl_surface*,struct qxl_bo**) ;

int FUNC_5(struct qxl_device *VAR_2, int VAR_3,
     int VAR_4, int VAR_5,
     bool VAR_6, bool VAR_7,
     struct qxl_surface *VAR_8,
     struct drm_gem_object **VAR_9)
{
 struct qxl_bo *VAR_10;
 int VAR_11;

 *VAR_9 = ((void*)0);

 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;
 VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_7, 0, VAR_5, VAR_8, &VAR_10);
 if (VAR_11) {
  if (VAR_11 != -VAR_0)
   FUNC_0(
   "Failed to allocate GEM object (%d, %d, %u, %d)\n",
      VAR_3, VAR_5, VAR_4, VAR_11);
  return VAR_11;
 }
 *VAR_9 = &VAR_10->tbo.base;

 FUNC_2(&VAR_2->gem.mutex);
 FUNC_1(&VAR_10->list, &VAR_2->gem.objects);
 FUNC_3(&VAR_2->gem.mutex);

 return 0;
}
