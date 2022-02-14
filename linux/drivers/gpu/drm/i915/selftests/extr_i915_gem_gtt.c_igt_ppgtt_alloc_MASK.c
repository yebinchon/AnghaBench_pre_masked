
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int (* allocate_va_range ) (TYPE_1__*,int,int) ;int (* clear_range ) (TYPE_1__*,int ,int) ;int total; } ;
struct i915_ppgtt {TYPE_1__ vm; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct i915_ppgtt*) ;
 int VAR_1 ;
 int FUNC_2 (struct i915_ppgtt*) ;
 struct i915_ppgtt* FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int,int,...) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct i915_ppgtt *VAR_4;
 u64 VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;



 if (!FUNC_0(VAR_3))
  return 0;

 VAR_4 = FUNC_3(VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 if (!VAR_4->vm.allocate_va_range)
  goto err_ppgtt_cleanup;
 VAR_7 = FUNC_12() << VAR_1;
 VAR_7 = FUNC_7(VAR_4->vm.total, VAR_7);


 for (VAR_5 = 4096; VAR_5 <= VAR_7; VAR_5 <<= 2) {
  VAR_8 = VAR_4->vm.allocate_va_range(&VAR_4->vm, 0, VAR_5);
  if (VAR_8) {
   if (VAR_8 == -VAR_0) {
    FUNC_8("[1] Ran out of memory for va_range [0 + %llx] [bit %d]\n",
     VAR_5, FUNC_6(VAR_5));
    VAR_8 = 0;
   }
   goto err_ppgtt_cleanup;
  }

  FUNC_4();

  VAR_4->vm.clear_range(&VAR_4->vm, 0, VAR_5);
 }


 for (VAR_6 = 0, VAR_5 = 4096; VAR_5 <= VAR_7; VAR_6 = VAR_5, VAR_5 <<= 2) {
  VAR_8 = VAR_4->vm.allocate_va_range(&VAR_4->vm,
        VAR_6, VAR_5 - VAR_6);
  if (VAR_8) {
   if (VAR_8 == -VAR_0) {
    FUNC_8("[2] Ran out of memory for va_range [%llx + %llx] [bit %d]\n",
     VAR_6, VAR_5 - VAR_6, FUNC_6(VAR_5));
    VAR_8 = 0;
   }
   goto err_ppgtt_cleanup;
  }

  FUNC_4();
 }

err_ppgtt_cleanup:
 FUNC_5(&VAR_4->vm);
 return VAR_8;
}
