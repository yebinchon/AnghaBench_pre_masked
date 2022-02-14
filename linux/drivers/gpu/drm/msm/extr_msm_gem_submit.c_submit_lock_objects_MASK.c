
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_submit {int nr_bos; TYPE_3__* bos; int ticket; } ;
struct TYPE_5__ {TYPE_1__* resv; } ;
struct msm_gem_object {TYPE_2__ base; } ;
struct TYPE_6__ {int flags; struct msm_gem_object* obj; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msm_gem_submit*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct msm_gem_submit *VAR_2)
{
 int VAR_3, VAR_4 = -1, VAR_5, VAR_6 = 0;

retry:
 for (VAR_5 = 0; VAR_5 < VAR_2->nr_bos; VAR_5++) {
  struct msm_gem_object *VAR_7 = VAR_2->bos[VAR_5].obj;

  if (VAR_4 == VAR_5)
   VAR_4 = -1;

  VAR_3 = VAR_5;

  if (!(VAR_2->bos[VAR_5].flags & VAR_0)) {
   VAR_6 = FUNC_2(&VAR_7->base.resv->lock,
     &VAR_2->ticket);
   if (VAR_6)
    goto fail;
   VAR_2->bos[VAR_5].flags |= VAR_0;
  }
 }

 FUNC_1(&VAR_2->ticket);

 return 0;

fail:
 for (; VAR_5 >= 0; VAR_5--)
  FUNC_0(VAR_2, VAR_5, 1);

 if (VAR_4 > 0)
  FUNC_0(VAR_2, VAR_4, 1);

 if (VAR_6 == -VAR_1) {
  struct msm_gem_object *VAR_8 = VAR_2->bos[VAR_3].obj;

  VAR_6 = FUNC_3(&VAR_8->base.resv->lock,
    &VAR_2->ticket);
  if (!VAR_6) {
   VAR_2->bos[VAR_3].flags |= VAR_0;
   VAR_4 = VAR_3;
   goto retry;
  }
 }

 return VAR_6;
}
