
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int task; } ;
struct rxe_qp {TYPE_1__ comp; int resp_pkts; } ;
struct TYPE_4__ {int rxe; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

void FUNC_5(struct rxe_qp *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_1->resp_pkts, VAR_2);

 VAR_3 = FUNC_3(&VAR_1->resp_pkts) > 1;
 if (VAR_3 != 0)
  FUNC_1(FUNC_0(VAR_2)->rxe, VAR_0);

 FUNC_2(&VAR_1->comp.task, VAR_3);
}
