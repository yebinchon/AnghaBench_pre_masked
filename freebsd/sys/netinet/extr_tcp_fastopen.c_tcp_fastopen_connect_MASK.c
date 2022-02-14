
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_2__ {int client; } ;
struct tcpcb {scalar_t__ t_tfo_client_cookie_len; int t_flags; int t_maxseg; int snd_wnd; TYPE_1__ t_tfo_cookie; struct inpcb* t_inpcb; } ;
struct tcp_fastopen_ccache_entry {scalar_t__ disable_time; scalar_t__ cookie_len; int server_mss; scalar_t__* cookie; } ;
struct tcp_fastopen_ccache_bucket {int dummy; } ;
struct inpcb {int inp_inc; } ;
typedef int sbintime_t ;


 int FUNC_0 (struct tcp_fastopen_ccache_bucket*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__) ;
 struct tcp_fastopen_ccache_entry* FUNC_3 (int *,struct tcp_fastopen_ccache_bucket**) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct tcpcb*,int) ;

void
FUNC_6(struct tcpcb *VAR_4)
{
 struct inpcb *VAR_5;
 struct tcp_fastopen_ccache_bucket *VAR_6;
 struct tcp_fastopen_ccache_entry *VAR_7;
 sbintime_t VAR_8;
 uint16_t VAR_9;
 uint64_t VAR_10;

 VAR_10 = 0;
 VAR_5 = VAR_4->t_inpcb;
 VAR_7 = FUNC_3(&VAR_5->inp_inc, &VAR_6);
 if (VAR_7) {
  if (VAR_7->disable_time == 0) {
   if ((VAR_7->cookie_len > 0) &&
       (VAR_4->t_tfo_client_cookie_len ==
        VAR_1)) {
    VAR_10 =
        FUNC_4(
     VAR_4->t_tfo_cookie.client,
     VAR_7->cookie, VAR_7->cookie_len);
   } else {
    VAR_4->t_tfo_client_cookie_len = VAR_7->cookie_len;
    FUNC_2(VAR_4->t_tfo_cookie.client, VAR_7->cookie,
        VAR_7->cookie_len);
   }
   VAR_9 = VAR_7->server_mss;
   FUNC_0(VAR_6);
   if (VAR_4->t_tfo_client_cookie_len ==
       VAR_1 && VAR_10) {
    VAR_4->t_tfo_client_cookie_len =
        VAR_0;
    FUNC_2(VAR_4->t_tfo_cookie.client, &VAR_10,
        VAR_0);
   }
   FUNC_5(VAR_4, VAR_9 ? VAR_9 : -1);
   VAR_4->snd_wnd = VAR_4->t_maxseg;
  } else {




   VAR_8 = FUNC_1();
   if (VAR_8 - VAR_7->disable_time >
       ((sbintime_t)VAR_3 << 32)) {






    VAR_7->disable_time = 0;
    VAR_7->server_mss = 0;
    VAR_7->cookie_len = 0;




   } else {




    VAR_4->t_flags &= ~VAR_2;
   }
   FUNC_0(VAR_6);
   FUNC_5(VAR_4, -1);





  }
 } else {




  FUNC_0(VAR_6);
  FUNC_5(VAR_4, -1);




 }
}
