
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_qplib_res {int dummy; } ;
struct bnxt_qplib_pkey_tbl {int max; int tbl; } ;


 int FUNC_0 (struct bnxt_qplib_res*,struct bnxt_qplib_pkey_tbl*,int*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnxt_qplib_res *VAR_0,
         struct bnxt_qplib_pkey_tbl *VAR_1)
{
 u16 VAR_2 = 0xFFFF;

 FUNC_1(VAR_1->tbl, 0, sizeof(u16) * VAR_1->max);


 FUNC_0(VAR_0, VAR_1, &VAR_2, 0);
}
