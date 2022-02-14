
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_recv_msg {int (* done ) (struct ipmi_recv_msg*) ;TYPE_1__* user; } ;
struct TYPE_2__ {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ipmi_recv_msg*) ;

void FUNC_2(struct ipmi_recv_msg *VAR_1)
{
 if (VAR_1->user)
  FUNC_0(&VAR_1->user->refcount, VAR_0);
 VAR_1->done(VAR_1);
}
