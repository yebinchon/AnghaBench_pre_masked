
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_pd_tbl {int tbl; } ;
struct bnxt_qplib_pd {scalar_t__ id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

int FUNC_2(struct bnxt_qplib_res *VAR_1,
     struct bnxt_qplib_pd_tbl *VAR_2,
     struct bnxt_qplib_pd *VAR_3)
{
 if (FUNC_1(VAR_3->id, VAR_2->tbl)) {
  FUNC_0(&VAR_1->pdev->dev, "Freeing an unused PD? pdn = %d\n",
    VAR_3->id);
  return -VAR_0;
 }
 VAR_3->id = 0;
 return 0;
}
