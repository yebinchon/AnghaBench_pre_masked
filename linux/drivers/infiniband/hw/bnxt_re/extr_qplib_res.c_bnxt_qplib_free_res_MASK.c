
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_res {int * pdev; int * netdev; int dpi_tbl; int pd_tbl; int sgid_tbl; int pkey_tbl; } ;


 int FUNC_0 (struct bnxt_qplib_res*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bnxt_qplib_res*,int *) ;
 int FUNC_3 (struct bnxt_qplib_res*,int *) ;

void FUNC_4(struct bnxt_qplib_res *VAR_0)
{
 FUNC_2(VAR_0, &VAR_0->pkey_tbl);
 FUNC_3(VAR_0, &VAR_0->sgid_tbl);
 FUNC_1(&VAR_0->pd_tbl);
 FUNC_0(VAR_0, &VAR_0->dpi_tbl);

 VAR_0->netdev = ((void*)0);
 VAR_0->pdev = ((void*)0);
}
