
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_enabled; } ;
struct amdgpu_device {int pg_flags; TYPE_1__ pm; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_9,
       enum amd_powergating_state VAR_10)
{







 struct amdgpu_device *VAR_11 = (struct amdgpu_device *)VAR_9;

 if (VAR_10 == VAR_0) {
  FUNC_4(VAR_11);
  if (VAR_11->pg_flags & VAR_1 && !VAR_11->pm.dpm_enabled) {
   if (!(FUNC_0(VAR_7) &
    VAR_2)) {
    FUNC_1(VAR_8, (VAR_3 |
       VAR_5 |
       VAR_4));
    FUNC_2(20);
   }
  }
  return 0;
 } else {
  if (VAR_11->pg_flags & VAR_1 && !VAR_11->pm.dpm_enabled) {
   if (FUNC_0(VAR_7) &
    VAR_2) {
    FUNC_1(VAR_8, (VAR_3 |
      VAR_6 |
      VAR_4));
    FUNC_2(30);
   }
  }
  return FUNC_3(VAR_11);
 }
}
