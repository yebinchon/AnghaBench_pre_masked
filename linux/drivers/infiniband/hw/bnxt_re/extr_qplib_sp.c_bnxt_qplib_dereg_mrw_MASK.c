
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct creq_deregister_mr_resp {int dummy; } ;
struct cmdq_deregister_mr {int lkey; } ;
struct bnxt_qplib_res {int pdev; struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_elements; } ;
struct bnxt_qplib_mrw {TYPE_1__ hwq; scalar_t__ total_size; scalar_t__ va; int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdq_deregister_mr,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*,void*,void*,int *,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct bnxt_qplib_res *VAR_1, struct bnxt_qplib_mrw *VAR_2,
    bool VAR_3)
{
 struct bnxt_qplib_rcfw *VAR_4 = VAR_1->rcfw;
 struct cmdq_deregister_mr VAR_5;
 struct creq_deregister_mr_resp VAR_6;
 u16 VAR_7 = 0;
 int VAR_8;

 FUNC_0(VAR_5, VAR_0, VAR_7);

 VAR_5.lkey = FUNC_3(VAR_2->lkey);
 VAR_8 = FUNC_2(VAR_4, (void *)&VAR_5,
       (void *)&VAR_6, ((void*)0), VAR_3);
 if (VAR_8)
  return VAR_8;


 if (VAR_2->hwq.max_elements) {
  VAR_2->va = 0;
  VAR_2->total_size = 0;
  FUNC_1(VAR_1->pdev, &VAR_2->hwq);
 }

 return 0;
}
