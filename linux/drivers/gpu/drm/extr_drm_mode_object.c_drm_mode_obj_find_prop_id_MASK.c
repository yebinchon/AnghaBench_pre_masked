
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ id; } ;
struct drm_property {TYPE_1__ base; } ;
struct drm_mode_object {TYPE_2__* properties; } ;
struct TYPE_4__ {int count; struct drm_property** properties; } ;



struct drm_property *FUNC_0(struct drm_mode_object *VAR_0,
            uint32_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->properties->count; VAR_2++)
  if (VAR_0->properties->properties[VAR_2]->base.id == VAR_1)
   return VAR_0->properties->properties[VAR_2];

 return ((void*)0);
}
