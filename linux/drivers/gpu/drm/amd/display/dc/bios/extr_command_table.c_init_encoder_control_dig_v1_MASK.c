
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_tbl {int dig_encoder_control; int * encoder_control_dig2; int * encoder_control_dig1; } ;
struct bios_parser {struct cmd_tbl cmd_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct bios_parser *VAR_5)
{
 struct cmd_tbl *VAR_6 = &VAR_5->cmd_tbl;

 if (1 == FUNC_0(VAR_0))
  VAR_6->encoder_control_dig1 = VAR_2;
 else
  VAR_6->encoder_control_dig1 = ((void*)0);

 if (1 == FUNC_0(VAR_1))
  VAR_6->encoder_control_dig2 = VAR_3;
 else
  VAR_6->encoder_control_dig2 = ((void*)0);

 VAR_6->dig_encoder_control = VAR_4;
}
