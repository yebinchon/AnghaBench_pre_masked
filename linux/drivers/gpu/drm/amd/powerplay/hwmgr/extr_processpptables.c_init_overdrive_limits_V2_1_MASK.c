
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* memoryClock; void* engineClock; } ;
struct TYPE_8__ {scalar_t__ overdriveVDDCStep; scalar_t__ maxOverdriveVDDC; scalar_t__ minOverdriveVDDC; TYPE_1__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_2__ platform_descriptor; } ;
struct TYPE_11__ {int ulMaxMemoryClock; int ulMaxEngineClock; } ;
struct TYPE_10__ {scalar_t__ usTableSize; } ;
struct TYPE_9__ {scalar_t__ usExtendendedHeaderOffset; } ;
typedef TYPE_3__ ATOM_PPLIB_POWERPLAYTABLE3 ;
typedef TYPE_4__ ATOM_PPLIB_POWERPLAYTABLE ;
typedef TYPE_5__ ATOM_PPLIB_EXTENDEDHEADER ;
typedef int ATOM_FIRMWARE_INFO_V2_1 ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_1,
   const ATOM_FIRMWARE_INFO_V2_1 *VAR_2)
{
 const ATOM_PPLIB_POWERPLAYTABLE3 *VAR_3;
 const ATOM_PPLIB_EXTENDEDHEADER *VAR_4;

 if (FUNC_0(VAR_1->usTableSize) <
     sizeof(ATOM_PPLIB_POWERPLAYTABLE3))
  return 0;

 VAR_3 = (const ATOM_PPLIB_POWERPLAYTABLE3 *)VAR_1;

 if (0 == VAR_3->usExtendendedHeaderOffset)
  return 0;

 VAR_4 = (ATOM_PPLIB_EXTENDEDHEADER *)(((unsigned long) VAR_1) +
   FUNC_0(VAR_3->usExtendendedHeaderOffset));

 VAR_0->platform_descriptor.overdriveLimit.engineClock = FUNC_1(VAR_4->ulMaxEngineClock);
 VAR_0->platform_descriptor.overdriveLimit.memoryClock = FUNC_1(VAR_4->ulMaxMemoryClock);


 VAR_0->platform_descriptor.minOverdriveVDDC = 0;
 VAR_0->platform_descriptor.maxOverdriveVDDC = 0;
 VAR_0->platform_descriptor.overdriveVDDCStep = 0;

 return 0;
}
