
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_flip_work {char const* name; int worker; int func; int lock; int commited; int queued; } ;
typedef int drm_flip_func_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_flip_work *VAR_1,
  const char *VAR_2, drm_flip_func_t VAR_3)
{
 VAR_1->name = VAR_2;
 FUNC_0(&VAR_1->queued);
 FUNC_0(&VAR_1->commited);
 FUNC_2(&VAR_1->lock);
 VAR_1->func = VAR_3;

 FUNC_1(&VAR_1->worker, VAR_0);
}
