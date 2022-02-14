
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * set_crtc_timing; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_4)
{
 uint32_t VAR_5 =
   FUNC_0(VAR_1);
 if (VAR_5 > 2)
  switch (VAR_5) {
  case 3:
   VAR_4->cmd_tbl.set_crtc_timing =
     VAR_3;
   break;
  default:
   FUNC_1("Don't have set_crtc_timing for dtd v%d\n",
     VAR_5);
   VAR_4->cmd_tbl.set_crtc_timing = ((void*)0);
   break;
  }
 else
  switch (FUNC_0(VAR_0)) {
  case 1:
   VAR_4->cmd_tbl.set_crtc_timing = VAR_2;
   break;
  default:
   FUNC_1("Don't have set_crtc_timing for v%d\n",
     FUNC_0(VAR_0));
   VAR_4->cmd_tbl.set_crtc_timing = ((void*)0);
   break;
  }
}
