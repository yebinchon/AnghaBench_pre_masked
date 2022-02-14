
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct tcpcb {TYPE_1__* t_inpcb; } ;
struct tcp_fastopen_ccache_entry {int cookie_len; scalar_t__ disable_time; scalar_t__ server_mss; int cookie; } ;
struct tcp_fastopen_ccache_bucket {int dummy; } ;
struct in_conninfo {int dummy; } ;
struct TYPE_2__ {struct in_conninfo inp_inc; } ;


 int FUNC_0 (struct tcp_fastopen_ccache_bucket*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (struct tcp_fastopen_ccache_bucket*,struct in_conninfo*,scalar_t__,int,int*) ;
 struct tcp_fastopen_ccache_entry* FUNC_4 (struct in_conninfo*,struct tcp_fastopen_ccache_bucket**) ;

void
FUNC_5(struct tcpcb *VAR_2, uint16_t VAR_3,
    uint8_t VAR_4, uint8_t *VAR_5)
{
 struct in_conninfo *VAR_6 = &VAR_2->t_inpcb->inp_inc;
 struct tcp_fastopen_ccache_bucket *VAR_7;
 struct tcp_fastopen_ccache_entry *VAR_8;

 VAR_8 = FUNC_4(VAR_6, &VAR_7);
 if (VAR_8) {
  if ((VAR_4 >= VAR_1) &&
      (VAR_4 <= VAR_0) &&
      ((VAR_4 & 0x1) == 0)) {
   VAR_8->server_mss = VAR_3;
   VAR_8->cookie_len = VAR_4;
   FUNC_2(VAR_8->cookie, VAR_5, VAR_4);
   VAR_8->disable_time = 0;
  } else {

   VAR_8->server_mss = 0;
   VAR_8->cookie_len = 0;




   if (VAR_8->disable_time == 0)
    VAR_8->disable_time = FUNC_1();
  }
 } else
  FUNC_3(VAR_7, VAR_6, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_7);
}
