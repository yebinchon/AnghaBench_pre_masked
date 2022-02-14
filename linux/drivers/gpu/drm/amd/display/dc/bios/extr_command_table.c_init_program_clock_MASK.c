
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * program_clock; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_3)
{
 switch (FUNC_0(VAR_0)) {
 case 5:
  VAR_3->cmd_tbl.program_clock = VAR_1;
  break;
 case 6:
  VAR_3->cmd_tbl.program_clock = VAR_2;
  break;
 default:
  FUNC_1("Don't have program_clock for v%d\n",
    FUNC_0(VAR_0));
  VAR_3->cmd_tbl.program_clock = ((void*)0);
  break;
 }
}
