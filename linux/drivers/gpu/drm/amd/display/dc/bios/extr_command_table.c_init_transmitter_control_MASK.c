
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
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3(struct bios_parser *VAR_6)
{
 uint8_t VAR_7;
 uint8_t VAR_8;

 if (FUNC_0(VAR_0,
   VAR_7, VAR_8) == 0)
  FUNC_1();
 switch (VAR_8) {
 case 2:
  VAR_6->cmd_tbl.transmitter_control = VAR_3;
  break;
 case 3:
  VAR_6->cmd_tbl.transmitter_control = VAR_4;
  break;
 case 4:
  VAR_6->cmd_tbl.transmitter_control = VAR_5;
  break;
 case 5:
  VAR_6->cmd_tbl.transmitter_control = VAR_1;
  break;
 case 6:
  VAR_6->cmd_tbl.transmitter_control = VAR_2;
  break;
 default:
  FUNC_2("Don't have transmitter_control for v%d\n", VAR_8);
  VAR_6->cmd_tbl.transmitter_control = ((void*)0);
  break;
 }
}
