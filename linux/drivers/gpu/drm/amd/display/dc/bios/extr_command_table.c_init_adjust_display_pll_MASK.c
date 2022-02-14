
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adjust_display_pll; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_3)
{
 switch (FUNC_0(VAR_0)) {
 case 2:
  VAR_3->cmd_tbl.adjust_display_pll = VAR_1;
  break;
 case 3:
  VAR_3->cmd_tbl.adjust_display_pll = VAR_2;
  break;
 default:
  FUNC_1("Don't have adjust_display_pll for v%d\n",
    FUNC_0(VAR_0));
  VAR_3->cmd_tbl.adjust_display_pll = ((void*)0);
  break;
 }
}
