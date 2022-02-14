
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * set_pixel_clock; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_5)
{
 switch (FUNC_0(VAR_0)) {
 case 3:
  VAR_5->cmd_tbl.set_pixel_clock = VAR_1;
  break;
 case 5:
  VAR_5->cmd_tbl.set_pixel_clock = VAR_2;
  break;
 case 6:
  VAR_5->cmd_tbl.set_pixel_clock = VAR_3;
  break;
 case 7:
  VAR_5->cmd_tbl.set_pixel_clock = VAR_4;
  break;
 default:
  FUNC_1("Don't have set_pixel_clock for v%d\n",
    FUNC_0(VAR_0));
  VAR_5->cmd_tbl.set_pixel_clock = ((void*)0);
  break;
 }
}
