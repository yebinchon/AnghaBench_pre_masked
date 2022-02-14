
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; int sk; int destructor; } ;
struct rxe_pkt_info {TYPE_3__* qp; } ;
struct TYPE_7__ {int skb_out; TYPE_1__* sk; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,struct sk_buff*) ;
 int FUNC_5 (int ,int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int ) ;

int FUNC_14(struct rxe_pkt_info *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;

 VAR_6->destructor = VAR_4;
 VAR_6->sk = VAR_5->qp->sk->sk;

 FUNC_10(VAR_5->qp);
 FUNC_1(&VAR_5->qp->skb_out);

 if (VAR_6->protocol == FUNC_3(VAR_2)) {
  VAR_7 = FUNC_5(FUNC_2(FUNC_12(VAR_6)->dev), VAR_6->sk, VAR_6);
 } else if (VAR_6->protocol == FUNC_3(VAR_3)) {
  VAR_7 = FUNC_4(FUNC_2(FUNC_12(VAR_6)->dev), VAR_6->sk, VAR_6);
 } else {
  FUNC_9("Unknown layer 3 protocol: %d\n", VAR_6->protocol);
  FUNC_0(&VAR_5->qp->skb_out);
  FUNC_11(VAR_5->qp);
  FUNC_6(VAR_6);
  return -VAR_1;
 }

 if (FUNC_13(FUNC_7(VAR_7))) {
  FUNC_8("error sending packet: %d\n", VAR_7);
  return -VAR_0;
 }

 return 0;
}
