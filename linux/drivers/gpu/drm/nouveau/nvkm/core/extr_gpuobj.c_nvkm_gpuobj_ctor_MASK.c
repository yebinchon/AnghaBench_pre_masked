
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_gpuobj {scalar_t__ size; int heap; int memory; scalar_t__ addr; int * func; TYPE_1__* node; struct nvkm_gpuobj* parent; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nvkm_gpuobj*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nvkm_device*,int ,scalar_t__,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int,scalar_t__,scalar_t__,int ,TYPE_1__**) ;
 int FUNC_8 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_9 (int *,int ,int,scalar_t__,scalar_t__,int,TYPE_1__**) ;
 int FUNC_10 (struct nvkm_gpuobj*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_11(struct nvkm_device *VAR_3, u32 VAR_4, int VAR_5, bool VAR_6,
   struct nvkm_gpuobj *VAR_7, struct nvkm_gpuobj *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if (VAR_7) {
  if (VAR_5 >= 0) {
   VAR_10 = FUNC_7(&VAR_7->heap, 0, 1, VAR_4, VAR_4,
        FUNC_1(VAR_5, 1), &VAR_8->node);
  } else {
   VAR_10 = FUNC_9(&VAR_7->heap, 0, 1, VAR_4, VAR_4,
        -VAR_5, &VAR_8->node);
  }
  if (VAR_10)
   return VAR_10;

  VAR_8->parent = VAR_7;
  VAR_8->func = &VAR_1;
  VAR_8->addr = VAR_7->addr + VAR_8->node->offset;
  VAR_8->size = VAR_8->node->length;

  if (VAR_6) {
   FUNC_3(VAR_8);
   for (VAR_9 = 0; VAR_9 < VAR_8->size; VAR_9 += 4)
    FUNC_10(VAR_8, VAR_9, 0x00000000);
   FUNC_2(VAR_8);
  }
 } else {
  VAR_10 = FUNC_5(VAR_3, VAR_0, VAR_4,
          FUNC_0(VAR_5), VAR_6, &VAR_8->memory);
  if (VAR_10)
   return VAR_10;

  VAR_8->func = &VAR_2;
  VAR_8->addr = FUNC_4(VAR_8->memory);
  VAR_8->size = FUNC_6(VAR_8->memory);
 }

 return FUNC_8(&VAR_8->heap, 0, 0, VAR_8->size, 1);
}
