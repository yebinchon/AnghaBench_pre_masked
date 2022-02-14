
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mutex {int dep_map; } ;
struct TYPE_4__ {int dep_map; } ;
struct TYPE_3__ {TYPE_2__ struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;

void FUNC_6(struct drm_i915_private *VAR_5,
        struct mutex *VAR_6)
{
 bool VAR_7 = 0;

 if (!FUNC_0(VAR_0))
  return;

 if (!FUNC_3(&VAR_5->drm.struct_mutex, -1)) {
  FUNC_4(&VAR_5->drm.struct_mutex.dep_map,
         VAR_2, 0, VAR_4);
  VAR_7 = 1;
 }

 FUNC_1(VAR_1);
 FUNC_4(&VAR_5->drm.struct_mutex.dep_map,
        VAR_3, 0, VAR_4);

 FUNC_4(&VAR_6->dep_map, 0, 0, VAR_4);
 FUNC_5(&VAR_6->dep_map, 0, VAR_4);

 FUNC_5(&VAR_5->drm.struct_mutex.dep_map, 0, VAR_4);

 FUNC_2(VAR_1);

 if (VAR_7)
  FUNC_5(&VAR_5->drm.struct_mutex.dep_map, 0, VAR_4);
}
