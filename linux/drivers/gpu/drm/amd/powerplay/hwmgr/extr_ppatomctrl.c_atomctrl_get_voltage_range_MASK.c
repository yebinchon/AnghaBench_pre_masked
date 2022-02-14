
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int chip_id; int adev; } ;
struct TYPE_4__ {int ulMinVddc; int ulMaxVddc; } ;
struct TYPE_3__ {int ulMinVddc; int ulMaxVddc; } ;
typedef TYPE_1__ ATOM_ASIC_PROFILING_INFO_V3_6 ;
typedef TYPE_2__ ATOM_ASIC_PROFILING_INFO_V3_3 ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int *,int *,int *) ;

void FUNC_3(struct pp_hwmgr *VAR_2, uint32_t *VAR_3,
       uint32_t *VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_2(VAR_2->adev,
     FUNC_0(VAR_1, VAR_0),
     ((void*)0), ((void*)0), ((void*)0));

 if (VAR_5) {
  switch (VAR_2->chip_id) {
  case 128:
  case 132:
   *VAR_3 = FUNC_1(((ATOM_ASIC_PROFILING_INFO_V3_3 *)VAR_5)->ulMaxVddc) / 4;
   *VAR_4 = FUNC_1(((ATOM_ASIC_PROFILING_INFO_V3_3 *)VAR_5)->ulMinVddc) / 4;
   return;
  case 130:
  case 131:
  case 129:
   *VAR_3 = FUNC_1(((ATOM_ASIC_PROFILING_INFO_V3_6 *)VAR_5)->ulMaxVddc) / 100;
   *VAR_4 = FUNC_1(((ATOM_ASIC_PROFILING_INFO_V3_6 *)VAR_5)->ulMinVddc) / 100;
   return;
  default:
   break;
  }
 }
 *VAR_3 = 0;
 *VAR_4 = 0;
}
