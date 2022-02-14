
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int FUNC_9 (struct pp_hwmgr*,int) ;
 int FUNC_10 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_11(struct pp_hwmgr *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (FUNC_1(VAR_0))
  FUNC_7(VAR_2);

 VAR_3 = FUNC_6(VAR_2);
 FUNC_0((VAR_3 == 0),
   "Failed to disable power containment!", VAR_4 = VAR_3);

 VAR_3 = FUNC_5(VAR_2);
 FUNC_0((VAR_3 == 0),
   "Failed to disable didt config!", VAR_4 = VAR_3);

 VAR_3 = FUNC_3(VAR_2, 0);
 FUNC_0((VAR_3 == 0),
   "Failed to disable AVFS!", VAR_4 = VAR_3);

 VAR_3 = FUNC_10(VAR_2, VAR_1);
 FUNC_0((VAR_3 == 0),
   "Failed to stop DPM!", VAR_4 = VAR_3);

 VAR_3 = FUNC_4(VAR_2);
 FUNC_0((VAR_3 == 0),
   "Failed to disable deep sleep!", VAR_4 = VAR_3);

 VAR_3 = FUNC_8(VAR_2);
 FUNC_0((VAR_3 == 0),
   "Failed to disable ulv!", VAR_4 = VAR_3);

 VAR_3 = FUNC_2(VAR_2);
 FUNC_0((VAR_3 == 0),
   "Failed to disable acg!", VAR_4 = VAR_3);

 FUNC_9(VAR_2, 0);
 return VAR_4;
}
