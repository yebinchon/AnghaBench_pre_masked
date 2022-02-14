
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_tags {int mn; int refcount; } ;
struct nvkm_memory {int * tags; } ;
struct TYPE_2__ {int mutex; } ;
struct nvkm_fb {TYPE_1__ subdev; int tags; } ;
struct nvkm_device {struct nvkm_fb* fb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(struct nvkm_memory *VAR_0, struct nvkm_device *VAR_1,
       struct nvkm_tags **VAR_2)
{
 struct nvkm_fb *VAR_3 = VAR_1->fb;
 struct nvkm_tags *VAR_4 = *VAR_2;
 if (VAR_4) {
  FUNC_1(&VAR_3->subdev.mutex);
  if (FUNC_4(&VAR_4->refcount)) {
   FUNC_3(&VAR_3->tags, &VAR_4->mn);
   FUNC_0(VAR_0->tags);
   VAR_0->tags = ((void*)0);
  }
  FUNC_2(&VAR_3->subdev.mutex);
  *VAR_2 = ((void*)0);
 }
}
