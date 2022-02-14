
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct drm_plane {unsigned int format_count; scalar_t__* format_types; unsigned int modifier_count; scalar_t__* modifiers; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* format_mod_supported ) (struct drm_plane*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,scalar_t__,scalar_t__) ;

int FUNC_1(struct drm_plane *VAR_1,
     u32 VAR_2, u64 VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->format_count; VAR_4++) {
  if (VAR_2 == VAR_1->format_types[VAR_4])
   break;
 }
 if (VAR_4 == VAR_1->format_count)
  return -VAR_0;

 if (VAR_1->funcs->format_mod_supported) {
  if (!VAR_1->funcs->format_mod_supported(VAR_1, VAR_2, VAR_3))
   return -VAR_0;
 } else {
  if (!VAR_1->modifier_count)
   return 0;

  for (VAR_4 = 0; VAR_4 < VAR_1->modifier_count; VAR_4++) {
   if (VAR_3 == VAR_1->modifiers[VAR_4])
    break;
  }
  if (VAR_4 == VAR_1->modifier_count)
   return -VAR_0;
 }

 return 0;
}
