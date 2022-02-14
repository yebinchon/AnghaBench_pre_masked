
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ pd; int device; } ;
struct rvt_qp {TYPE_2__ ibqp; } ;
struct rvt_mregion {int lkey; scalar_t__ pd; int lkey_invalid; } ;
struct rvt_lkey_table {int * table; } ;
struct TYPE_3__ {int lkey_table_size; } ;
struct rvt_dev_info {TYPE_1__ dparms; struct rvt_lkey_table lkey_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 struct rvt_mregion* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct rvt_qp *VAR_1, u32 VAR_2)
{
 struct rvt_dev_info *VAR_3 = FUNC_1(VAR_1->ibqp.device);
 struct rvt_lkey_table *VAR_4 = &VAR_3->lkey_table;
 struct rvt_mregion *VAR_5;

 if (VAR_2 == 0)
  return -VAR_0;

 FUNC_3();
 VAR_5 = FUNC_2(
  VAR_4->table[(VAR_2 >> (32 - VAR_3->dparms.lkey_table_size))]);
 if (FUNC_5(!VAR_5 || VAR_5->lkey != VAR_2 || VAR_1->ibqp.pd != VAR_5->pd))
  goto bail;

 FUNC_0(&VAR_5->lkey_invalid, 1);
 FUNC_4();
 return 0;

bail:
 FUNC_4();
 return -VAR_0;
}
