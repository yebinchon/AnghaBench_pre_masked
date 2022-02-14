
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {scalar_t__ position; scalar_t__ offset; int head_reg; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {struct nvkm_subdev* owner; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nvkm_falcon*,int ) ;
 int FUNC_2 (struct nvkm_falcon*,scalar_t__,scalar_t__,int ,void*) ;
 int FUNC_3 (struct nvkm_subdev const*,char*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_msgqueue *VAR_1, struct nvkm_msgqueue_queue *VAR_2,
       void *VAR_3, u32 VAR_4)
{
 struct nvkm_falcon *VAR_5 = VAR_1->falcon;
 const struct nvkm_subdev *VAR_6 = VAR_1->falcon->owner;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_2->head_reg);

 if (VAR_7 < VAR_2->position)
  VAR_2->position = VAR_2->offset;

 VAR_8 = VAR_2->position;

 VAR_9 = VAR_7 - VAR_8;

 if (VAR_9 == 0) {
  FUNC_3(VAR_6, "no message data available\n");
  return 0;
 }

 if (VAR_4 > VAR_9) {
  FUNC_3(VAR_6, "message data smaller than read request\n");
  VAR_4 = VAR_9;
 }

 FUNC_2(VAR_1->falcon, VAR_8, VAR_4, 0, VAR_3);
 VAR_2->position += FUNC_0(VAR_4, VAR_0);

 return VAR_4;
}
