
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_qplib_sgid_tbl {int max; TYPE_2__* tbl; } ;
struct bnxt_qplib_res {TYPE_1__* pdev; } ;
struct bnxt_qplib_gid {int dummy; } ;
struct TYPE_4__ {int gid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct bnxt_qplib_gid*,int *,int) ;

int FUNC_2(struct bnxt_qplib_res *VAR_1,
   struct bnxt_qplib_sgid_tbl *VAR_2, int VAR_3,
   struct bnxt_qplib_gid *VAR_4)
{
 if (VAR_3 >= VAR_2->max) {
  FUNC_0(&VAR_1->pdev->dev,
   "Index %d exceeded SGID table max (%d)\n",
   VAR_3, VAR_2->max);
  return -VAR_0;
 }
 FUNC_1(VAR_4, &VAR_2->tbl[VAR_3].gid, sizeof(*VAR_4));
 return 0;
}
