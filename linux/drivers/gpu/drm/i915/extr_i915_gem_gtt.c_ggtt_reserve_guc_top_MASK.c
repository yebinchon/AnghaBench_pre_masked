
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ total; int i915; } ;
struct i915_ggtt {int uc_fw; TYPE_1__ vm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i915_ggtt *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_3->vm.i915))
  return 0;

 FUNC_1(VAR_3->vm.total <= VAR_0);
 VAR_4 = VAR_3->vm.total - VAR_0;

 VAR_5 = FUNC_3(&VAR_3->vm, &VAR_3->uc_fw, VAR_4,
       VAR_0, VAR_1,
       VAR_2);
 if (VAR_5)
  FUNC_0("Failed to reserve top of GGTT for GuC\n");

 return VAR_5;
}
