
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_dev_info {int n_pds_lock; int n_pds_allocated; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 struct rvt_dev_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct rvt_dev_info *VAR_2 = FUNC_0(VAR_0->device);

 FUNC_1(&VAR_2->n_pds_lock);
 VAR_2->n_pds_allocated--;
 FUNC_2(&VAR_2->n_pds_lock);
}
