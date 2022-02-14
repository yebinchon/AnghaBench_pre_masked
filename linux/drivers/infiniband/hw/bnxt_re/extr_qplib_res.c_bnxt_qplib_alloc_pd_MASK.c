
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnxt_qplib_pd_tbl {scalar_t__ max; int tbl; } ;
struct bnxt_qplib_pd {scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct bnxt_qplib_pd_tbl *VAR_1, struct bnxt_qplib_pd *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->tbl, VAR_1->max);
 if (VAR_3 == VAR_1->max)
  return -VAR_0;


 FUNC_0(VAR_3, VAR_1->tbl);
 VAR_2->id = VAR_3;
 return 0;
}
