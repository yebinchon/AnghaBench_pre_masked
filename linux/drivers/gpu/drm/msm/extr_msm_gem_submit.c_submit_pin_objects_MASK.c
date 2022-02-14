
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct msm_gem_submit {int valid; int nr_bos; TYPE_1__* bos; int aspace; } ;
struct msm_gem_object {int base; } ;
struct TYPE_2__ {scalar_t__ iova; int flags; struct msm_gem_object* obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct msm_gem_submit *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 VAR_2->valid = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_bos; VAR_3++) {
  struct msm_gem_object *VAR_5 = VAR_2->bos[VAR_3].obj;
  uint64_t VAR_6;


  VAR_4 = FUNC_0(&VAR_5->base,
    VAR_2->aspace, &VAR_6);

  if (VAR_4)
   break;

  VAR_2->bos[VAR_3].flags |= VAR_0;

  if (VAR_6 == VAR_2->bos[VAR_3].iova) {
   VAR_2->bos[VAR_3].flags |= VAR_1;
  } else {
   VAR_2->bos[VAR_3].iova = VAR_6;

   VAR_2->bos[VAR_3].flags &= ~VAR_1;
   VAR_2->valid = 0;
  }
 }

 return VAR_4;
}
