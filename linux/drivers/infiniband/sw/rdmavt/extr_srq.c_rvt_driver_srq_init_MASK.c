
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_dev_info {scalar_t__ n_srqs_allocated; int n_srqs_lock; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rvt_dev_info *VAR_0)
{
 FUNC_0(&VAR_0->n_srqs_lock);
 VAR_0->n_srqs_allocated = 0;
}
