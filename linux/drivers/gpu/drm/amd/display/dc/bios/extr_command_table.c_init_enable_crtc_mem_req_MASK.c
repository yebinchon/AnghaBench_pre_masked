
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * enable_crtc_mem_req; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct bios_parser *VAR_2)
{
 switch (FUNC_0(VAR_0)) {
 case 1:
  VAR_2->cmd_tbl.enable_crtc_mem_req = VAR_1;
  break;
 default:
  VAR_2->cmd_tbl.enable_crtc_mem_req = ((void*)0);
  break;
 }
}
