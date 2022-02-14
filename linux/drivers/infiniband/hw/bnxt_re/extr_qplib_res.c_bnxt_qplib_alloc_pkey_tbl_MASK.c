
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_qplib_res {int dummy; } ;
struct bnxt_qplib_pkey_tbl {int max; int tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt_qplib_res *VAR_2,
         struct bnxt_qplib_pkey_tbl *VAR_3,
         u16 VAR_4)
{
 VAR_3->tbl = FUNC_0(VAR_4, sizeof(u16), VAR_1);
 if (!VAR_3->tbl)
  return -VAR_0;

 VAR_3->max = VAR_4;
 return 0;
}
