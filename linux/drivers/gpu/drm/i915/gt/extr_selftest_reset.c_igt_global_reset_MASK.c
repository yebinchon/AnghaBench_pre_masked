
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {TYPE_1__* i915; } ;
typedef int intel_wakeref_t ;
struct TYPE_2__ {int runtime_pm; int gpu_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_gt*) ;
 int FUNC_2 (struct intel_gt*) ;
 scalar_t__ FUNC_3 (struct intel_gt*) ;
 int FUNC_4 (struct intel_gt*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(void *VAR_3)
{
 struct intel_gt *VAR_4 = VAR_3;
 unsigned int VAR_5;
 intel_wakeref_t VAR_6;
 int VAR_7 = 0;



 FUNC_1(VAR_4);
 VAR_6 = FUNC_5(&VAR_4->i915->runtime_pm);

 VAR_5 = FUNC_0(&VAR_4->i915->gpu_error);

 FUNC_4(VAR_4, VAR_0, ((void*)0));

 if (FUNC_0(&VAR_4->i915->gpu_error) == VAR_5) {
  FUNC_7("No GPU reset recorded!\n");
  VAR_7 = -VAR_1;
 }

 FUNC_6(&VAR_4->i915->runtime_pm, VAR_6);
 FUNC_2(VAR_4);

 if (FUNC_3(VAR_4))
  VAR_7 = -VAR_2;

 return VAR_7;
}
