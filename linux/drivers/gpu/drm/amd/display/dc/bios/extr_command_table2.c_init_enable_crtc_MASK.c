
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * enable_crtc; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_2)
{
 switch (FUNC_0(VAR_1)) {
 case 1:
  VAR_2->cmd_tbl.enable_crtc = VAR_0;
  break;
 default:
  FUNC_1("Don't have enable_crtc for v%d\n",
    FUNC_0(VAR_1));
  VAR_2->cmd_tbl.enable_crtc = ((void*)0);
  break;
 }
}
