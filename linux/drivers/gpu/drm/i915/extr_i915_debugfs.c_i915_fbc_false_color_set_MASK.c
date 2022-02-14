
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {int lock; scalar_t__ false_color; } ;
struct drm_i915_private {TYPE_1__ fbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, u64 VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3;
 u32 VAR_6;

 if (FUNC_3(VAR_5) < 7 || !FUNC_0(VAR_5))
  return -VAR_0;

 FUNC_4(&VAR_5->fbc.lock);

 VAR_6 = FUNC_1(VAR_2);
 VAR_5->fbc.false_color = VAR_4;

 FUNC_2(VAR_2, VAR_4 ?
     (VAR_6 | VAR_1) :
     (VAR_6 & ~VAR_1));

 FUNC_5(&VAR_5->fbc.lock);
 return 0;
}
