
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_elements; int cons; } ;
struct bnxt_qplib_rcfw {int requested; int vector; int creq_ring_id; TYPE_1__ creq; int creq_bar_reg_iomem; int worker; TYPE_2__* res; } ;
struct TYPE_4__ {int cctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ,char*,struct bnxt_qplib_rcfw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;

int FUNC_5(struct bnxt_qplib_rcfw *VAR_3, int VAR_4,
         bool VAR_5)
{
 bool VAR_6 = FUNC_0(VAR_3->res->cctx);
 int VAR_7;

 if (VAR_3->requested)
  return -VAR_0;

 VAR_3->vector = VAR_4;
 if (VAR_5)
  FUNC_4(&VAR_3->worker,
        VAR_2, (unsigned long)VAR_3);
 else
  FUNC_3(&VAR_3->worker);
 VAR_7 = FUNC_2(VAR_3->vector, VAR_1, 0,
    "bnxt_qplib_creq", VAR_3);
 if (VAR_7)
  return VAR_7;
 VAR_3->requested = 1;
 FUNC_1(VAR_3->creq_bar_reg_iomem,
          VAR_3->creq.cons, VAR_3->creq.max_elements,
          VAR_3->creq_ring_id, VAR_6);

 return 0;
}
