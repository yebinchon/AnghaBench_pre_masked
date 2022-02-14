
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_pkey_tbl {int max; int active; int * tbl; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(struct bnxt_qplib_res *VAR_2,
   struct bnxt_qplib_pkey_tbl *VAR_3, u16 *VAR_4,
   bool VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (!VAR_3) {
  FUNC_0(&VAR_2->pdev->dev, "PKEY table not allocated\n");
  return -VAR_0;
 }


 if (!VAR_3->active) {
  FUNC_0(&VAR_2->pdev->dev, "PKEY table has no active entries\n");
  return -VAR_1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_3->max; VAR_6++) {
  if (!FUNC_1(&VAR_3->tbl[VAR_6], VAR_4, sizeof(*VAR_4)))
   break;
 }
 if (VAR_6 == VAR_3->max) {
  FUNC_0(&VAR_2->pdev->dev,
   "PKEY 0x%04x not found in the pkey table\n", *VAR_4);
  return -VAR_1;
 }
 FUNC_2(&VAR_3->tbl[VAR_6], 0, sizeof(*VAR_4));
 VAR_3->active--;


 return VAR_7;
}
