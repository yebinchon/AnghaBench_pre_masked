
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {int adev; } ;
struct TYPE_2__ {int usReferenceClock; } ;
typedef TYPE_1__ ATOM_FIRMWARE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;

uint32_t FUNC_3(struct pp_hwmgr *VAR_2)
{
 ATOM_FIRMWARE_INFO *VAR_3;
 u8 VAR_4, VAR_5;
 u16 VAR_6;
 uint32_t VAR_7;

 VAR_3 = (ATOM_FIRMWARE_INFO *)
  FUNC_2(VAR_2->adev,
   FUNC_0(VAR_0, VAR_1),
   &VAR_6, &VAR_4, &VAR_5);

 if (VAR_3 == ((void*)0))
  VAR_7 = 2700;
 else
  VAR_7 = (uint32_t)(FUNC_1(VAR_3->usReferenceClock));

 return VAR_7;
}
