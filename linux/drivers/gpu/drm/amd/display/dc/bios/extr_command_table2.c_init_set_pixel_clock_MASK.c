
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * set_pixel_clock; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_2)
{
 switch (FUNC_0(VAR_1)) {
 case 7:
  VAR_2->cmd_tbl.set_pixel_clock = VAR_0;
  break;
 default:
  FUNC_1("Don't have set_pixel_clock for v%d\n",
    FUNC_0(VAR_1));
  VAR_2->cmd_tbl.set_pixel_clock = ((void*)0);
  break;
 }
}
