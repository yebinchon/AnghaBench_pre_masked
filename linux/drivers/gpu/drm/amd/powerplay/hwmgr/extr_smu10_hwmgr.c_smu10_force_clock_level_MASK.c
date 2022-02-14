
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu10_voltage_dependency_table {TYPE_2__* entries; int count; } ;
struct TYPE_3__ {struct smu10_voltage_dependency_table* vdd_dep_on_fclk; } ;
struct smu10_hwmgr {int gfx_max_freq_limit; int gfx_min_freq_limit; TYPE_1__ clock_vol_info; } ;
struct pp_hwmgr {struct smu10_hwmgr* backend; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;
struct TYPE_4__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_6,
  enum pp_clock_type VAR_7, uint32_t VAR_8)
{
 struct smu10_hwmgr *VAR_9 = VAR_6->backend;
 struct smu10_voltage_dependency_table *VAR_10 =
     VAR_9->clock_vol_info.vdd_dep_on_fclk;
 uint32_t VAR_11, VAR_12;

 VAR_11 = VAR_8 ? (FUNC_0(VAR_8) - 1) : 0;
 VAR_12 = VAR_8 ? (FUNC_1(VAR_8) - 1) : 0;

 switch (VAR_7) {
 case 128:
  if (VAR_11 > 2 || VAR_12 > 2) {
   FUNC_2("Currently sclk only support 3 levels on RV\n");
   return -VAR_0;
  }

  FUNC_3(VAR_6,
      VAR_2,
      VAR_11 == 2 ? VAR_9->gfx_max_freq_limit/100 :
      VAR_11 == 1 ? VAR_5 :
      VAR_9->gfx_min_freq_limit/100);

  FUNC_3(VAR_6,
      VAR_4,
      VAR_12 == 0 ? VAR_9->gfx_min_freq_limit/100 :
      VAR_12 == 1 ? VAR_5 :
      VAR_9->gfx_max_freq_limit/100);
  break;

 case 130:
  if (VAR_11 > VAR_10->count - 1 || VAR_12 > VAR_10->count - 1)
   return -VAR_0;

  FUNC_3(VAR_6,
      VAR_1,
      VAR_10->entries[VAR_11].clk/100);

  FUNC_3(VAR_6,
      VAR_3,
      VAR_10->entries[VAR_12].clk/100);
  break;

 case 129:
 default:
  break;
 }
 return 0;
}
