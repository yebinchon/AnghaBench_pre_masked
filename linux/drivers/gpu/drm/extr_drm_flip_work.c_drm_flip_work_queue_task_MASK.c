
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_flip_work {int lock; int queued; } ;
struct drm_flip_task {int node; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct drm_flip_work *VAR_0,
         struct drm_flip_task *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_1->node, &VAR_0->queued);
 FUNC_2(&VAR_0->lock, VAR_2);
}
