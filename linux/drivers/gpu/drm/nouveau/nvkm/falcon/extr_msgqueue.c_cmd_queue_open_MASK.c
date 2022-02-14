
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {int head_reg; int position; int mutex; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,int ,int*) ;
 int FUNC_1 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_subdev const*,char*) ;
 int FUNC_5 (struct nvkm_falcon*,int ) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_msgqueue *VAR_1, struct nvkm_msgqueue_queue *VAR_2,
        u32 VAR_3)
{
 struct nvkm_falcon *VAR_4 = VAR_1->falcon;
 const struct nvkm_subdev *VAR_5 = VAR_1->falcon->owner;
 bool VAR_6 = 0;

 FUNC_2(&VAR_2->mutex);

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6)) {
  FUNC_4(VAR_5, "queue full\n");
  FUNC_3(&VAR_2->mutex);
  return -VAR_0;
 }

 VAR_2->position = FUNC_5(VAR_4, VAR_2->head_reg);

 if (VAR_6)
  FUNC_1(VAR_1, VAR_2);

 return 0;
}
