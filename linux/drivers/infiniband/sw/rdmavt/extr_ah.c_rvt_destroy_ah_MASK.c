
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_dev_info {int n_ahs_lock; int n_ahs_allocated; } ;
struct rvt_ah {int attr; } ;
struct ib_ah {int device; } ;


 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_ah* FUNC_1 (struct ib_ah*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ib_ah *VAR_0, u32 VAR_1)
{
 struct rvt_dev_info *VAR_2 = FUNC_0(VAR_0->device);
 struct rvt_ah *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_3(&VAR_2->n_ahs_lock, VAR_4);
 VAR_2->n_ahs_allocated--;
 FUNC_4(&VAR_2->n_ahs_lock, VAR_4);

 FUNC_2(&VAR_3->attr);
}
