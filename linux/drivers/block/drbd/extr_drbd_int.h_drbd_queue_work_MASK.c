
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_work_queue {int q_wait; int q_lock; int q; } ;
struct drbd_work {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct drbd_work_queue *VAR_0, struct drbd_work *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_0->q_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->q);
 FUNC_2(&VAR_0->q_lock, VAR_2);
 FUNC_3(&VAR_0->q_wait);
}
