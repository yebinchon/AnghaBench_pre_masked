
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_fault_buffer {struct nvkm_object object; int put; int get; int entries; } ;
struct nvkm_fault {TYPE_2__* func; struct nvkm_fault_buffer** buffer; } ;
struct nvkm_device {struct nvkm_fault* fault; } ;
struct nvif_clb069_v0 {int put; int get; int entries; } ;
struct TYPE_3__ {size_t rp; } ;
struct TYPE_4__ {TYPE_1__ user; } ;


 int VAR_0 ;
 int FUNC_0 (int,void**,int *,struct nvif_clb069_v0,int ,int ,int) ;
 int FUNC_1 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int VAR_1 ;

int
FUNC_2(struct nvkm_device *VAR_2, const struct nvkm_oclass *VAR_3,
  void *VAR_4, u32 VAR_5, struct nvkm_object **VAR_6)
{
 union {
  struct nvif_clb069_v0 v0;
 } *VAR_7 = VAR_4;
 struct nvkm_fault *VAR_8 = VAR_2->fault;
 struct nvkm_fault_buffer *VAR_9 = VAR_8->buffer[VAR_8->func->user.rp];
 int VAR_10 = -VAR_0;

 if (!(VAR_10 = FUNC_0(VAR_10, &VAR_4, &VAR_5, VAR_7->v0, 0, 0, 0))) {
  VAR_7->v0.entries = VAR_9->entries;
  VAR_7->v0.get = VAR_9->get;
  VAR_7->v0.put = VAR_9->put;
 } else
  return VAR_10;

 FUNC_1(&VAR_1, VAR_3, &VAR_9->object);
 *VAR_6 = &VAR_9->object;
 return 0;
}
