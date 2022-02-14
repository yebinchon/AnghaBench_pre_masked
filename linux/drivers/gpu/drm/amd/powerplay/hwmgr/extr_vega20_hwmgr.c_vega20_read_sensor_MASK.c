
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct vega20_hwmgr {int vce_power_gated; int uvd_power_gated; } ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ backend; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int AverageGfxclkFrequency; int TemperatureEdge; int TemperatureHBM; } ;
typedef TYPE_1__ SmuMetrics_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct pp_hwmgr*,int,int*) ;
 int FUNC_3 (struct pp_hwmgr*,int ,int*) ;
 int FUNC_4 (struct pp_hwmgr*,int *) ;
 int FUNC_5 (struct pp_hwmgr*,int*) ;
 int FUNC_6 (struct pp_hwmgr*,TYPE_1__*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_7, int VAR_8,
         void *VAR_9, int *VAR_10)
{
 struct vega20_hwmgr *VAR_11 = (struct vega20_hwmgr *)(VAR_7->backend);
 struct amdgpu_device *VAR_12 = VAR_7->adev;
 SmuMetrics_t VAR_13;
 uint32_t VAR_14;
 int VAR_15 = 0;

 switch (VAR_8) {
 case 136:
  VAR_15 = FUNC_6(VAR_7, &VAR_13);
  if (VAR_15)
   return VAR_15;

  *((uint32_t *)VAR_9) = VAR_13.AverageGfxclkFrequency * 100;
  *VAR_10 = 4;
  break;
 case 137:
  VAR_15 = FUNC_3(VAR_7,
    VAR_1,
    (uint32_t *)VAR_9);
  if (!VAR_15)
   *VAR_10 = 4;
  break;
 case 135:
 case 132:
  VAR_15 = FUNC_2(VAR_7, VAR_8, (uint32_t *)VAR_9);
  if (!VAR_15)
   *VAR_10 = 4;
  break;
 case 133:
  *((uint32_t *)VAR_9) = FUNC_7(VAR_7);
  *VAR_10 = 4;
  break;
 case 139:
  VAR_15 = FUNC_6(VAR_7, &VAR_13);
  if (VAR_15)
   return VAR_15;

  *((uint32_t *)VAR_9) = VAR_13.TemperatureEdge *
   VAR_2;
  *VAR_10 = 4;
  break;
 case 131:
  VAR_15 = FUNC_6(VAR_7, &VAR_13);
  if (VAR_15)
   return VAR_15;

  *((uint32_t *)VAR_9) = VAR_13.TemperatureHBM *
   VAR_2;
  *VAR_10 = 4;
  break;
 case 130:
  *((uint32_t *)VAR_9) = VAR_11->uvd_power_gated ? 0 : 1;
  *VAR_10 = 4;
  break;
 case 129:
  *((uint32_t *)VAR_9) = VAR_11->vce_power_gated ? 0 : 1;
  *VAR_10 = 4;
  break;
 case 134:
  *VAR_10 = 16;
  VAR_15 = FUNC_5(VAR_7, (uint32_t *)VAR_9);
  break;
 case 128:
  VAR_14 = (FUNC_0(VAR_3, 0, VAR_6) &
   VAR_4) >>
   VAR_5;
  *((uint32_t *)VAR_9) =
   (uint32_t)FUNC_1((uint8_t)VAR_14);
  break;
 case 138:
  VAR_15 = FUNC_4(VAR_7, (uint64_t *)VAR_9);
  if (!VAR_15)
   *VAR_10 = 8;
  break;
 default:
  VAR_15 = -VAR_0;
  break;
 }
 return VAR_15;
}
