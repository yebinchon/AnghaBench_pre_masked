
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_sgid_tbl {scalar_t__ active; scalar_t__ max; int * vlan; int * ctx; int * hw_id; int * tbl; } ;
struct bnxt_qplib_res {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnxt_qplib_res *VAR_0,
         struct bnxt_qplib_sgid_tbl *VAR_1)
{
 FUNC_0(VAR_1->tbl);
 FUNC_0(VAR_1->hw_id);
 FUNC_0(VAR_1->ctx);
 FUNC_0(VAR_1->vlan);
 VAR_1->tbl = ((void*)0);
 VAR_1->hw_id = ((void*)0);
 VAR_1->ctx = ((void*)0);
 VAR_1->vlan = ((void*)0);
 VAR_1->max = 0;
 VAR_1->active = 0;
}
