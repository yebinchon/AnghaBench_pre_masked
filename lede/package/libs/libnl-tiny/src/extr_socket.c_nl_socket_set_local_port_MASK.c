
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ nl_pid; } ;
struct nl_sock {int s_flags; TYPE_1__ s_local; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct nl_sock *VAR_1, uint32_t VAR_2)
{
 if (VAR_2 == 0) {
  VAR_2 = FUNC_0();
  VAR_1->s_flags &= ~VAR_0;
 } else {
  if (!(VAR_1->s_flags & VAR_0))
   FUNC_1(VAR_1->s_local.nl_pid);
  VAR_1->s_flags |= VAR_0;
 }

 VAR_1->s_local.nl_pid = VAR_2;
}
