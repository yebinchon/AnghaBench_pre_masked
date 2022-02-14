
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ urg_seq; scalar_t__ copied_seq; scalar_t__ rcv_nxt; scalar_t__ urg_data; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {scalar_t__ seq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sock*,int ) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_2);

 VAR_3--;
 if (VAR_4->urg_data && !FUNC_1(VAR_3, VAR_4->urg_seq))
  return;

 FUNC_3(VAR_2);
 if (VAR_4->urg_seq == VAR_4->copied_seq && VAR_4->urg_data &&
     !FUNC_5(VAR_2, VAR_0) &&
     VAR_4->copied_seq != VAR_4->rcv_nxt) {
  struct sk_buff *VAR_5 = FUNC_4(&VAR_2->sk_receive_queue);

  VAR_4->copied_seq++;
  if (VAR_5 && VAR_4->copied_seq - FUNC_0(VAR_5)->seq >= VAR_5->len)
   FUNC_2(VAR_2, VAR_5);
 }

 VAR_4->urg_data = VAR_1;
 VAR_4->urg_seq = VAR_3;
}
