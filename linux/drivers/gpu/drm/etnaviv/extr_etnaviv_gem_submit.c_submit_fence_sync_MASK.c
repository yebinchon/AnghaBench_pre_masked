
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_gem_submit_bo {int flags; int excl; int shared; int nr_shared; TYPE_2__* obj; } ;
struct etnaviv_gem_submit {int nr_bos; int flags; struct etnaviv_gem_submit_bo* bos; } ;
struct dma_resv {int dummy; } ;
struct TYPE_3__ {struct dma_resv* resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_resv*) ;
 int FUNC_1 (struct dma_resv*,int *,int *,int *) ;
 int FUNC_2 (struct dma_resv*,int) ;

__attribute__((used)) static int FUNC_3(struct etnaviv_gem_submit *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_bos; VAR_3++) {
  struct etnaviv_gem_submit_bo *VAR_5 = &VAR_2->bos[VAR_3];
  struct dma_resv *VAR_6 = VAR_5->obj->base.resv;

  if (!(VAR_5->flags & VAR_0)) {
   VAR_4 = FUNC_2(VAR_6, 1);
   if (VAR_4)
    return VAR_4;
  }

  if (VAR_2->flags & VAR_1)
   continue;

  if (VAR_5->flags & VAR_0) {
   VAR_4 = FUNC_1(VAR_6, &VAR_5->excl,
        &VAR_5->nr_shared,
        &VAR_5->shared);
   if (VAR_4)
    return VAR_4;
  } else {
   VAR_5->excl = FUNC_0(VAR_6);
  }

 }

 return VAR_4;
}
