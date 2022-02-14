
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dig_encoder_control; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bios_parser*) ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_4)
{
 uint32_t VAR_5 =
  FUNC_0(VAR_0);

 switch (VAR_5) {
 case 2:
  VAR_4->cmd_tbl.dig_encoder_control = VAR_1;
  break;
 case 4:
  VAR_4->cmd_tbl.dig_encoder_control = VAR_2;
  break;

 case 5:
  VAR_4->cmd_tbl.dig_encoder_control = VAR_3;
  break;

 default:
  FUNC_1(VAR_4);
  break;
 }
}
