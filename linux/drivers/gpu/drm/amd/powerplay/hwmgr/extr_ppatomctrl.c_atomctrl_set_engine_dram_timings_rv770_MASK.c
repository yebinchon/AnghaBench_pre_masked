
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_4__ {void* ulClock; } ;
struct TYPE_6__ {TYPE_1__ sReserved; void* ulTargetEngineClock; } ;
typedef TYPE_3__ SET_ENGINE_CLOCK_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 void* FUNC_2 (int) ;

int FUNC_3(
  struct pp_hwmgr *VAR_4,
  uint32_t VAR_5,
  uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_4->adev;

 SET_ENGINE_CLOCK_PS_ALLOCATION VAR_8;


 VAR_8.ulTargetEngineClock =
  FUNC_2((VAR_5 & VAR_3) |
       ((VAR_1 << 24)));


 VAR_8.sReserved.ulClock =
  FUNC_2(VAR_6 & VAR_3);

 return FUNC_1(VAR_7->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_2),
   (uint32_t *)&VAR_8);
}
