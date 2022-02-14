
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; TYPE_2__* sk_prot; int sk_lingertime; int sk_receive_queue; int sk_shutdown; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req {int dummy; } ;
struct TYPE_4__ {int sk_recv_queue; } ;
struct chtls_sock {TYPE_1__ tlshws; } ;
struct TYPE_6__ {scalar_t__ linger2; } ;
struct TYPE_5__ {int (* disconnect ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ,struct sk_buff*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 struct chtls_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,long) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct sock*,int ) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*,int ) ;
 TYPE_3__* FUNC_23 (struct sock*) ;

void FUNC_24(struct sock *VAR_8, long VAR_9)
{
 int VAR_10, VAR_11;
 struct chtls_sock *VAR_12;

 VAR_12 = FUNC_13(VAR_8);

 FUNC_11(VAR_8);
 VAR_8->sk_shutdown |= VAR_3;

 VAR_10 = FUNC_17(&VAR_8->sk_receive_queue);
 VAR_10 |= FUNC_17(&VAR_12->tlshws.sk_recv_queue);
 FUNC_5(VAR_8);
 FUNC_4(VAR_8);

 if (VAR_8->sk_state == VAR_5) {
  goto wait;
 } else if (VAR_10 || VAR_8->sk_state == VAR_7) {
  FUNC_6(VAR_8, VAR_0, ((void*)0));
  FUNC_15(VAR_8);
  goto unlock;
 } else if (FUNC_18(VAR_8, VAR_4) && !VAR_8->sk_lingertime) {
  VAR_8->sk_prot->disconnect(VAR_8, 0);
 } else if (FUNC_12(VAR_8)) {
  FUNC_3(VAR_8);
 }
wait:
 if (VAR_9)
  FUNC_16(VAR_8, VAR_9);

unlock:
 VAR_11 = VAR_8->sk_state;
 FUNC_19(VAR_8);
 FUNC_20(VAR_8);

 FUNC_14(VAR_8);

 FUNC_9();
 FUNC_1(VAR_8);

 if (VAR_11 != VAR_5 && VAR_8->sk_state == VAR_5)
  goto out;

 if (VAR_8->sk_state == VAR_6 && FUNC_23(VAR_8)->linger2 < 0 &&
     !FUNC_7(VAR_8, VAR_1)) {
  struct sk_buff *VAR_13;

  VAR_13 = FUNC_0(sizeof(struct cpl_abort_req), VAR_2);
  if (VAR_13)
   FUNC_6(VAR_8, VAR_0, VAR_13);
 }

 if (VAR_8->sk_state == VAR_5)
  FUNC_8(VAR_8);

out:
 FUNC_2(VAR_8);
 FUNC_10();
 FUNC_21(VAR_8);
}
