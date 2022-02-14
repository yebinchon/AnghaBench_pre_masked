
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct drm_file {int dummy; } ;
struct TYPE_2__ {int object_name_lock; } ;


 int FUNC_0 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct drm_file *VAR_0,
     struct drm_gem_object *VAR_1,
     u32 *VAR_2)
{
 FUNC_1(&VAR_1->dev->object_name_lock);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
