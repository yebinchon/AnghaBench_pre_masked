
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int ts_recent; } ;
struct listen_ctx {struct sock* lsk; } ;
struct chtls_sock {struct request_sock* passive_reap_next; struct chtls_dev* cdev; } ;
struct chtls_dev {int tids; } ;
struct TYPE_2__ {int backlog_rcv; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sock*,struct sock*,struct sk_buff*) ;
 struct chtls_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_2,
     struct sk_buff *VAR_3)
{
 const struct request_sock *VAR_4;
 struct chtls_sock *VAR_5;
 struct chtls_dev *VAR_6;
 struct sock *VAR_7;
 void *VAR_8;

 VAR_5 = FUNC_8(VAR_2);
 VAR_6 = VAR_5->cdev;






 if (FUNC_4(VAR_2, VAR_0)) {
  FUNC_5(VAR_3);
  return;
 }

 VAR_4 = VAR_5->passive_reap_next;
 VAR_8 = FUNC_6(VAR_6->tids, VAR_4->ts_recent);
 VAR_7 = ((struct listen_ctx *)VAR_8)->lsk;

 FUNC_2(VAR_7);
 if (!FUNC_9(VAR_7)) {
  FUNC_7(VAR_2, VAR_7, VAR_3);
 } else {
  FUNC_0(VAR_3)->backlog_rcv = VAR_1;
  FUNC_1(VAR_7, VAR_3);
 }
 FUNC_3(VAR_7);
}
