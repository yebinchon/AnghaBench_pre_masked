
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_msgqueue_queue {scalar_t__ offset; scalar_t__ size; int tail_reg; int head_reg; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nvkm_falcon*,int ) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_msgqueue *VAR_2, struct nvkm_msgqueue_queue *VAR_3,
     u32 VAR_4, bool *VAR_5)
{
 struct nvkm_falcon *VAR_6 = VAR_2->falcon;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_0(VAR_4, VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_3->head_reg);
 VAR_8 = FUNC_1(VAR_6, VAR_3->tail_reg);

 if (VAR_7 >= VAR_8) {
  VAR_9 = VAR_3->offset + VAR_3->size - VAR_7;
  VAR_9 -= VAR_0;

  if (VAR_4 > VAR_9) {
   *VAR_5 = 1;
   VAR_7 = VAR_3->offset;
  }
 }

 if (VAR_7 < VAR_8)
  VAR_9 = VAR_8 - VAR_7 - 1;

 return VAR_4 <= VAR_9;
}
