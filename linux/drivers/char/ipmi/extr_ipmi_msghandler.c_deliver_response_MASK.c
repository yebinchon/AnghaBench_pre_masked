
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_user {int handler_data; TYPE_1__* handler; } ;
struct ipmi_smi {int (* null_user_handler ) (struct ipmi_smi*,struct ipmi_recv_msg*) ;} ;
struct ipmi_recv_msg {int user; } ;
struct TYPE_2__ {int (* ipmi_recv_hndl ) (struct ipmi_recv_msg*,int ) ;} ;


 int VAR_0 ;
 struct ipmi_user* FUNC_0 (int ,int*) ;
 int FUNC_1 (struct ipmi_recv_msg*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ipmi_user*,int) ;
 int FUNC_3 (struct ipmi_smi*,struct ipmi_recv_msg*) ;
 int FUNC_4 (struct ipmi_recv_msg*,int ) ;

__attribute__((used)) static int FUNC_5(struct ipmi_smi *VAR_2, struct ipmi_recv_msg *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3->user) {

  if (VAR_2->null_user_handler) {
   VAR_2->null_user_handler(VAR_2, VAR_3);
  } else {

   VAR_4 = -VAR_0;
  }
  FUNC_1(VAR_3);
 } else if (VAR_1) {





  FUNC_1(VAR_3);
 } else {
  int VAR_5;
  struct ipmi_user *VAR_6 = FUNC_0(VAR_3->user, &VAR_5);

  if (VAR_6) {
   VAR_6->handler->ipmi_recv_hndl(VAR_3, VAR_6->handler_data);
   FUNC_2(VAR_6, VAR_5);
  } else {

   FUNC_1(VAR_3);
   VAR_4 = -VAR_0;
  }
 }

 return VAR_4;
}
