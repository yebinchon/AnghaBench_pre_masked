
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct chtls_sock {struct request_sock* passive_reap_next; TYPE_1__* listen_ctx; int synq; } ;
struct TYPE_4__ {int icsk_accept_queue; } ;
struct TYPE_3__ {int synq; } ;


 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct request_sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 struct chtls_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,struct request_sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, struct sock *VAR_1)
{
 struct request_sock *VAR_2;
 struct chtls_sock *VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 VAR_2 = VAR_3->passive_reap_next;

 FUNC_4(&FUNC_2(VAR_1)->icsk_accept_queue, VAR_2);
 FUNC_0((struct sk_buff *)&VAR_3->synq, &VAR_3->listen_ctx->synq);
 FUNC_1(VAR_2);
 VAR_3->passive_reap_next = ((void*)0);
}
