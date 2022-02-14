
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*) ;struct chtls_sock* sk_user_data; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int rsk_refcnt; } ;
struct chtls_sock {TYPE_1__* listen_ctx; int synq; struct request_sock* passive_reap_next; } ;
struct chtls_dev {int dummy; } ;
struct TYPE_4__ {int icsk_accept_queue; } ;
struct TYPE_3__ {int synq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct request_sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct request_sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_1, struct sock *VAR_2,
        struct chtls_dev *VAR_3)
{
 struct request_sock *VAR_4;
 struct chtls_sock *VAR_5;

 if (VAR_2->sk_state != VAR_0)
  return;

 VAR_5 = VAR_1->sk_user_data;
 VAR_4 = VAR_5->passive_reap_next;
 VAR_5->passive_reap_next = ((void*)0);

 FUNC_6(&FUNC_3(VAR_2)->icsk_accept_queue, VAR_4);
 FUNC_0((struct sk_buff *)&VAR_5->synq, &VAR_5->listen_ctx->synq);

 if (FUNC_7(VAR_2)) {
  FUNC_2(VAR_4);
  FUNC_1(VAR_1);
 } else {
  FUNC_5(&VAR_4->rsk_refcnt, 1);
  FUNC_4(VAR_2, VAR_4, VAR_1);
  VAR_2->sk_data_ready(VAR_2);
 }
}
