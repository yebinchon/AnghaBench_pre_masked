
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_7,
       enum amd_powergating_state VAR_8)
{
 bool VAR_9 = 0;
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)VAR_7;

 if (VAR_8 == VAR_0)
  VAR_9 = 1;

 if (VAR_10->pg_flags & (VAR_4 |
         VAR_5 |
         VAR_3 |
         VAR_1 |
         VAR_2 |
         VAR_6)) {
  FUNC_2(VAR_10, VAR_9);
  if (VAR_10->pg_flags & VAR_4) {
   FUNC_0(VAR_10, VAR_9);
   FUNC_1(VAR_10, VAR_9);
  }
 }

 return 0;
}
