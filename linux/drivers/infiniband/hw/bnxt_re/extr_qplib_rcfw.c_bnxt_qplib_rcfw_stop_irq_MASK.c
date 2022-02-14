
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_elements; int cons; } ;
struct bnxt_qplib_rcfw {int requested; int vector; int worker; int creq_ring_id; TYPE_2__ creq; int creq_bar_reg_iomem; TYPE_1__* res; } ;
struct TYPE_3__ {int cctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,struct bnxt_qplib_rcfw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct bnxt_qplib_rcfw *VAR_0, bool VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0->res->cctx);

 FUNC_4(&VAR_0->worker);

 FUNC_1(VAR_0->creq_bar_reg_iomem, VAR_0->creq.cons,
    VAR_0->creq.max_elements, VAR_0->creq_ring_id,
    VAR_2);

 FUNC_3(VAR_0->vector);
 if (VAR_1)
  FUNC_5(&VAR_0->worker);

 if (VAR_0->requested) {
  FUNC_2(VAR_0->vector, VAR_0);
  VAR_0->requested = 0;
 }
}
