
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int refcount; TYPE_1__* dev; } ;
struct TYPE_2__ {int struct_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct drm_gem_object *VAR_1)
{
 if (VAR_1) {
  FUNC_0(!FUNC_2(&VAR_1->dev->struct_mutex));

  FUNC_1(&VAR_1->refcount, VAR_0);
 }
}
