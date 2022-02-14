
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_flip_work {int commited; int queued; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_flip_work *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->queued) || !FUNC_1(&VAR_0->commited));
}
