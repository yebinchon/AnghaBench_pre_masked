
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smu10_voltage_dependency_table {int count; TYPE_2__* entries; } ;
struct TYPE_3__ {struct smu10_voltage_dependency_table* vdd_dep_on_fclk; } ;
struct smu10_hwmgr {int gfx_max_freq_limit; int gfx_min_freq_limit; TYPE_1__ clock_vol_info; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;
struct TYPE_4__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3,
  enum pp_clock_type VAR_4, char *VAR_5)
{
 struct smu10_hwmgr *VAR_6 = (struct smu10_hwmgr *)(VAR_3->backend);
 struct smu10_voltage_dependency_table *VAR_7 =
   VAR_6->clock_vol_info.vdd_dep_on_fclk;
 uint32_t VAR_8, VAR_9, VAR_10 = 0;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3, VAR_1);
  VAR_9 = FUNC_0(VAR_3);


  if (VAR_9 == VAR_6->gfx_max_freq_limit/100)
   VAR_8 = 2;
  else if (VAR_9 == VAR_6->gfx_min_freq_limit/100)
   VAR_8 = 0;
  else
   VAR_8 = 1;

  VAR_10 += FUNC_2(VAR_5 + VAR_10, "0: %uMhz %s\n",
     VAR_6->gfx_min_freq_limit/100,
     VAR_8 == 0 ? "*" : "");
  VAR_10 += FUNC_2(VAR_5 + VAR_10, "1: %uMhz %s\n",
     VAR_8 == 1 ? VAR_9 : VAR_2,
     VAR_8 == 1 ? "*" : "");
  VAR_10 += FUNC_2(VAR_5 + VAR_10, "2: %uMhz %s\n",
     VAR_6->gfx_max_freq_limit/100,
     VAR_8 == 2 ? "*" : "");
  break;
 case 129:
  FUNC_1(VAR_3, VAR_0);
  VAR_9 = FUNC_0(VAR_3);

  for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++)
   VAR_10 += FUNC_2(VAR_5 + VAR_10, "%d: %uMhz %s\n",
     VAR_8,
     VAR_7->entries[VAR_8].clk / 100,
     ((VAR_7->entries[VAR_8].clk / 100)
      == VAR_9) ? "*" : "");
  break;
 default:
  break;
 }

 return VAR_10;
}
