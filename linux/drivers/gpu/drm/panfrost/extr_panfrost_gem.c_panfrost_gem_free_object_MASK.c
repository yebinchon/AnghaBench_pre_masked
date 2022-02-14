
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; } ;
struct TYPE_8__ {int madv_list; TYPE_2__ base; } ;
struct panfrost_gem_object {TYPE_3__ base; TYPE_4__* sgts; } ;
struct panfrost_device {int shrinker_lock; int dev; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_9__ {int nents; scalar_t__ sgl; } ;
struct TYPE_6__ {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 struct panfrost_gem_object* FUNC_8 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_9(struct drm_gem_object *VAR_2)
{
 struct panfrost_gem_object *VAR_3 = FUNC_8(VAR_2);
 struct panfrost_device *VAR_4 = VAR_2->dev->dev_private;

 if (VAR_3->sgts) {
  int VAR_5;
  int VAR_6 = VAR_3->base.base.size / VAR_1;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (VAR_3->sgts[VAR_5].sgl) {
    FUNC_0(VAR_4->dev, VAR_3->sgts[VAR_5].sgl,
          VAR_3->sgts[VAR_5].nents, VAR_0);
    FUNC_7(&VAR_3->sgts[VAR_5]);
   }
  }
  FUNC_2(VAR_3->sgts);
 }

 FUNC_5(&VAR_4->shrinker_lock);
 if (!FUNC_4(&VAR_3->base.madv_list))
  FUNC_3(&VAR_3->base.madv_list);
 FUNC_6(&VAR_4->shrinker_lock);

 FUNC_1(VAR_2);
}
