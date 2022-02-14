
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_tbl {int (* encoder_control_dig1 ) (struct bios_parser*,struct bp_encoder_control*) ;int (* encoder_control_dig2 ) (struct bios_parser*,struct bp_encoder_control*) ;} ;
struct bp_encoder_control {int engine_id; } ;
struct bios_parser {struct cmd_tbl cmd_tbl; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 int VAR_0 ;


 int FUNC_0 (struct bios_parser*,struct bp_encoder_control*) ;
 int FUNC_1 (struct bios_parser*,struct bp_encoder_control*) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_1,
 struct bp_encoder_control *VAR_2)
{
 enum bp_result VAR_3 = VAR_0;
 struct cmd_tbl *VAR_4 = &VAR_1->cmd_tbl;

 if (VAR_2 != ((void*)0))
  switch (VAR_2->engine_id) {
  case 129:
   if (VAR_4->encoder_control_dig1 != ((void*)0))
    VAR_3 =
     VAR_4->encoder_control_dig1(VAR_1, VAR_2);
   break;
  case 128:
   if (VAR_4->encoder_control_dig2 != ((void*)0))
    VAR_3 =
     VAR_4->encoder_control_dig2(VAR_1, VAR_2);
   break;

  default:
   break;
  }

 return VAR_3;
}
