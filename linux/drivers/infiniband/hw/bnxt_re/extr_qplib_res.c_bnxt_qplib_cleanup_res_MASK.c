
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_res {int sgid_tbl; int pkey_tbl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnxt_qplib_res*,int *) ;

void FUNC_2(struct bnxt_qplib_res *VAR_0)
{
 FUNC_0(&VAR_0->pkey_tbl);
 FUNC_1(VAR_0, &VAR_0->sgid_tbl);
}
