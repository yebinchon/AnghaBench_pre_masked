
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; int asic_type; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_6,
       enum amd_powergating_state VAR_7)
{
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_6;
 bool VAR_9 = (VAR_7 == VAR_0);

 if (FUNC_2(VAR_8))
  return 0;

 if (VAR_8->pg_flags & (VAR_4 |
    VAR_5 |
    VAR_1 |
    VAR_2))
  FUNC_0(VAR_8);
 switch (VAR_8->asic_type) {
 case 132:
 case 129:

  if (VAR_8->pg_flags & VAR_5) {
   FUNC_5(VAR_8, 1);
   FUNC_4(VAR_8, 1);
  } else {
   FUNC_5(VAR_8, 0);
   FUNC_4(VAR_8, 0);
  }
  if (VAR_8->pg_flags & VAR_1)
   FUNC_3(VAR_8, 1);
  else
   FUNC_3(VAR_8, 0);

  FUNC_6(VAR_8, VAR_9);

  if ((VAR_8->pg_flags & VAR_4) && VAR_9)
   FUNC_8(VAR_8, 1);
  else
   FUNC_8(VAR_8, 0);

  if ((VAR_8->pg_flags & VAR_2) && VAR_9)
   FUNC_7(VAR_8, 1);
  else
   FUNC_7(VAR_8, 0);
  break;
 case 131:
 case 130:
 case 128:
  if ((VAR_8->pg_flags & VAR_4) && VAR_9)
   FUNC_8(VAR_8, 1);
  else
   FUNC_8(VAR_8, 0);

  if ((VAR_8->pg_flags & VAR_2) && VAR_9)
   FUNC_7(VAR_8, 1);
  else
   FUNC_7(VAR_8, 0);

  if ((VAR_8->pg_flags & VAR_3) && VAR_9)
   FUNC_9(VAR_8, 1);
  else
   FUNC_9(VAR_8, 0);
  break;
 default:
  break;
 }
 if (VAR_8->pg_flags & (VAR_4 |
    VAR_5 |
    VAR_1 |
    VAR_2))
  FUNC_1(VAR_8);
 return 0;
}
