
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct etnaviv_gem_submit {int nr_bos; TYPE_3__* bos; } ;
struct drm_gem_object {TYPE_2__* resv; } ;
struct TYPE_6__ {int flags; TYPE_1__* obj; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct etnaviv_gem_submit*,int) ;
 int FUNC_2 (struct ww_acquire_ctx*) ;
 int FUNC_3 (int *,struct ww_acquire_ctx*) ;
 int FUNC_4 (int *,struct ww_acquire_ctx*) ;

__attribute__((used)) static int FUNC_5(struct etnaviv_gem_submit *VAR_3,
  struct ww_acquire_ctx *VAR_4)
{
 int VAR_5, VAR_6 = -1, VAR_7, VAR_8 = 0;

retry:
 for (VAR_7 = 0; VAR_7 < VAR_3->nr_bos; VAR_7++) {
  struct drm_gem_object *VAR_9 = &VAR_3->bos[VAR_7].obj->base;

  if (VAR_6 == VAR_7)
   VAR_6 = -1;

  VAR_5 = VAR_7;

  if (!(VAR_3->bos[VAR_7].flags & VAR_0)) {
   VAR_8 = FUNC_3(&VAR_9->resv->lock,
         VAR_4);
   if (VAR_8 == -VAR_1)
    FUNC_0("BO at index %u already on submit list\n",
       VAR_7);
   if (VAR_8)
    goto fail;
   VAR_3->bos[VAR_7].flags |= VAR_0;
  }
 }

 FUNC_2(VAR_4);

 return 0;

fail:
 for (; VAR_7 >= 0; VAR_7--)
  FUNC_1(VAR_3, VAR_7);

 if (VAR_6 > 0)
  FUNC_1(VAR_3, VAR_6);

 if (VAR_8 == -VAR_2) {
  struct drm_gem_object *VAR_10;

  VAR_10 = &VAR_3->bos[VAR_5].obj->base;


  VAR_8 = FUNC_4(&VAR_10->resv->lock,
             VAR_4);
  if (!VAR_8) {
   VAR_3->bos[VAR_5].flags |= VAR_0;
   VAR_6 = VAR_5;
   goto retry;
  }
 }

 return VAR_8;
}
