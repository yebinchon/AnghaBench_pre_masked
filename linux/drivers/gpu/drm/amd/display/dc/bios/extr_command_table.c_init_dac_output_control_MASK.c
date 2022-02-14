
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dac2_output_control; int * dac1_output_control; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(struct bios_parser *VAR_4)
{
 switch (FUNC_0(VAR_0)) {
 case 1:
  VAR_4->cmd_tbl.dac1_output_control = VAR_2;
  break;
 default:
  VAR_4->cmd_tbl.dac1_output_control = ((void*)0);
  break;
 }
 switch (FUNC_0(VAR_1)) {
 case 1:
  VAR_4->cmd_tbl.dac2_output_control = VAR_3;
  break;
 default:
  VAR_4->cmd_tbl.dac2_output_control = ((void*)0);
  break;
 }
}
