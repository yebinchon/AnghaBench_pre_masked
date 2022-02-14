
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_send_ioctx {int state; } ;
typedef enum srpt_command_state { ____Placeholder_srpt_command_state } srpt_command_state ;


 int VAR_0 ;

__attribute__((used)) static enum srpt_command_state FUNC_0(struct srpt_send_ioctx *VAR_1,
        enum srpt_command_state VAR_2)
{
 enum srpt_command_state VAR_3;

 VAR_3 = VAR_1->state;
 if (VAR_3 != VAR_0)
  VAR_1->state = VAR_2;

 return VAR_3;
}
