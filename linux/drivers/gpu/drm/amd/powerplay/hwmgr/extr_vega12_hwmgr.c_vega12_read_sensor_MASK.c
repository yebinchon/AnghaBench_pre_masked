
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vega12_hwmgr {int vce_power_gated; int uvd_power_gated; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_3__ {int TemperatureHotspot; int TemperatureHBM; } ;
typedef TYPE_1__ SmuMetrics_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int,int*) ;
 int FUNC_1 (struct pp_hwmgr*,int*) ;
 int FUNC_2 (struct pp_hwmgr*,int*) ;
 int FUNC_3 (struct pp_hwmgr*,int *) ;
 int FUNC_4 (struct pp_hwmgr*,int*) ;
 int FUNC_5 (struct pp_hwmgr*,TYPE_1__*) ;
 int FUNC_6 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_2, int VAR_3,
         void *VAR_4, int *VAR_5)
{
 struct vega12_hwmgr *VAR_6 = (struct vega12_hwmgr *)(VAR_2->backend);
 SmuMetrics_t VAR_7;
 int VAR_8 = 0;

 switch (VAR_3) {
 case 136:
  VAR_8 = FUNC_1(VAR_2, (uint32_t *)VAR_4);
  if (!VAR_8)
   *VAR_5 = 4;
  break;
 case 137:
  VAR_8 = FUNC_2(VAR_2, (uint32_t *)VAR_4);
  if (!VAR_8)
   *VAR_5 = 4;
  break;
 case 135:
 case 131:
  VAR_8 = FUNC_0(VAR_2, VAR_3, (uint32_t *)VAR_4);
  if (!VAR_8)
   *VAR_5 = 4;
  break;
 case 133:
  *((uint32_t *)VAR_4) = FUNC_6(VAR_2);
  *VAR_5 = 4;
  break;
 case 132:
  VAR_8 = FUNC_5(VAR_2, &VAR_7);
  if (VAR_8)
   return VAR_8;

  *((uint32_t *)VAR_4) = VAR_7.TemperatureHotspot *
   VAR_1;
  *VAR_5 = 4;
  break;
 case 130:
  VAR_8 = FUNC_5(VAR_2, &VAR_7);
  if (VAR_8)
   return VAR_8;

  *((uint32_t *)VAR_4) = VAR_7.TemperatureHBM *
   VAR_1;
  *VAR_5 = 4;
  break;
 case 129:
  *((uint32_t *)VAR_4) = VAR_6->uvd_power_gated ? 0 : 1;
  *VAR_5 = 4;
  break;
 case 128:
  *((uint32_t *)VAR_4) = VAR_6->vce_power_gated ? 0 : 1;
  *VAR_5 = 4;
  break;
 case 134:
  VAR_8 = FUNC_4(VAR_2, (uint32_t *)VAR_4);
  if (!VAR_8)
   *VAR_5 = 4;
  break;
 case 138:
  VAR_8 = FUNC_3(VAR_2, (uint64_t *)VAR_4);
  if (!VAR_8)
   *VAR_5 = 8;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
