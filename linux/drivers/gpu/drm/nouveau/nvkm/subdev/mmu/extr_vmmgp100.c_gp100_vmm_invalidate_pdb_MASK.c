
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_vmm {TYPE_2__* mmu; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct nvkm_vmm *VAR_0, u64 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->mmu->subdev.device;
 FUNC_1(VAR_2, 0x100cb8, FUNC_0(VAR_1));
 FUNC_1(VAR_2, 0x100cec, FUNC_2(VAR_1));
}
