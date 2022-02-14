
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct drm_mode_object {int dummy; } ;
struct drm_property_blob {struct drm_mode_object base; } ;
struct drm_property {int flags; unsigned long long* values; int num_values; int dev; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long long) ;
 struct drm_mode_object* FUNC_1 (int ,int *,unsigned long long,unsigned long long) ;
 struct drm_property_blob* FUNC_2 (int ,unsigned long long) ;
 scalar_t__ FUNC_3 (struct drm_property*,int ) ;

bool FUNC_4(struct drm_property *VAR_6,
       uint64_t VAR_7, struct drm_mode_object **VAR_8)
{
 int VAR_9;

 if (VAR_6->flags & VAR_2)
  return 0;

 *VAR_8 = ((void*)0);

 if (FUNC_3(VAR_6, VAR_4)) {
  if (VAR_7 < VAR_6->values[0] || VAR_7 > VAR_6->values[1])
   return 0;
  return 1;
 } else if (FUNC_3(VAR_6, VAR_5)) {
  int64_t VAR_10 = FUNC_0(VAR_7);

  if (VAR_10 < FUNC_0(VAR_6->values[0]) ||
    VAR_10 > FUNC_0(VAR_6->values[1]))
   return 0;
  return 1;
 } else if (FUNC_3(VAR_6, VAR_0)) {
  uint64_t VAR_11 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_6->num_values; VAR_9++)
   VAR_11 |= (1ULL << VAR_6->values[VAR_9]);
  return !(VAR_7 & ~VAR_11);
 } else if (FUNC_3(VAR_6, VAR_1)) {
  struct drm_property_blob *VAR_12;

  if (VAR_7 == 0)
   return 1;

  VAR_12 = FUNC_2(VAR_6->dev, VAR_7);
  if (VAR_12) {
   *VAR_8 = &VAR_12->base;
   return 1;
  } else {
   return 0;
  }
 } else if (FUNC_3(VAR_6, VAR_3)) {

  if (VAR_7 == 0)
   return 1;

  *VAR_8 = FUNC_1(VAR_6->dev, ((void*)0), VAR_7,
           VAR_6->values[0]);
  return *VAR_8 != ((void*)0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_values; VAR_9++)
  if (VAR_6->values[VAR_9] == VAR_7)
   return 1;
 return 0;
}
