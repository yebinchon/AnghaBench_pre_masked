
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_rwq_ind_table_init_attr {int log_ind_tbl_size; TYPE_1__** ind_tbl; } ;
struct ib_rwq_ind_table {int log_ind_tbl_size; TYPE_1__** ind_tbl; int usecnt; int * uobject; struct ib_device* device; } ;
struct ib_device {struct ib_rwq_ind_table* (* create_rwq_ind_table ) (struct ib_device*,struct ib_rwq_ind_table_init_attr*,int *) ;} ;
struct TYPE_2__ {int usecnt; } ;


 int VAR_0 ;
 struct ib_rwq_ind_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ib_rwq_ind_table*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_rwq_ind_table* FUNC_4 (struct ib_device*,struct ib_rwq_ind_table_init_attr*,int *) ;

struct ib_rwq_ind_table *FUNC_5(struct ib_device *VAR_1,
       struct ib_rwq_ind_table_init_attr *VAR_2)
{
 struct ib_rwq_ind_table *VAR_3;
 int VAR_4;
 u32 VAR_5;

 if (!VAR_1->create_rwq_ind_table)
  return FUNC_0(-VAR_0);

 VAR_5 = (1 << VAR_2->log_ind_tbl_size);
 VAR_3 = VAR_1->create_rwq_ind_table(VAR_1,
    VAR_2, ((void*)0));
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_3->ind_tbl = VAR_2->ind_tbl;
 VAR_3->log_ind_tbl_size = VAR_2->log_ind_tbl_size;
 VAR_3->device = VAR_1;
 VAR_3->uobject = ((void*)0);
 FUNC_3(&VAR_3->usecnt, 0);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_2(&VAR_3->ind_tbl[VAR_4]->usecnt);

 return VAR_3;
}
