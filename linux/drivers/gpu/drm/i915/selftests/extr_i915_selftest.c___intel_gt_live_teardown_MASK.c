
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_gt {TYPE_2__* i915; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_5__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_2, void *VAR_3)
{
 struct intel_gt *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->i915->drm.struct_mutex);
 if (FUNC_1(VAR_4->i915, VAR_1))
  VAR_2 = -VAR_0;
 FUNC_3(&VAR_4->i915->drm.struct_mutex);

 FUNC_0(VAR_4->i915);

 return VAR_2;
}
