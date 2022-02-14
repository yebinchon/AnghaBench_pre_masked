
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int usVoltageLevel; } ;
struct TYPE_9__ {int ulSCLKFreq; int usVoltageLevel; int ucVoltageMode; int ucVoltageType; } ;
union get_voltage_info {TYPE_8__ evv_out; TYPE_1__ in; } ;
typedef int uint32_t ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct TYPE_15__ {int atom_context; } ;
struct TYPE_11__ {size_t count; TYPE_2__* entries; } ;
struct TYPE_12__ {TYPE_3__ vddc_dependency_on_sclk; } ;
struct TYPE_13__ {TYPE_4__ dyn_state; } ;
struct TYPE_14__ {TYPE_5__ dpm; } ;
struct amdgpu_device {TYPE_7__ mode_info; TYPE_6__ pm; } ;
struct TYPE_10__ {scalar_t__ v; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_5,
        u16 VAR_6,
        u16 *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_1, VAR_3);
 u32 VAR_9;
 u32 VAR_10 = VAR_5->pm.dpm.dyn_state.vddc_dependency_on_sclk.count;
 union get_voltage_info VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_5->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_9].v ==
      VAR_6)
   break;
 }

 if (VAR_9 >= VAR_10)
  return -VAR_2;

 VAR_11.in.ucVoltageType = VAR_4;
 VAR_11.in.ucVoltageMode = VAR_0;
 VAR_11.in.usVoltageLevel = FUNC_2(VAR_6);
 VAR_11.in.ulSCLKFreq =
  FUNC_3(VAR_5->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_9].clk);

 FUNC_1(VAR_5->mode_info.atom_context, VAR_8, (uint32_t *)&VAR_11);

 *VAR_7 = FUNC_4(VAR_11.evv_out.usVoltageLevel);

 return 0;
}
