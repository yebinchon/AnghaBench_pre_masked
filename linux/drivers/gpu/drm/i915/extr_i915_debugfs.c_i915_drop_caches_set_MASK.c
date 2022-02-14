
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int idle_work; int retire_work; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ gem; int gt; TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*,int ,int *,int ) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int,int ) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ,int ) ;

__attribute__((used)) static int
FUNC_18(void *VAR_19, u64 VAR_20)
{
 struct drm_i915_private *VAR_21 = VAR_19;

 FUNC_0("Dropping caches: 0x%08llx [0x%08llx]\n",
    VAR_20, VAR_20 & VAR_2);

 if (VAR_20 & VAR_6 &&
     FUNC_17(FUNC_10(&VAR_21->gt),
       VAR_12))
  FUNC_13(&VAR_21->gt);



 if (VAR_20 & (VAR_1 | VAR_5 | VAR_8 | VAR_7)) {
  int VAR_22;

  VAR_22 = FUNC_15(&VAR_21->drm.struct_mutex);
  if (VAR_22)
   return VAR_22;







  if (VAR_22 == 0 && VAR_20 & (VAR_5 | VAR_1))
   VAR_22 = FUNC_8(VAR_21,
           VAR_15 |
           VAR_16,
           VAR_18);

  if (VAR_22 == 0 && VAR_20 & VAR_5)
   VAR_22 = FUNC_8(VAR_21,
           VAR_15 |
           VAR_16,
           VAR_18);

  if (VAR_20 & VAR_8)
   FUNC_9(VAR_21);

  FUNC_16(&VAR_21->drm.struct_mutex);

  if (VAR_22 == 0 && VAR_20 & VAR_5)
   VAR_22 = FUNC_12(&VAR_21->gt);
 }

 if (VAR_20 & VAR_6 && FUNC_14(&VAR_21->gt))
  FUNC_11(&VAR_21->gt, VAR_0, 0, ((void*)0));

 FUNC_3(VAR_11);
 if (VAR_20 & VAR_3)
  FUNC_6(VAR_21, VAR_17, ((void*)0), VAR_13);

 if (VAR_20 & VAR_10)
  FUNC_6(VAR_21, VAR_17, ((void*)0), VAR_14);

 if (VAR_20 & VAR_9)
  FUNC_7(VAR_21);
 FUNC_4(VAR_11);

 if (VAR_20 & VAR_5) {
  FUNC_1(&VAR_21->gem.retire_work);
  FUNC_2(&VAR_21->gem.idle_work);
 }

 if (VAR_20 & VAR_4)
  FUNC_5(VAR_21);

 return 0;
}
