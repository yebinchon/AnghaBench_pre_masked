
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu7_hwmgr {int apply_optimized_settings; } ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*,void const*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*,void const*) ;
 int FUNC_5 (struct pp_hwmgr*,void const*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*,void const*) ;
 int FUNC_8 (struct pp_hwmgr*,void const*) ;
 int FUNC_9 (struct pp_hwmgr*) ;
 int FUNC_10 (struct pp_hwmgr*) ;
 int FUNC_11 (struct pp_hwmgr*) ;
 int FUNC_12 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_13(struct pp_hwmgr *VAR_1, const void *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_1->backend);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_0((0 == VAR_3),
   "Failed to find DPM states clocks in DPM table!",
   VAR_4 = VAR_3);

 if (FUNC_1(VAR_1->platform_descriptor.platformCaps,
   VAR_0)) {
  VAR_3 =
   FUNC_8(VAR_1, VAR_2);
  FUNC_0((0 == VAR_3),
    "Failed to request link speed change before state change!",
    VAR_4 = VAR_3);
 }

 VAR_3 = FUNC_3(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to freeze SCLK MCLK DPM!", VAR_4 = VAR_3);

 VAR_3 = FUNC_7(VAR_1, VAR_2);
 FUNC_0((0 == VAR_3),
   "Failed to populate and upload SCLK MCLK DPM levels!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_10(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to update avfs voltages!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 FUNC_0((0 == VAR_3),
   "Failed to generate DPM level enabled mask!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_12(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to update SCLK threshold!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_6(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to notify smc display settings!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_9(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to unfreeze SCLK MCLK DPM!",
   VAR_4 = VAR_3);

 VAR_3 = FUNC_11(VAR_1);
 FUNC_0((0 == VAR_3),
   "Failed to upload DPM level enabled mask!",
   VAR_4 = VAR_3);

 if (FUNC_1(VAR_1->platform_descriptor.platformCaps,
   VAR_0)) {
  VAR_3 =
   FUNC_5(VAR_1, VAR_2);
  FUNC_0((0 == VAR_3),
    "Failed to notify link speed change after state change!",
    VAR_4 = VAR_3);
 }
 VAR_5->apply_optimized_settings = 0;
 return VAR_4;
}
