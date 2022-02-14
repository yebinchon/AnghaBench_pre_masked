
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct i915_address_space {int mm; TYPE_4__* i915; } ;
struct drm_mm_node {int dummy; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;
struct TYPE_7__ {TYPE_2__* alias; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct TYPE_8__ {TYPE_3__ ggtt; TYPE_1__ drm; } ;
struct TYPE_6__ {struct i915_address_space vm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int *,struct drm_mm_node*,scalar_t__,scalar_t__,unsigned long,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (struct i915_address_space*,scalar_t__,scalar_t__,unsigned long,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_6 (struct i915_address_space*,struct drm_mm_node*,scalar_t__,scalar_t__,unsigned long,unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct i915_address_space *VAR_13,
   struct drm_mm_node *VAR_14,
   u64 VAR_15, u64 VAR_16, unsigned long VAR_17,
   u64 VAR_18, u64 VAR_19, unsigned int VAR_20)
{
 enum drm_mm_insert_mode VAR_21;
 u64 VAR_22;
 int VAR_23;

 FUNC_8(&VAR_13->i915->drm.struct_mutex);
 FUNC_1(!VAR_15);
 FUNC_1(!FUNC_2(VAR_15, VAR_7));
 FUNC_1(VAR_16 && !FUNC_7(VAR_16));
 FUNC_1(VAR_16 && !FUNC_2(VAR_16, VAR_6));
 FUNC_1(VAR_18 >= VAR_19);
 FUNC_1(VAR_18 > 0 && !FUNC_2(VAR_18, VAR_7));
 FUNC_1(VAR_19 < VAR_12 && !FUNC_2(VAR_19, VAR_7));
 FUNC_1(VAR_13 == &VAR_13->i915->ggtt.alias->vm);
 FUNC_1(FUNC_4(VAR_14));

 if (FUNC_13(FUNC_10(VAR_18, VAR_15, VAR_19)))
  return -VAR_5;

 if (FUNC_13(FUNC_12(VAR_18, VAR_16) > FUNC_11(VAR_19 - VAR_15, VAR_16)))
  return -VAR_5;

 VAR_21 = VAR_0;
 if (VAR_20 & VAR_8)
  VAR_21 = VAR_2;
 if (VAR_20 & VAR_9)
  VAR_21 = VAR_3;







 FUNC_0(VAR_6 > VAR_7);
 if (VAR_16 <= VAR_6)
  VAR_16 = 0;

 VAR_23 = FUNC_3(&VAR_13->mm, VAR_14,
       VAR_15, VAR_16, VAR_17,
       VAR_18, VAR_19, VAR_21);
 if (VAR_23 != -VAR_5)
  return VAR_23;

 if (VAR_21 & VAR_4) {
  VAR_23 = FUNC_3(&VAR_13->mm, VAR_14,
        VAR_15, VAR_16, VAR_17,
        VAR_18, VAR_19,
        VAR_0);
  if (VAR_23 != -VAR_5)
   return VAR_23;
 }

 if (VAR_20 & VAR_10)
  return -VAR_5;
 VAR_22 = FUNC_9(VAR_18, VAR_19,
          VAR_15, VAR_16 ?: VAR_6);
 VAR_23 = FUNC_6(VAR_13, VAR_14, VAR_15, VAR_22, VAR_17, VAR_20);
 if (VAR_23 != -VAR_5)
  return VAR_23;

 if (VAR_20 & VAR_11)
  return -VAR_5;


 VAR_23 = FUNC_5(VAR_13, VAR_15, VAR_16, VAR_17,
           VAR_18, VAR_19, VAR_20);
 if (VAR_23)
  return VAR_23;

 return FUNC_3(&VAR_13->mm, VAR_14,
        VAR_15, VAR_16, VAR_17,
        VAR_18, VAR_19, VAR_1);
}
