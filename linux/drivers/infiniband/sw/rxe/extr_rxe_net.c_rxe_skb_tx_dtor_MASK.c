
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct rxe_qp* sk_user_data; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_2__ {int task; } ;
struct rxe_qp {TYPE_1__ req; scalar_t__ need_req_skb; int skb_out; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 struct rxe_qp *VAR_3 = VAR_2->sk_user_data;
 int VAR_4 = FUNC_0(&VAR_3->skb_out);

 if (FUNC_3(VAR_3->need_req_skb &&
       VAR_4 < VAR_0))
  FUNC_2(&VAR_3->req.task, 1);

 FUNC_1(VAR_3);
}
