
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct drm_flip_work {int worker; int lock; int queued; int commited; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct workqueue_struct*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct drm_flip_work *VAR_0,
  struct workqueue_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_0->queued, &VAR_0->commited);
 FUNC_0(&VAR_0->queued);
 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_2(VAR_1, &VAR_0->worker);
}
