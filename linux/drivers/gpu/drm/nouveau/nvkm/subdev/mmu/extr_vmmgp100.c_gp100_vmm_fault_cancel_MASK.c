
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm {TYPE_2__* mmu; } ;
struct nvkm_device {int dummy; } ;
struct gp100_vmm_fault_cancel_v0 {int inst; int hub; int gpc; int client; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_vmm*,int) ;
 int FUNC_2 (int,void**,int*,struct gp100_vmm_fault_cancel_v0,int ,int ,int) ;
 int FUNC_3 (struct nvkm_device*) ;
 int FUNC_4 (struct nvkm_device*) ;
 int FUNC_5 (struct nvkm_device*) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_vmm *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_1->mmu->subdev.device;
 union {
  struct gp100_vmm_fault_cancel_v0 v0;
 } *VAR_5 = VAR_2;
 int VAR_6 = -VAR_0;
 u32 VAR_7, VAR_8;

 if ((VAR_6 = FUNC_2(VAR_6, &VAR_2, &VAR_3, VAR_5->v0, 0, 0, 0)))
  return VAR_6;




 VAR_8 = (VAR_5->v0.inst >> 8) & 3;
 VAR_5->v0.inst >>= 12;
 VAR_5->v0.inst |= VAR_8 << 28;
 VAR_5->v0.inst |= 0x80000000;

 if (!FUNC_0(FUNC_4(VAR_4))) {
  if ((VAR_7 = FUNC_3(VAR_4)) == VAR_5->v0.inst) {
   FUNC_1(VAR_1, 0x0000001b
                                 |
          (VAR_5->v0.hub << 20) |
          (VAR_5->v0.gpc << 15) |
          (VAR_5->v0.client << 9));
  }
  FUNC_0(FUNC_5(VAR_4));
 }

 return 0;
}
