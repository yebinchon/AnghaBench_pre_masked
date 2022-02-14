
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int snd_wscale; } ;
struct tcp_sock {int max_window; TYPE_1__ rx_opt; } ;
struct sock {scalar_t__ sk_state; int sk_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ,int *) ;
 int FUNC_4 (struct sock*,int) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

int FUNC_7(struct sock *VAR_4, int VAR_5)
{
 struct tcp_sock *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_4);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_4->sk_state != VAR_3) {
  VAR_4->sk_err = VAR_1;
  FUNC_3(VAR_4, VAR_0, ((void*)0));
  VAR_7 = FUNC_6(VAR_4, VAR_2);
  if (VAR_7)
   return VAR_7;
 }
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 VAR_6->max_window = 0xFFFF << (VAR_6->rx_opt.snd_wscale);
 return FUNC_4(VAR_4, VAR_5);
}
