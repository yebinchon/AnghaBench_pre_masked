
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_send_ioctx {int state; } ;
typedef enum srpt_command_state { ____Placeholder_srpt_command_state } srpt_command_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct srpt_send_ioctx *VAR_2,
     enum srpt_command_state VAR_3,
     enum srpt_command_state VAR_4)
{
 enum srpt_command_state VAR_5;

 FUNC_0(!VAR_2);
 FUNC_0(VAR_3 == VAR_0);
 FUNC_0(VAR_4 == VAR_1);

 VAR_5 = VAR_2->state;
 if (VAR_5 == VAR_3)
  VAR_2->state = VAR_4;

 return VAR_5 == VAR_3;
}
