
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i915_vma {int dummy; } ;
struct TYPE_2__ {int probability; int interval; int times; } ;
struct i915_address_space {TYPE_1__ fault_attr; } ;
struct drm_i915_private {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;


 int FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct i915_vma*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 struct i915_vma* FUNC_5 (struct drm_i915_private*,unsigned int) ;
 int FUNC_6 (struct i915_vma*) ;
 struct i915_vma* FUNC_7 (struct i915_vma*,struct i915_address_space*,int *) ;
 int FUNC_8 (struct i915_vma*,int ,int ,unsigned int) ;
 int FUNC_9 (struct i915_vma*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct drm_i915_private *VAR_4,
         struct i915_address_space *VAR_5,
         u64 VAR_6, u64 VAR_7,
         unsigned long VAR_8)
{
 unsigned int VAR_9[] = { VAR_3, VAR_2 };
 struct drm_i915_gem_object *VAR_10;
 struct drm_i915_gem_object *VAR_11;
 int VAR_12;
 int VAR_13;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_9); ++VAR_13) {
  unsigned int VAR_14 = VAR_1 | VAR_0;
  unsigned int VAR_15 = VAR_9[VAR_13];
  struct i915_vma *VAR_16;

  VAR_10 = FUNC_5(VAR_4, VAR_15);
  if (FUNC_1(VAR_10))
   return FUNC_2(VAR_10);

  VAR_16 = FUNC_7(VAR_10, VAR_5, ((void*)0));
  if (FUNC_1(VAR_16)) {
   VAR_12 = FUNC_2(VAR_16);
   goto err_purge;
  }

  VAR_12 = FUNC_8(VAR_16, 0, 0, VAR_14);
  if (VAR_12)
   goto err_purge;


  FUNC_9(VAR_16);

  VAR_11 = FUNC_5(VAR_4, VAR_15);
  if (FUNC_1(VAR_11)) {
   VAR_12 = FUNC_2(VAR_11);
   goto err_purge;
  }

  VAR_5->fault_attr.probability = 100;
  VAR_5->fault_attr.interval = 1;
  FUNC_3(&VAR_5->fault_attr.times, -1);

  VAR_16 = FUNC_7(VAR_11, VAR_5, ((void*)0));
  if (FUNC_1(VAR_16)) {
   VAR_12 = FUNC_2(VAR_16);
   goto err_explode;
  }

  VAR_12 = FUNC_8(VAR_16, 0, 0, VAR_14 | VAR_15);
  if (VAR_12)
   goto err_explode;

  FUNC_9(VAR_16);

  FUNC_6(VAR_10);
  FUNC_6(VAR_11);

  FUNC_10(&VAR_5->fault_attr, 0, sizeof(VAR_5->fault_attr));
  FUNC_4(VAR_4);
 }

 return 0;

err_explode:
 FUNC_6(VAR_11);
err_purge:
 FUNC_6(VAR_10);
 FUNC_10(&VAR_5->fault_attr, 0, sizeof(VAR_5->fault_attr));
 return VAR_12;
}
