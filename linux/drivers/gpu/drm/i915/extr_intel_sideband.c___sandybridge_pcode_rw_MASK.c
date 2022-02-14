
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {int sb_lock; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct intel_uncore*,int ,int,int ,int,int,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 int FUNC_5 (struct intel_uncore*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_6,
      u32 VAR_7, u32 *VAR_8, u32 *VAR_9,
      int VAR_10,
      int VAR_11,
      bool VAR_12)
{
 struct intel_uncore *VAR_13 = &VAR_6->uncore;

 FUNC_6(&VAR_6->sb_lock);







 if (FUNC_4(VAR_13, VAR_4) & VAR_5)
  return -VAR_0;

 FUNC_5(VAR_13, VAR_2, *VAR_8);
 FUNC_5(VAR_13, VAR_3, VAR_9 ? *VAR_9 : 0);
 FUNC_5(VAR_13,
         VAR_4, VAR_5 | VAR_7);

 if (FUNC_1(VAR_13,
      VAR_4,
      VAR_5, 0,
      VAR_10,
      VAR_11,
      &VAR_7))
  return -VAR_1;

 if (VAR_12)
  *VAR_8 = FUNC_4(VAR_13, VAR_2);
 if (VAR_12 && VAR_9)
  *VAR_9 = FUNC_4(VAR_13, VAR_3);

 if (FUNC_0(VAR_6) > 6)
  return FUNC_3(VAR_7);
 else
  return FUNC_2(VAR_7);
}
