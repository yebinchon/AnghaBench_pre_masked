
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct integrated_info {struct clock_voltage_caps* disp_clk_voltage; } ;
struct clock_voltage_caps {scalar_t__ max_supported_clk; int member_1; int member_0; } ;
struct bios_parser {TYPE_2__* master_data_tbl; } ;
struct atom_data_revision {int minor; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_3__ {scalar_t__ IntegratedSystemInfo; } ;
struct TYPE_4__ {TYPE_1__ ListOfDataTables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_1 (int,struct atom_data_revision*) ;
 int FUNC_2 (struct bios_parser*,struct integrated_info*) ;
 int FUNC_3 (struct bios_parser*,struct integrated_info*) ;
 int VAR_4 ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_5,
 struct integrated_info *VAR_6)
{
 enum bp_result VAR_7 = VAR_1;

 VAR_0 *VAR_4;
 struct atom_data_revision VAR_8;

 if (VAR_5->master_data_tbl->ListOfDataTables.IntegratedSystemInfo) {
  VAR_4 = FUNC_0(VAR_0,
    VAR_5->master_data_tbl->ListOfDataTables.IntegratedSystemInfo);

  FUNC_1(VAR_4, &VAR_8);


  switch (VAR_8.minor) {
  case 8:
   VAR_7 = FUNC_2(VAR_5, VAR_6);
   break;
  case 9:
   VAR_7 = FUNC_3(VAR_5, VAR_6);
   break;
  default:
   return VAR_7;

  }
 }


 if (VAR_7 == VAR_2) {
  struct clock_voltage_caps VAR_9 = {0, 0};
  uint32_t VAR_10;
  uint32_t VAR_11;

  for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10) {
   for (VAR_11 = VAR_10; VAR_11 > 0; --VAR_11) {
    if (
      VAR_6->disp_clk_voltage[VAR_11].max_supported_clk <
      VAR_6->disp_clk_voltage[VAR_11-1].max_supported_clk) {

     VAR_9 = VAR_6->disp_clk_voltage[VAR_11-1];
     VAR_6->disp_clk_voltage[VAR_11-1] =
       VAR_6->disp_clk_voltage[VAR_11];
     VAR_6->disp_clk_voltage[VAR_11] = VAR_9;
    }
   }
  }

 }

 return VAR_7;
}
