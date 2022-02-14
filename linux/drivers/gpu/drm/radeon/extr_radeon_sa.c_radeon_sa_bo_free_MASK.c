
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct radeon_sa_manager {TYPE_1__ wq; int * flist; } ;
struct radeon_sa_bo {int flist; int fence; struct radeon_sa_manager* manager; } ;
struct radeon_fence {size_t ring; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct radeon_fence*) ;
 int FUNC_2 (struct radeon_fence*) ;
 int FUNC_3 (struct radeon_sa_bo*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct radeon_device *VAR_0, struct radeon_sa_bo **VAR_1,
         struct radeon_fence *VAR_2)
{
 struct radeon_sa_manager *VAR_3;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0)) {
  return;
 }

 VAR_3 = (*VAR_1)->manager;
 FUNC_4(&VAR_3->wq.lock);
 if (VAR_2 && !FUNC_2(VAR_2)) {
  (*VAR_1)->fence = FUNC_1(VAR_2);
  FUNC_0(&(*VAR_1)->flist,
         &VAR_3->flist[VAR_2->ring]);
 } else {
  FUNC_3(*VAR_1);
 }
 FUNC_6(&VAR_3->wq);
 FUNC_5(&VAR_3->wq.lock);
 *VAR_1 = ((void*)0);
}
