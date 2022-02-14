
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_object {int id; void (* free_cb ) (struct kref*) ;int refcount; int type; } ;
struct TYPE_4__ {int idr_mutex; int object_idr; } ;
struct drm_device {TYPE_2__ mode_config; scalar_t__ registered; TYPE_1__* driver; } ;
struct TYPE_3__ {int load; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct drm_mode_object*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_1, struct drm_mode_object *VAR_2,
     uint32_t VAR_3, bool VAR_4,
     void (*VAR_5)(struct kref *VAR_6))
{
 int VAR_7;

 FUNC_0(!VAR_1->driver->load && VAR_1->registered && !VAR_5);

 FUNC_3(&VAR_1->mode_config.idr_mutex);
 VAR_7 = FUNC_1(&VAR_1->mode_config.object_idr, VAR_4 ? VAR_2 : ((void*)0),
   1, 0, VAR_0);
 if (VAR_7 >= 0) {




  VAR_2->id = VAR_7;
  VAR_2->type = VAR_3;
  if (VAR_5) {
   VAR_2->free_cb = VAR_5;
   FUNC_2(&VAR_2->refcount);
  }
 }
 FUNC_4(&VAR_1->mode_config.idr_mutex);

 return VAR_7 < 0 ? VAR_7 : 0;
}
