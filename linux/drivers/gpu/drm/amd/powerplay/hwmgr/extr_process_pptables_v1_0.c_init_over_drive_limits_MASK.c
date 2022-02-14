
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* memoryClock; void* engineClock; } ;
struct TYPE_6__ {scalar_t__ overdriveVDDCStep; scalar_t__ maxOverdriveVDDC; scalar_t__ minOverdriveVDDC; TYPE_1__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; } ;
struct TYPE_7__ {int ulMaxODMemoryClock; int ulMaxODEngineClock; } ;
typedef TYPE_3__ ATOM_Tonga_POWERPLAYTABLE ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(
  struct pp_hwmgr *VAR_0,
  const ATOM_Tonga_POWERPLAYTABLE *VAR_1)
{
 VAR_0->platform_descriptor.overdriveLimit.engineClock =
  FUNC_0(VAR_1->ulMaxODEngineClock);
 VAR_0->platform_descriptor.overdriveLimit.memoryClock =
  FUNC_0(VAR_1->ulMaxODMemoryClock);

 VAR_0->platform_descriptor.minOverdriveVDDC = 0;
 VAR_0->platform_descriptor.maxOverdriveVDDC = 0;
 VAR_0->platform_descriptor.overdriveVDDCStep = 0;

 return 0;
}
