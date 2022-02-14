
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * set_crtc_timing; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_2)
{
 uint32_t VAR_3 =
   FUNC_0(VAR_1);

 switch (VAR_3) {
 case 3:
  VAR_2->cmd_tbl.set_crtc_timing =
   VAR_0;
  break;
 default:
  FUNC_1("Don't have set_crtc_timing for v%d\n", VAR_3);
  VAR_2->cmd_tbl.set_crtc_timing = ((void*)0);
  break;
 }
}
