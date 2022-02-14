
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_rcfw {int * pdev; int creq; int cmdq; int crsqe_tbl; int qp_tbl; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bnxt_qplib_rcfw *VAR_0)
{
 FUNC_1(VAR_0->qp_tbl);
 FUNC_1(VAR_0->crsqe_tbl);
 FUNC_0(VAR_0->pdev, &VAR_0->cmdq);
 FUNC_0(VAR_0->pdev, &VAR_0->creq);
 VAR_0->pdev = ((void*)0);
}
