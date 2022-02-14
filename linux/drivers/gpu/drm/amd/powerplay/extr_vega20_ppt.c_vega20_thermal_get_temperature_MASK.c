
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amd_pp_sensors { ____Placeholder_amd_pp_sensors } amd_pp_sensors ;
struct TYPE_3__ {int TemperatureEdge; int TemperatureHBM; } ;
typedef TYPE_1__ SmuMetrics_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_6,
          enum amd_pp_sensors VAR_7,
          uint32_t *VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_6->adev;
 SmuMetrics_t VAR_10;
 uint32_t VAR_11 = 0;
 int VAR_12 = 0;

 if (!VAR_8)
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_6, &VAR_10);
 if (VAR_12)
  return VAR_12;

 switch (VAR_7) {
 case 129:
  VAR_11 = FUNC_0(VAR_4, 0, VAR_5);
  VAR_11 = (VAR_11 & VAR_0) >>
    VAR_1;

  VAR_11 = VAR_11 & 0x1ff;
  VAR_11 *= VAR_3;

  *VAR_8 = VAR_11;
  break;
 case 130:
  *VAR_8 = VAR_10.TemperatureEdge *
   VAR_3;
  break;
 case 128:
  *VAR_8 = VAR_10.TemperatureHBM *
   VAR_3;
  break;
 default:
  FUNC_1("Invalid sensor for retrieving temp\n");
  return -VAR_2;
 }

 return 0;
}
