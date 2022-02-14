
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_submit {TYPE_2__* bos; int aspace; } ;
struct TYPE_6__ {TYPE_1__* resv; } ;
struct msm_gem_object {TYPE_3__ base; } ;
struct TYPE_5__ {int flags; scalar_t__ iova; struct msm_gem_object* obj; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct msm_gem_submit *VAR_3,
  int VAR_4, bool VAR_5)
{
 struct msm_gem_object *VAR_6 = VAR_3->bos[VAR_4].obj;

 if (VAR_3->bos[VAR_4].flags & VAR_1)
  FUNC_0(&VAR_6->base, VAR_3->aspace);

 if (VAR_3->bos[VAR_4].flags & VAR_0)
  FUNC_1(&VAR_6->base.resv->lock);

 if (VAR_5 && !(VAR_3->bos[VAR_4].flags & VAR_2))
  VAR_3->bos[VAR_4].iova = 0;

 VAR_3->bos[VAR_4].flags &= ~(VAR_0 | VAR_1);
}
