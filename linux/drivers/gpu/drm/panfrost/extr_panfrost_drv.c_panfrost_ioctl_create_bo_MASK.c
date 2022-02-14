
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct panfrost_gem_object {TYPE_1__ node; } ;
struct drm_panfrost_create_bo {int flags; int offset; int handle; int size; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct panfrost_gem_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct panfrost_gem_object*) ;
 struct panfrost_gem_object* FUNC_2 (struct drm_file*,struct drm_device*,int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4, void *VAR_5,
  struct drm_file *VAR_6)
{
 struct panfrost_gem_object *VAR_7;
 struct drm_panfrost_create_bo *VAR_8 = VAR_5;

 if (!VAR_8->size || VAR_8->pad ||
     (VAR_8->flags & ~(VAR_3 | VAR_2)))
  return -VAR_0;


 if ((VAR_8->flags & VAR_2) &&
     !(VAR_8->flags & VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6, VAR_4, VAR_8->size, VAR_8->flags,
          &VAR_8->handle);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8->offset = VAR_7->node.start << VAR_1;

 return 0;
}
