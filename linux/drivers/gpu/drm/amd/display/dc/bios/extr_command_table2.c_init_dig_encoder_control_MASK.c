
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * dig_encoder_control; } ;
struct bios_parser {TYPE_1__ cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bios_parser *VAR_2)
{
 uint32_t VAR_3 =
  FUNC_0(VAR_0);

 switch (VAR_3) {
 case 5:
  VAR_2->cmd_tbl.dig_encoder_control = VAR_1;
  break;
 default:
  FUNC_1("Don't have dig_encoder_control for v%d\n", VAR_3);
  VAR_2->cmd_tbl.dig_encoder_control = ((void*)0);
  break;
 }
}
