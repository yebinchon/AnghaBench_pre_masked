
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv04_instobj {TYPE_4__* node; TYPE_3__* imem; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 struct nv04_instobj* FUNC_0 (struct nvkm_memory*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_memory *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct nv04_instobj *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->imem->base.subdev.device;
 FUNC_1(VAR_4, 0x700000 + VAR_3->node->offset + VAR_1, VAR_2);
}
