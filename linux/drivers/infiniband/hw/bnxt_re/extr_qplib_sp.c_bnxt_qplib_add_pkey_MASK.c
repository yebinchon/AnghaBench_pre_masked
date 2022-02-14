
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_pkey_tbl {int active; int max; int * tbl; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

int FUNC_3(struct bnxt_qplib_res *VAR_3,
   struct bnxt_qplib_pkey_tbl *VAR_4, u16 *VAR_5,
   bool VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 if (!VAR_4) {
  FUNC_0(&VAR_3->pdev->dev, "PKEY table not allocated\n");
  return -VAR_1;
 }


 if (VAR_4->active == VAR_4->max) {
  FUNC_0(&VAR_3->pdev->dev, "PKEY table is full\n");
  return -VAR_2;
 }
 VAR_8 = VAR_4->max;
 for (VAR_7 = 0; VAR_7 < VAR_4->max; VAR_7++) {
  if (!FUNC_1(&VAR_4->tbl[VAR_7], VAR_5, sizeof(*VAR_5)))
   return -VAR_0;
  else if (!VAR_4->tbl[VAR_7] && VAR_8 == VAR_4->max)
   VAR_8 = VAR_7;
 }
 if (VAR_8 == VAR_4->max) {
  FUNC_0(&VAR_3->pdev->dev,
   "PKEY table is FULL but count is not MAX??\n");
  return -VAR_2;
 }

 FUNC_2(&VAR_4->tbl[VAR_8], VAR_5, sizeof(*VAR_5));
 VAR_4->active++;


 return VAR_9;
}
