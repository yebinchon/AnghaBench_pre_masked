
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_ramht_data {int chid; int handle; TYPE_3__* inst; } ;
struct nvkm_ramht {int gpuobj; TYPE_1__* device; int parent; struct nvkm_ramht_data* data; } ;
struct nvkm_object {int dummy; } ;
struct TYPE_7__ {int addr; TYPE_2__* node; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_object*,int ,int,TYPE_3__**) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_ramht *VAR_2, int VAR_3, struct nvkm_object *VAR_4,
    int VAR_5, int VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct nvkm_ramht_data *VAR_9 = &VAR_2->data[VAR_3];
 u64 VAR_10 = 0x00000040;
 int VAR_11;

 FUNC_1(&VAR_9->inst);
 VAR_9->chid = VAR_5;
 VAR_9->handle = VAR_7;

 if (VAR_4) {
  VAR_11 = FUNC_3(VAR_4, VAR_2->parent, 16, &VAR_9->inst);
  if (VAR_11) {
   if (VAR_11 != -VAR_0) {
    VAR_9->chid = -1;
    return VAR_11;
   }
   VAR_9->inst = ((void*)0);
  }

  if (VAR_9->inst) {
   if (VAR_2->device->card_type >= VAR_1)
    VAR_10 = VAR_9->inst->node->offset;
   else
    VAR_10 = VAR_9->inst->addr;
  }

  if (VAR_6 < 0) VAR_8 |= VAR_10 << -VAR_6;
  else VAR_8 |= VAR_10 >> VAR_6;
 }

 FUNC_2(VAR_2->gpuobj);
 FUNC_4(VAR_2->gpuobj, (VAR_3 << 3) + 0, VAR_7);
 FUNC_4(VAR_2->gpuobj, (VAR_3 << 3) + 4, VAR_8);
 FUNC_0(VAR_2->gpuobj);
 return VAR_3 + 1;
}
