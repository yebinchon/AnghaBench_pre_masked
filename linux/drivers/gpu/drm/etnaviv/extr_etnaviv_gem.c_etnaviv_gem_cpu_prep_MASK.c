
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timespec {int dummy; } ;
struct etnaviv_gem_object {int flags; int last_cpu_prep_op; TYPE_1__* sgt; int lock; } ;
struct drm_gem_object {int resv; struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int nents; int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 void* FUNC_5 (struct etnaviv_gem_object*) ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (struct timespec*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct etnaviv_gem_object* FUNC_10 (struct drm_gem_object*) ;

int FUNC_11(struct drm_gem_object *VAR_5, u32 VAR_6,
  struct timespec *VAR_7)
{
 struct etnaviv_gem_object *VAR_8 = FUNC_10(VAR_5);
 struct drm_device *VAR_9 = VAR_5->dev;
 bool VAR_10 = !!(VAR_6 & VAR_4);
 int VAR_11;

 if (!VAR_8->sgt) {
  void *VAR_12;

  FUNC_8(&VAR_8->lock);
  VAR_12 = FUNC_5(VAR_8);
  FUNC_9(&VAR_8->lock);
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);
 }

 if (VAR_6 & VAR_3) {
  if (!FUNC_2(VAR_5->resv,
         VAR_10))
   return -VAR_0;
 } else {
  unsigned long VAR_13 = FUNC_7(VAR_7);

  VAR_11 = FUNC_3(VAR_5->resv,
         VAR_10, 1, VAR_13);
  if (VAR_11 <= 0)
   return VAR_11 == 0 ? -VAR_1 : VAR_11;
 }

 if (VAR_8->flags & VAR_2) {
  FUNC_4(VAR_9->dev, VAR_8->sgt->sgl,
        VAR_8->sgt->nents,
        FUNC_6(VAR_6));
  VAR_8->last_cpu_prep_op = VAR_6;
 }

 return 0;
}
