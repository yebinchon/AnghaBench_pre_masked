
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nl_pid; } ;
struct nl_sock {scalar_t__ s_fd; int s_flags; int s_cb; TYPE_1__ s_local; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nl_sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct nl_sock *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->s_fd >= 0)
  FUNC_0(VAR_1->s_fd);

 if (!(VAR_1->s_flags & VAR_0))
  FUNC_3(VAR_1->s_local.nl_pid);

 FUNC_2(VAR_1->s_cb);
 FUNC_1(VAR_1);
}
