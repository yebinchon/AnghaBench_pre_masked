
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_pkey_tbl {scalar_t__ active; scalar_t__ max; int * tbl; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt_qplib_res *VAR_0,
         struct bnxt_qplib_pkey_tbl *VAR_1)
{
 if (!VAR_1->tbl)
  FUNC_0(&VAR_0->pdev->dev, "PKEY tbl not present\n");
 else
  FUNC_1(VAR_1->tbl);

 VAR_1->tbl = ((void*)0);
 VAR_1->max = 0;
 VAR_1->active = 0;
}
