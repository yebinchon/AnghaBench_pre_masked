
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_tags {int refcount; TYPE_2__* mn; } ;
struct nvkm_memory {struct nvkm_tags* tags; } ;
struct TYPE_3__ {int mutex; } ;
struct nvkm_fb {TYPE_1__ subdev; int tags; } ;
struct nvkm_device {struct nvkm_fb* fb; } ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_tags* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,scalar_t__,scalar_t__,int,TYPE_2__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6(struct nvkm_memory *VAR_3, struct nvkm_device *VAR_4,
       u32 VAR_5, void (*VAR_6)(struct nvkm_device *, u32, u32),
       struct nvkm_tags **VAR_7)
{
 struct nvkm_fb *VAR_8 = VAR_4->fb;
 struct nvkm_tags *VAR_9;

 FUNC_1(&VAR_8->subdev.mutex);
 if ((VAR_9 = VAR_3->tags)) {




  if (VAR_9->mn && VAR_9->mn->length != VAR_5) {
   FUNC_2(&VAR_8->subdev.mutex);
   return -VAR_0;
  }

  FUNC_4(&VAR_9->refcount);
  FUNC_2(&VAR_8->subdev.mutex);
  *VAR_7 = VAR_9;
  return 0;
 }

 if (!(VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_2))) {
  FUNC_2(&VAR_8->subdev.mutex);
  return -VAR_1;
 }

 if (!FUNC_3(&VAR_8->tags, 0, 1, VAR_5, VAR_5, 1, &VAR_9->mn)) {
  if (VAR_6)
   VAR_6(VAR_4, VAR_9->mn->offset, VAR_9->mn->length);
 } else {
  VAR_9->mn = ((void*)0);
 }

 FUNC_5(&VAR_9->refcount, 1);
 FUNC_2(&VAR_8->subdev.mutex);
 *VAR_7 = VAR_9;
 return 0;
}
