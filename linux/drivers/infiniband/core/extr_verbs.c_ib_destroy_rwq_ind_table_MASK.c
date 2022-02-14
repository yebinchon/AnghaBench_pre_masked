
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ib_wq {int usecnt; } ;
struct ib_rwq_ind_table {int log_ind_tbl_size; TYPE_2__* device; int usecnt; struct ib_wq** ind_tbl; } ;
struct TYPE_3__ {int (* destroy_rwq_ind_table ) (struct ib_rwq_ind_table*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ib_rwq_ind_table*) ;

int FUNC_3(struct ib_rwq_ind_table *VAR_1)
{
 int VAR_2, VAR_3;
 u32 VAR_4 = (1 << VAR_1->log_ind_tbl_size);
 struct ib_wq **VAR_5 = VAR_1->ind_tbl;

 if (FUNC_1(&VAR_1->usecnt))
  return -VAR_0;

 VAR_2 = VAR_1->device->ops.destroy_rwq_ind_table(VAR_1);
 if (!VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_0(&VAR_5[VAR_3]->usecnt);
 }

 return VAR_2;
}
