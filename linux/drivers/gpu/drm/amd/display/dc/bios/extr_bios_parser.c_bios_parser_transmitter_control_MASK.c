
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_bios {int dummy; } ;
struct bp_transmitter_control {int dummy; } ;
struct TYPE_2__ {int (* transmitter_control ) (struct bios_parser*,struct bp_transmitter_control*) ;} ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int FUNC_1 (struct bios_parser*,struct bp_transmitter_control*) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct dc_bios *VAR_1,
 struct bp_transmitter_control *VAR_2)
{
 struct bios_parser *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->cmd_tbl.transmitter_control)
  return VAR_0;

 return VAR_3->cmd_tbl.transmitter_control(VAR_3, VAR_2);
}
