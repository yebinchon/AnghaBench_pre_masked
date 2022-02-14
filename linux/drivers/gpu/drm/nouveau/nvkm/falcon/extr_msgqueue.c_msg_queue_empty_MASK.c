
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_msgqueue_queue {int tail_reg; int head_reg; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvkm_falcon*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_msgqueue *VAR_0, struct nvkm_msgqueue_queue *VAR_1)
{
 struct nvkm_falcon *VAR_2 = VAR_0->falcon;
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1->head_reg);
 VAR_4 = FUNC_0(VAR_2, VAR_1->tail_reg);

 return VAR_3 == VAR_4;
}
