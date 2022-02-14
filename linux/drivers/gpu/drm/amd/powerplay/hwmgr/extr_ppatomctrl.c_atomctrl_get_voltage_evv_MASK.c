
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {TYPE_2__* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_3__ dyn_state; struct amdgpu_device* adev; } ;
struct TYPE_10__ {int atom_context; } ;
struct amdgpu_device {TYPE_4__ mode_info; } ;
struct TYPE_12__ {int usVoltageLevel; } ;
struct TYPE_11__ {int ulSCLKFreq; scalar_t__ usVoltageLevel; int ucVoltageMode; int ucVoltageType; } ;
struct TYPE_8__ {int count; TYPE_1__* entries; } ;
struct TYPE_7__ {scalar_t__ v; int clk; } ;
typedef TYPE_5__ GET_VOLTAGE_INFO_INPUT_PARAMETER_V1_2 ;
typedef TYPE_6__ GET_EVV_VOLTAGE_INFO_OUTPUT_PARAMETER_V1_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct pp_hwmgr *VAR_5,
        uint16_t VAR_6,
        uint16_t *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_5->adev;
 GET_VOLTAGE_INFO_INPUT_PARAMETER_V1_2 VAR_9;
 int VAR_10;
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_5->dyn_state.vddc_dependency_on_sclk->count; VAR_11++) {
  if (VAR_5->dyn_state.vddc_dependency_on_sclk->entries[VAR_11].v == VAR_6) {

   break;
  }
 }

 if (VAR_11 >= VAR_5->dyn_state.vddc_dependency_on_sclk->count) {
         FUNC_4("Can't find requested voltage id in vddc_dependency_on_sclk table!\n");
         return -VAR_2;
 }

 VAR_9.ucVoltageType = VAR_4;
 VAR_9.ucVoltageMode = VAR_0;
 VAR_9.usVoltageLevel = VAR_6;
 VAR_9.ulSCLKFreq =
  FUNC_2(VAR_5->dyn_state.vddc_dependency_on_sclk->entries[VAR_11].clk);

 VAR_10 = FUNC_1(VAR_8->mode_info.atom_context,
   FUNC_0(VAR_1, VAR_3),
   (uint32_t *)&VAR_9);

 if (0 != VAR_10)
  return VAR_10;

 *VAR_7 = FUNC_3(((GET_EVV_VOLTAGE_INFO_OUTPUT_PARAMETER_V1_2 *)
    (&VAR_9))->usVoltageLevel);

 return VAR_10;
}
