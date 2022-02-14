
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int ctxlist_mutex; int buf_lock; int maplist; int vmalist; int ctxlist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_device *VAR_0)
{
 FUNC_0(&VAR_0->ctxlist);
 FUNC_0(&VAR_0->vmalist);
 FUNC_0(&VAR_0->maplist);
 FUNC_2(&VAR_0->buf_lock);
 FUNC_1(&VAR_0->ctxlist_mutex);
}
