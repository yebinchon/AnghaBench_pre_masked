
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_psr {int sink_not_reliable; TYPE_1__* dp; } ;
struct drm_i915_private {struct i915_psr psr; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2)
{
 struct i915_psr *VAR_3 = &VAR_2->psr;

 FUNC_1(VAR_3->dp);
 VAR_3->sink_not_reliable = 1;

 FUNC_0(&VAR_3->dp->aux, VAR_0, VAR_1);
}
