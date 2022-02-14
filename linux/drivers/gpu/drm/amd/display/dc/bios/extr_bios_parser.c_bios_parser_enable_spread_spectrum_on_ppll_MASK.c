
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_bios {int dummy; } ;
struct bp_spread_spectrum_parameters {int dummy; } ;
struct TYPE_2__ {int (* enable_spread_spectrum_on_ppll ) (struct bios_parser*,struct bp_spread_spectrum_parameters*,int) ;} ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int FUNC_1 (struct bios_parser*,struct bp_spread_spectrum_parameters*,int) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct dc_bios *VAR_1,
 struct bp_spread_spectrum_parameters *VAR_2,
 bool VAR_3)
{
 struct bios_parser *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->cmd_tbl.enable_spread_spectrum_on_ppll)
  return VAR_0;

 return VAR_4->cmd_tbl.enable_spread_spectrum_on_ppll(
   VAR_4, VAR_2, VAR_3);

}
