
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxe_qp {int dummy; } ;
struct TYPE_4__ {struct rxe_qp* mr; } ;
struct TYPE_3__ {int skb; } ;
struct resp_res {scalar_t__ type; TYPE_2__ read; TYPE_1__ atomic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rxe_qp*) ;

void FUNC_2(struct rxe_qp *VAR_2, struct resp_res *VAR_3)
{
 if (VAR_3->type == VAR_0) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_3->atomic.skb);
 } else if (VAR_3->type == VAR_1) {
  if (VAR_3->read.mr)
   FUNC_1(VAR_3->read.mr);
 }
 VAR_3->type = 0;
}
