
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * transmitter_control; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct bios_parser *VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;

 if (FUNC_0(VAR_0, VAR_3, VAR_4) == 0)
  FUNC_1();
 switch (VAR_4) {
 case 6:
  VAR_2->cmd_tbl.transmitter_control = VAR_1;
  break;
 default:
  FUNC_2("Don't have transmitter_control for v%d\n", VAR_4);
  VAR_2->cmd_tbl.transmitter_control = ((void*)0);
  break;
 }
}
