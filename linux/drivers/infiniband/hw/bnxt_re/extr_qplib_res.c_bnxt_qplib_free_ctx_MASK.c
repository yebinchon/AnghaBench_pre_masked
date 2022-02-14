
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bnxt_qplib_ctx {int stats; int tqm_pde; int * tqm_tbl; int tim_tbl; int cq_tbl; int srqc_tbl; int mrw_tbl; int qpc_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int *) ;
 int FUNC_1 (struct pci_dev*,int *) ;

void FUNC_2(struct pci_dev *VAR_1,
    struct bnxt_qplib_ctx *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, &VAR_2->qpc_tbl);
 FUNC_0(VAR_1, &VAR_2->mrw_tbl);
 FUNC_0(VAR_1, &VAR_2->srqc_tbl);
 FUNC_0(VAR_1, &VAR_2->cq_tbl);
 FUNC_0(VAR_1, &VAR_2->tim_tbl);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_2->tqm_tbl[VAR_3]);
 FUNC_0(VAR_1, &VAR_2->tqm_pde);
 FUNC_1(VAR_1, &VAR_2->stats);
}
