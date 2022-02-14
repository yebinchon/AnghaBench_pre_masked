
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_pkey_tbl {int max; int * tbl; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int*,int *,int) ;

int FUNC_2(struct bnxt_qplib_res *VAR_1,
   struct bnxt_qplib_pkey_tbl *VAR_2, u16 VAR_3,
   u16 *VAR_4)
{
 if (VAR_3 == 0xFFFF) {
  *VAR_4 = 0xFFFF;
  return 0;
 }
 if (VAR_3 >= VAR_2->max) {
  FUNC_0(&VAR_1->pdev->dev,
   "Index %d exceeded PKEY table max (%d)\n",
   VAR_3, VAR_2->max);
  return -VAR_0;
 }
 FUNC_1(VAR_4, &VAR_2->tbl[VAR_3], sizeof(*VAR_4));
 return 0;
}
