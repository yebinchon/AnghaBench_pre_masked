
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int log; } ;
struct TYPE_5__ {TYPE_1__ guc; } ;
struct TYPE_6__ {TYPE_2__ uc; } ;
struct drm_i915_private {TYPE_3__ gt; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return FUNC_1(&VAR_3->gt.uc.guc.log, VAR_2);
}
