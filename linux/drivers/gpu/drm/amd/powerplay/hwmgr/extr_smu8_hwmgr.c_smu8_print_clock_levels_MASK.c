
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* nbp_memory_clock; } ;
struct smu8_hwmgr {TYPE_3__ sys_info; } ;
struct TYPE_4__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {int device; TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_2__* entries; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;
struct TYPE_5__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_6,
  enum pp_clock_type VAR_7, char *VAR_8)
{
 struct smu8_hwmgr *VAR_9 = VAR_6->backend;
 struct phm_clock_voltage_dependency_table *VAR_10 =
   VAR_6->dyn_state.vddc_dependency_on_sclk;
 int VAR_11, VAR_12, VAR_13 = 0;

 switch (VAR_7) {
 case 128:
  VAR_12 = FUNC_0(FUNC_1(VAR_6->device,
    VAR_0,
    VAR_5),
    VAR_4,
    VAR_2);

  for (VAR_11 = 0; VAR_11 < VAR_10->count; VAR_11++)
   VAR_13 += FUNC_2(VAR_8 + VAR_13, "%d: %uMhz %s\n",
     VAR_11, VAR_10->entries[VAR_11].clk / 100,
     (VAR_11 == VAR_12) ? "*" : "");
  break;
 case 129:
  VAR_12 = FUNC_0(FUNC_1(VAR_6->device,
    VAR_0,
    VAR_5),
    VAR_4,
    VAR_1);

  for (VAR_11 = VAR_3; VAR_11 > 0; VAR_11--)
   VAR_13 += FUNC_2(VAR_8 + VAR_13, "%d: %uMhz %s\n",
     VAR_3-VAR_11, VAR_9->sys_info.nbp_memory_clock[VAR_11-1] / 100,
     (VAR_3-VAR_11 == VAR_12) ? "*" : "");
  break;
 default:
  break;
 }
 return VAR_13;
}
