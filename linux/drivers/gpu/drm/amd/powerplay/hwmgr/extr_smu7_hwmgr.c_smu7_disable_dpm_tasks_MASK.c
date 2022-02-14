
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {int device; TYPE_1__ platform_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int FUNC_9 (struct pp_hwmgr*) ;
 int FUNC_10 (struct pp_hwmgr*) ;
 int FUNC_11 (struct pp_hwmgr*) ;
 int FUNC_12 (struct pp_hwmgr*) ;
 int FUNC_13 (struct pp_hwmgr*) ;

int FUNC_14(struct pp_hwmgr *VAR_7)
{
 int VAR_8, VAR_9 = 0;

 if (FUNC_2(VAR_7->platform_descriptor.platformCaps,
   VAR_4))
  FUNC_0(VAR_7->device, VAR_0,
    VAR_3, VAR_6, 1);

 VAR_8 = FUNC_7(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable power containment!", VAR_9 = VAR_8);

 VAR_8 = FUNC_8(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable SMC CAC!", VAR_9 = VAR_8);

 VAR_8 = FUNC_6(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable DIDT!", VAR_9 = VAR_8);

 FUNC_0(VAR_7->device, VAR_0,
   VAR_1, VAR_5, 0);
 FUNC_0(VAR_7->device, VAR_0,
   VAR_3, VAR_2, 0);

 VAR_8 = FUNC_9(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable thermal auto throttle!", VAR_9 = VAR_8);

 VAR_8 = FUNC_3(VAR_7, 0);
 FUNC_1((VAR_8 == 0),
   "Failed to disable AVFS!", VAR_9 = VAR_8);

 VAR_8 = FUNC_13(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to stop DPM!", VAR_9 = VAR_8);

 VAR_8 = FUNC_5(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable deep sleep master switch!", VAR_9 = VAR_8);

 VAR_8 = FUNC_10(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to disable ULV!", VAR_9 = VAR_8);

 VAR_8 = FUNC_4(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to clear voting clients!", VAR_9 = VAR_8);

 VAR_8 = FUNC_12(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to reset to default!", VAR_9 = VAR_8);

 VAR_8 = FUNC_11(VAR_7);
 FUNC_1((VAR_8 == 0),
   "Failed to force to switch arbf0!", VAR_9 = VAR_8);

 return VAR_9;
}
