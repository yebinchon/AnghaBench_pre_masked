
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ulMaxRPM; int ulMinRPM; } ;
struct TYPE_5__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {int smu_lock; TYPE_3__* hwmgr_func; TYPE_2__ thermal_controller; int pstate_mclk; int pstate_sclk; int pm_en; } ;
struct TYPE_6__ {int (* read_sensor ) (struct pp_hwmgr*,int,void*,int*) ;} ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,int,void*,int*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, int VAR_2,
         void *VAR_3, int *VAR_4)
{
 struct pp_hwmgr *VAR_5 = VAR_1;
 int VAR_6 = 0;

 if (!VAR_5 || !VAR_5->pm_en || !VAR_3)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
  *((uint32_t *)VAR_3) = VAR_5->pstate_sclk;
  return 0;
 case 129:
  *((uint32_t *)VAR_3) = VAR_5->pstate_mclk;
  return 0;
 case 130:
  *((uint32_t *)VAR_3) = VAR_5->thermal_controller.fanInfo.ulMinRPM;
  return 0;
 case 131:
  *((uint32_t *)VAR_3) = VAR_5->thermal_controller.fanInfo.ulMaxRPM;
  return 0;
 default:
  FUNC_0(&VAR_5->smu_lock);
  VAR_6 = VAR_5->hwmgr_func->read_sensor(VAR_5, VAR_2, VAR_3, VAR_4);
  FUNC_1(&VAR_5->smu_lock);
  return VAR_6;
 }
}
