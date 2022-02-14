
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct nvkm_udevice {struct nvkm_device* device; } ;
struct nvkm_oclass {struct nvkm_device_oclass const* priv; int ctor; int base; struct nvkm_engine* engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_engine {TYPE_2__* func; } ;
struct nvkm_device_oclass {int base; } ;
struct nvkm_device {TYPE_4__* fault; TYPE_3__* mmu; } ;
struct TYPE_8__ {struct nvkm_device_oclass user; } ;
struct TYPE_7__ {struct nvkm_device_oclass user; } ;
struct TYPE_5__ {scalar_t__ (* sclass ) (struct nvkm_oclass*,int,struct nvkm_device_oclass const**) ;} ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (unsigned long long) ;
 struct nvkm_device_oclass VAR_5 ;
 struct nvkm_engine* FUNC_1 (struct nvkm_device*,int) ;
 struct nvkm_udevice* FUNC_2 (struct nvkm_object*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct nvkm_oclass*,int,struct nvkm_device_oclass const**) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_7, int VAR_8,
         struct nvkm_oclass *VAR_9)
{
 struct nvkm_udevice *VAR_10 = FUNC_2(VAR_7);
 struct nvkm_device *VAR_11 = VAR_10->device;
 struct nvkm_engine *VAR_12;
 u64 VAR_13 = (1ULL << VAR_2) |
     (1ULL << VAR_3) |
     (1ULL << VAR_1) |
     (1ULL << VAR_4);
 const struct nvkm_device_oclass *VAR_14 = ((void*)0);
 int VAR_15;

 for (; VAR_15 = FUNC_0(VAR_13), VAR_13 && !VAR_14; VAR_13 &= ~(1ULL << VAR_15)) {
  if (!(VAR_12 = FUNC_1(VAR_11, VAR_15)) ||
      !(VAR_12->func->base.sclass))
   continue;
  VAR_9->engine = VAR_12;

  VAR_8 -= VAR_12->func->base.sclass(VAR_9, VAR_8, &VAR_14);
 }

 if (!VAR_14) {
  if (VAR_8-- == 0)
   VAR_14 = &VAR_5;
  else if (VAR_11->mmu && VAR_8-- == 0)
   VAR_14 = &VAR_11->mmu->user;
  else if (VAR_11->fault && VAR_8-- == 0)
   VAR_14 = &VAR_11->fault->user;
  else
   return -VAR_0;

  VAR_9->base = VAR_14->base;
 }

 VAR_9->ctor = VAR_6;
 VAR_9->priv = VAR_14;
 return 0;
}
