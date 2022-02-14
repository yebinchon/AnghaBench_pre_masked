
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_object {scalar_t__ id; int free_cb; } ;
struct TYPE_4__ {int idr_mutex; int object_idr; } ;
struct drm_device {TYPE_2__ mode_config; scalar_t__ registered; TYPE_1__* driver; } ;
struct TYPE_3__ {int load; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_device *VAR_0,
    struct drm_mode_object *VAR_1)
{
 FUNC_0(!VAR_0->driver->load && VAR_0->registered && !VAR_1->free_cb);

 FUNC_2(&VAR_0->mode_config.idr_mutex);
 if (VAR_1->id) {
  FUNC_1(&VAR_0->mode_config.object_idr, VAR_1->id);
  VAR_1->id = 0;
 }
 FUNC_3(&VAR_0->mode_config.idr_mutex);
}
