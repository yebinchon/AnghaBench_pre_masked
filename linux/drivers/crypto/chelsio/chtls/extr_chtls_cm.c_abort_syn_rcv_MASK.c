
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct chtls_sock* sk_user_data; } ;
struct sk_buff {struct sock* sk; } ;
struct request_sock {int ts_recent; } ;
struct listen_ctx {struct sock* lsk; } ;
struct chtls_sock {int txq_idx; struct chtls_dev* cdev; struct request_sock* passive_reap_next; } ;
struct chtls_dev {int tids; } ;
struct TYPE_2__ {int backlog_rcv; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int VAR_1 ;
 int FUNC_4 (struct sock*,struct sock*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sock*,struct sk_buff*,struct chtls_dev*,int ,int) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 const struct request_sock *VAR_4;
 struct listen_ctx *VAR_5;
 struct chtls_sock *VAR_6;
 struct chtls_dev *VAR_7;
 struct sock *VAR_8;
 void *VAR_9;

 VAR_6 = VAR_2->sk_user_data;
 VAR_4 = VAR_6->passive_reap_next;
 VAR_7 = VAR_6->cdev;

 if (!VAR_4)
  return -1;

 VAR_9 = FUNC_5(VAR_7->tids, VAR_4->ts_recent);
 if (!VAR_9)
  return -1;

 VAR_5 = (struct listen_ctx *)VAR_9;
 VAR_8 = VAR_5->lsk;

 FUNC_2(VAR_8);
 if (!FUNC_7(VAR_8)) {
  int VAR_10 = VAR_6->txq_idx;

  FUNC_4(VAR_2, VAR_8);
  FUNC_6(VAR_2, VAR_3, VAR_7, VAR_0, VAR_10);
 } else {
  VAR_3->sk = VAR_2;
  FUNC_0(VAR_3)->backlog_rcv = VAR_1;
  FUNC_1(VAR_8, VAR_3);
 }
 FUNC_3(VAR_8);
 return 0;
}
