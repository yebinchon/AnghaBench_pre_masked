
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int frame_time_x2; } ;
struct pp_hwmgr {int feature_mask; scalar_t__ chip_id; scalar_t__ backend; } ;
typedef int PPSMC_Msg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_6)
{
 struct smu7_hwmgr *VAR_7 = (struct smu7_hwmgr *)(VAR_6->backend);

 if (VAR_6->feature_mask & VAR_5) {
  if (VAR_6->chip_id == VAR_0)
   FUNC_1(VAR_6,
     (PPSMC_Msg)VAR_4, VAR_7->frame_time_x2);
  else
   FUNC_1(VAR_6,
     (PPSMC_Msg)VAR_3, VAR_7->frame_time_x2);
 }
 return (FUNC_0(VAR_6, (PPSMC_Msg)VAR_2) == 0) ? 0 : -VAR_1;
}
