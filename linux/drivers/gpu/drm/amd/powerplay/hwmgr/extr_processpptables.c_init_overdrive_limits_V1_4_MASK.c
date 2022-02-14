
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int engineClock; int memoryClock; } ;
struct TYPE_6__ {int maxOverdriveVDDC; scalar_t__ overdriveVDDCStep; void* minOverdriveVDDC; TYPE_1__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; } ;
struct TYPE_7__ {int usBootUpVDDCVoltage; int ul3DAccelerationEngineClock; int ulASICMaxMemoryClock; int ulASICMaxEngineClock; } ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;
typedef TYPE_3__ ATOM_FIRMWARE_INFO_V1_4 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_1,
   const ATOM_FIRMWARE_INFO_V1_4 *VAR_2)
{
 VAR_0->platform_descriptor.overdriveLimit.engineClock =
    FUNC_1(VAR_2->ulASICMaxEngineClock);

 VAR_0->platform_descriptor.overdriveLimit.memoryClock =
    FUNC_1(VAR_2->ulASICMaxMemoryClock);

 VAR_0->platform_descriptor.maxOverdriveVDDC =
  FUNC_1(VAR_2->ul3DAccelerationEngineClock) & 0x7FF;

 VAR_0->platform_descriptor.minOverdriveVDDC =
      FUNC_0(VAR_2->usBootUpVDDCVoltage);

 VAR_0->platform_descriptor.maxOverdriveVDDC =
      FUNC_0(VAR_2->usBootUpVDDCVoltage);

 VAR_0->platform_descriptor.overdriveVDDCStep = 0;
 return 0;
}
