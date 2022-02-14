
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bp_encoder_control {int dummy; } ;
struct bios_parser {TYPE_2__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {int (* assign_control_parameter ) (TYPE_2__*,struct bp_encoder_control*,TYPE_1__*) ;} ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ DIG_ENCODER_CONTROL_PARAMETERS_V2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__) ;
 int FUNC_1 (TYPE_2__*,struct bp_encoder_control*,TYPE_1__*) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_3,
 struct bp_encoder_control *VAR_4)
{
 enum bp_result VAR_5 = VAR_0;
 DIG_ENCODER_CONTROL_PARAMETERS_V2 VAR_6 = {0};

 VAR_3->cmd_helper->assign_control_parameter(VAR_3->cmd_helper, VAR_4, &VAR_6);

 if (FUNC_0(VAR_2, VAR_6))
  VAR_5 = VAR_1;

 return VAR_5;
}
