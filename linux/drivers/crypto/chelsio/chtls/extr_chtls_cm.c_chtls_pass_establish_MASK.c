
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_socket; int (* sk_state_change ) (struct sock*) ;struct chtls_sock* sk_user_data; } ;
struct sk_buff {struct sock* sk; } ;
struct listen_ctx {struct sock* lsk; } ;
struct cpl_pass_establish {int tos_stid; int tcp_opt; int snd_isn; } ;
struct chtls_sock {int wr_max_credits; int wr_credits; TYPE_1__* listen_ctx; scalar_t__ wr_unacked; } ;
struct chtls_dev {int tids; } ;
struct TYPE_4__ {int backlog_rcv; struct chtls_dev* cdev; } ;
struct TYPE_3__ {int synq; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct cpl_pass_establish*) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sock*,struct chtls_dev*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int VAR_4 ;
 struct cpl_pass_establish* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;
 void* FUNC_10 (int ,unsigned int) ;
 struct sock* FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (struct sock*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct sock*,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct chtls_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct cpl_pass_establish *VAR_7 = FUNC_7(VAR_6) + VAR_3;
 struct chtls_sock *VAR_8;
 struct sock *VAR_9, *VAR_10;
 unsigned int VAR_11;

 VAR_11 = FUNC_1(VAR_7);
 VAR_10 = FUNC_11(VAR_5->tids, VAR_11);
 if (!VAR_10)
  return (VAR_1 | VAR_0);

 FUNC_5(VAR_10);
 if (FUNC_19(FUNC_17(VAR_10))) {
  FUNC_8(VAR_6);
 } else {
  unsigned int VAR_12;
  void *VAR_13;

  VAR_8 = VAR_10->sk_user_data;
  VAR_8->wr_max_credits = 64;
  VAR_8->wr_credits = 64;
  VAR_8->wr_unacked = 0;
  FUNC_12(VAR_10, FUNC_13(VAR_7->snd_isn), FUNC_14(VAR_7->tcp_opt));
  VAR_12 = FUNC_2(FUNC_13(VAR_7->tos_stid));
  VAR_10->sk_state_change(VAR_10);
  if (FUNC_19(VAR_10->sk_socket))
   FUNC_15(VAR_10, 0, VAR_2);

  VAR_13 = FUNC_10(VAR_5->tids, VAR_12);
  VAR_9 = ((struct listen_ctx *)VAR_13)->lsk;

  FUNC_5(VAR_9);
  if (FUNC_19(FUNC_16(&VAR_8->listen_ctx->synq))) {

   FUNC_6(VAR_9);
   FUNC_8(VAR_6);
   goto unlock;
  }

  if (FUNC_9(!FUNC_17(VAR_9))) {
   FUNC_8(VAR_6);
   FUNC_4(VAR_10, VAR_9, VAR_5);
  } else {
   VAR_6->sk = VAR_10;
   FUNC_0(VAR_6)->cdev = VAR_5;
   FUNC_0(VAR_6)->backlog_rcv =
    VAR_4;
   FUNC_3(VAR_9, VAR_6);
  }
  FUNC_6(VAR_9);
 }
unlock:
 FUNC_6(VAR_10);
 return 0;
}
