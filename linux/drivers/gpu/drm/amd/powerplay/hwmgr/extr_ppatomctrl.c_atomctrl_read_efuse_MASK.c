
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct TYPE_5__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_4__ {void* ucBitLength; void* ucBitShift; int usEfuseIndex; } ;
struct TYPE_6__ {int ulEfuseValue; TYPE_1__ sEfuse; } ;
typedef TYPE_3__ READ_EFUSE_VALUE_PARAMETER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct pp_hwmgr *VAR_2, uint16_t VAR_3,
  uint16_t VAR_4, uint32_t VAR_5, uint32_t *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_2->adev;
 int VAR_8;
 READ_EFUSE_VALUE_PARAMETER VAR_9;

 VAR_9.sEfuse.usEfuseIndex = FUNC_2((VAR_3 / 32) * 4);
 VAR_9.sEfuse.ucBitShift = (uint8_t)
   (VAR_3 - ((VAR_3 / 32) * 32));
 VAR_9.sEfuse.ucBitLength = (uint8_t)
   ((VAR_4 - VAR_3) + 1);

 VAR_8 = FUNC_1(VAR_7->mode_info.atom_context,
   FUNC_0(VAR_0, VAR_1),
   (uint32_t *)&VAR_9);
 *VAR_6 = VAR_8 ? 0 : FUNC_3(VAR_9.ulEfuseValue) & VAR_5;

 return VAR_8;
}
