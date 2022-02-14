
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct drm_nouveau_gem_cpu_prep {int flags; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (int ,int,int,int) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct nouveau_bo*) ;
 struct nouveau_bo* FUNC_4 (struct drm_gem_object*) ;

int
FUNC_5(struct drm_device *VAR_5, void *VAR_6,
      struct drm_file *VAR_7)
{
 struct drm_nouveau_gem_cpu_prep *VAR_8 = VAR_6;
 struct drm_gem_object *VAR_9;
 struct nouveau_bo *VAR_10;
 bool VAR_11 = !!(VAR_8->flags & VAR_3);
 bool VAR_12 = !!(VAR_8->flags & VAR_4);
 long VAR_13;
 int VAR_14;

 VAR_9 = FUNC_1(VAR_7, VAR_8->handle);
 if (!VAR_9)
  return -VAR_1;
 VAR_10 = FUNC_4(VAR_9);

 VAR_13 = FUNC_0(VAR_10->bo.base.resv, VAR_12, 1,
         VAR_11 ? 0 : 30 * VAR_2);
 if (!VAR_13)
  VAR_14 = -VAR_0;
 else if (VAR_13 > 0)
  VAR_14 = 0;
 else
  VAR_14 = VAR_13;

 FUNC_3(VAR_10);
 FUNC_2(VAR_9);

 return VAR_14;
}
