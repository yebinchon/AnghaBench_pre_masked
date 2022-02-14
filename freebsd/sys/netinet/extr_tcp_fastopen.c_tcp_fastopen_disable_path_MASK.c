
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_flags; TYPE_1__* t_inpcb; } ;
struct tcp_fastopen_ccache_entry {scalar_t__ disable_time; scalar_t__ cookie_len; scalar_t__ server_mss; } ;
struct tcp_fastopen_ccache_bucket {int dummy; } ;
struct in_conninfo {int dummy; } ;
struct TYPE_2__ {struct in_conninfo inp_inc; } ;


 int FUNC_0 (struct tcp_fastopen_ccache_bucket*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct tcp_fastopen_ccache_bucket*,struct in_conninfo*,int ,scalar_t__,int *) ;
 struct tcp_fastopen_ccache_entry* FUNC_3 (struct in_conninfo*,struct tcp_fastopen_ccache_bucket**) ;

void
FUNC_4(struct tcpcb *VAR_2)
{
 struct in_conninfo *VAR_3 = &VAR_2->t_inpcb->inp_inc;
 struct tcp_fastopen_ccache_bucket *VAR_4;
 struct tcp_fastopen_ccache_entry *VAR_5;

 VAR_5 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_5) {
  VAR_5->server_mss = 0;
  VAR_5->cookie_len = 0;




  if (VAR_5->disable_time == 0)
   VAR_5->disable_time = FUNC_1();
 } else
  FUNC_2(VAR_4, VAR_3, 0,
         VAR_0 + 1, ((void*)0));

 FUNC_0(VAR_4);
 VAR_2->t_flags &= ~VAR_1;
}
