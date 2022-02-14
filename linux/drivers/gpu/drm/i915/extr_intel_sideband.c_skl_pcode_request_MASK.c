
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int sb_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;

int FUNC_8(struct drm_i915_private *VAR_1, u32 VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 FUNC_3(&VAR_1->sb_lock);
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7)) {
  VAR_8 = 0;
  goto out;
 }
 VAR_8 = FUNC_2(FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7), VAR_6 * 1000, 10, 10);
 if (!VAR_8)
  goto out;
 FUNC_0("PCODE timeout, retrying with preemption disabled\n");
 FUNC_1(VAR_6 > 3);
 FUNC_5();
 VAR_8 = FUNC_7(FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7), 50);
 FUNC_6();

out:
 FUNC_4(&VAR_1->sb_lock);
 return VAR_8 ? VAR_8 : VAR_7;

}
