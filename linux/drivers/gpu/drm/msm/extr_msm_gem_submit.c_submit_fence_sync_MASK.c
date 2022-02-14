
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_gem_submit {int nr_bos; TYPE_1__* ring; TYPE_2__* bos; } ;
struct TYPE_6__ {int resv; } ;
struct msm_gem_object {TYPE_3__ base; } ;
struct TYPE_5__ {int flags; struct msm_gem_object* obj; } ;
struct TYPE_4__ {int fctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct msm_gem_submit *VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_bos; VAR_3++) {
  struct msm_gem_object *VAR_5 = VAR_1->bos[VAR_3].obj;
  bool VAR_6 = VAR_1->bos[VAR_3].flags & VAR_0;

  if (!VAR_6) {





   VAR_4 = FUNC_0(VAR_5->base.resv,
        1);
   if (VAR_4)
    return VAR_4;
  }

  if (VAR_2)
   continue;

  VAR_4 = FUNC_1(&VAR_5->base, VAR_1->ring->fctx,
   VAR_6);
  if (VAR_4)
   break;
 }

 return VAR_4;
}
