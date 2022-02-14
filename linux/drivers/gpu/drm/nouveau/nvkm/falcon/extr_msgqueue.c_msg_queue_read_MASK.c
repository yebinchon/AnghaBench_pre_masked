
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {int index; } ;
struct nvkm_msgqueue_hdr {int size; } ;
struct nvkm_msgqueue {TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,int) ;
 scalar_t__ FUNC_1 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*) ;
 int FUNC_2 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*) ;
 int FUNC_3 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,struct nvkm_msgqueue_hdr*,int) ;
 int FUNC_4 (struct nvkm_subdev const*,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_msgqueue *VAR_4, struct nvkm_msgqueue_queue *VAR_5,
        struct nvkm_msgqueue_hdr *VAR_6)
{
 const struct nvkm_subdev *VAR_7 = VAR_4->falcon->owner;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_4(VAR_7, "fail to open queue %d\n", VAR_5->index);
  return VAR_8;
 }

 if (FUNC_1(VAR_4, VAR_5)) {
  VAR_8 = 0;
  goto close;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_2);
 if (VAR_8 >= 0 && VAR_8 != VAR_2)
  VAR_8 = -VAR_0;
 if (VAR_8 < 0) {
  FUNC_4(VAR_7, "failed to read message header: %d\n", VAR_8);
  goto close;
 }

 if (VAR_6->size > VAR_3) {
  FUNC_4(VAR_7, "message too big (%d bytes)\n", VAR_6->size);
  VAR_8 = -VAR_1;
  goto close;
 }

 if (VAR_6->size > VAR_2) {
  u32 VAR_9 = VAR_6->size - VAR_2;

  VAR_8 = FUNC_3(VAR_4, VAR_5, (VAR_6 + 1), VAR_9);
  if (VAR_8 >= 0 && VAR_8 != VAR_9)
   VAR_8 = -VAR_0;
  if (VAR_8 < 0) {
   FUNC_4(VAR_7, "failed to read message: %d\n", VAR_8);
   goto close;
  }
 }

close:
 FUNC_0(VAR_4, VAR_5, (VAR_8 >= 0));

 return VAR_8;
}
