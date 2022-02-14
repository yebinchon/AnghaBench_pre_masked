
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free_list; int free_work; int hw_id_list; int hw_ida; int list; int mutex; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_4)
{
 FUNC_5(&VAR_4->contexts.mutex);
 FUNC_1(&VAR_4->contexts.list);


 FUNC_0(VAR_2 > VAR_1);
 FUNC_0(VAR_0 > VAR_1);
 FUNC_3(&VAR_4->contexts.hw_ida);
 FUNC_1(&VAR_4->contexts.hw_id_list);

 FUNC_2(&VAR_4->contexts.free_work, VAR_3);
 FUNC_4(&VAR_4->contexts.free_list);
}
