
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_res {int pkey_tbl; int netdev; int sgid_tbl; } ;


 int FUNC_0 (struct bnxt_qplib_res*,int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct bnxt_qplib_res *VAR_0)
{
 FUNC_1(&VAR_0->sgid_tbl, VAR_0->netdev);
 FUNC_0(VAR_0, &VAR_0->pkey_tbl);

 return 0;
}
