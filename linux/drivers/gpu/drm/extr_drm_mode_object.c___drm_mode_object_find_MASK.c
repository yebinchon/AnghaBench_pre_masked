
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_mode_object {scalar_t__ type; scalar_t__ id; int refcount; scalar_t__ free_cb; } ;
struct drm_file {int dummy; } ;
struct TYPE_2__ {int idr_mutex; int object_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_file*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct drm_mode_object* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct drm_mode_object *FUNC_6(struct drm_device *VAR_1,
            struct drm_file *VAR_2,
            uint32_t VAR_3, uint32_t VAR_4)
{
 struct drm_mode_object *VAR_5 = ((void*)0);

 FUNC_4(&VAR_1->mode_config.idr_mutex);
 VAR_5 = FUNC_2(&VAR_1->mode_config.object_idr, VAR_3);
 if (VAR_5 && VAR_4 != VAR_0 && VAR_5->type != VAR_4)
  VAR_5 = ((void*)0);
 if (VAR_5 && VAR_5->id != VAR_3)
  VAR_5 = ((void*)0);

 if (VAR_5 && FUNC_1(VAR_5->type) &&
     !FUNC_0(VAR_2, VAR_5->id))
  VAR_5 = ((void*)0);

 if (VAR_5 && VAR_5->free_cb) {
  if (!FUNC_3(&VAR_5->refcount))
   VAR_5 = ((void*)0);
 }
 FUNC_5(&VAR_1->mode_config.idr_mutex);

 return VAR_5;
}
