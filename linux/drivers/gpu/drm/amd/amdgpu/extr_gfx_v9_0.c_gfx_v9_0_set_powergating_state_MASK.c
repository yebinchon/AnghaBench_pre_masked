
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gfx_off_delay_work; } ;
struct amdgpu_device {int asic_type; int pg_flags; TYPE_1__ gfx; int smu; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_3,
       enum amd_powergating_state VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;
 bool VAR_6 = (VAR_4 == VAR_0) ? 1 : 0;

 switch (VAR_5->asic_type) {
 case 130:
 case 129:
  if (!VAR_6) {
   FUNC_0(VAR_5, 0);
   FUNC_1(&VAR_5->gfx.gfx_off_delay_work);
  }
  if (VAR_5->pg_flags & VAR_2) {
   FUNC_4(VAR_5, 1);
   FUNC_3(VAR_5, 1);
  } else {
   FUNC_4(VAR_5, 0);
   FUNC_3(VAR_5, 0);
  }

  if (VAR_5->pg_flags & VAR_1)
   FUNC_2(VAR_5, 1);
  else
   FUNC_2(VAR_5, 0);


  if (FUNC_7(VAR_5) && VAR_6)
   FUNC_8(&VAR_5->smu, VAR_6);
  FUNC_5(VAR_5, VAR_6);


  FUNC_6(VAR_5, VAR_6);

  if (VAR_6)
   FUNC_0(VAR_5, 1);
  break;
 case 128:
  if (!VAR_6) {
   FUNC_0(VAR_5, 0);
   FUNC_1(&VAR_5->gfx.gfx_off_delay_work);
  } else {
   FUNC_0(VAR_5, 1);
  }
  break;
 default:
  break;
 }

 return 0;
}
