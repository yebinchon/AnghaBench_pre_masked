
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcp_sock {int rcv_wnd; int rcv_wup; void* snd_una; void* snd_nxt; void* write_seq; void* pushed_seq; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int inet_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,int ) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2, u32 VAR_3, unsigned int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_2);

 VAR_5->pushed_seq = VAR_3;
 VAR_5->write_seq = VAR_3;
 VAR_5->snd_nxt = VAR_3;
 VAR_5->snd_una = VAR_3;
 FUNC_1(VAR_2)->inet_id = FUNC_2();
 FUNC_0(VAR_2, VAR_4);

 if (VAR_5->rcv_wnd > (VAR_0 << 10))
  VAR_5->rcv_wup -= VAR_5->rcv_wnd - (VAR_0 << 10);

 FUNC_3();
 FUNC_4(VAR_2, VAR_1);
}
