
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega10_hwmgr {int config_telemetry; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*,int) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int FUNC_9 (struct pp_hwmgr*) ;
 int FUNC_10 (struct pp_hwmgr*) ;
 int FUNC_11 (struct pp_hwmgr*) ;
 int FUNC_12 (struct pp_hwmgr*) ;
 int FUNC_13 (struct pp_hwmgr*) ;
 int FUNC_14 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_15(struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;
 int VAR_5, VAR_6 = 0;

 FUNC_7(VAR_3, 1);

 FUNC_3(VAR_3,
  VAR_1, VAR_4->config_telemetry);

 VAR_5 = FUNC_4(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to construct voltage tables!",
   VAR_6 = VAR_5);

 VAR_5 = FUNC_12(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to initialize SMC table!",
   VAR_6 = VAR_5);

 if (FUNC_2(VAR_0)) {
  VAR_5 = FUNC_9(VAR_3);
  FUNC_1(!VAR_5,
    "Failed to enable thermal protection!",
    VAR_6 = VAR_5);
 }

 VAR_5 = FUNC_11(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to enable VR hot feature!",
   VAR_6 = VAR_5);

 VAR_5 = FUNC_5(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to enable deep sleep master switch!",
   VAR_6 = VAR_5);

 VAR_5 = FUNC_14(VAR_3, VAR_2);
 FUNC_1(!VAR_5,
   "Failed to start DPM!", VAR_6 = VAR_5);


 VAR_5 = FUNC_6(VAR_3);
 FUNC_0(!VAR_5,
   "Failed to enable didt config!");

 VAR_5 = FUNC_8(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to enable power containment!",
   VAR_6 = VAR_5);

 VAR_5 = FUNC_13(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to power control set level!",
   VAR_6 = VAR_5);

 VAR_5 = FUNC_10(VAR_3);
 FUNC_1(!VAR_5,
   "Failed to enable ULV!",
   VAR_6 = VAR_5);

 return VAR_6;
}
