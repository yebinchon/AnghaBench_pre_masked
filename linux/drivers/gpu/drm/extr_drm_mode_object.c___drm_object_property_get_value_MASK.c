
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int flags; int dev; } ;
struct drm_mode_object {TYPE_1__* properties; } ;
struct TYPE_2__ {int count; int * values; struct drm_property** properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_mode_object*,struct drm_property*,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_mode_object *VAR_2,
        struct drm_property *VAR_3,
        uint64_t *VAR_4)
{
 int VAR_5;





 if (FUNC_1(VAR_3->dev) &&
   !(VAR_3->flags & VAR_0))
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_2->properties->count; VAR_5++) {
  if (VAR_2->properties->properties[VAR_5] == VAR_3) {
   *VAR_4 = VAR_2->properties->values[VAR_5];
   return 0;
  }

 }

 return -VAR_1;
}
