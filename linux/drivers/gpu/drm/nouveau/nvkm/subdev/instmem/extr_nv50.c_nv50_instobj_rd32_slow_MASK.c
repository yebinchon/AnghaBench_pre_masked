
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv50_instobj {int ram; struct nv50_instmem* imem; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {int lock; TYPE_1__ subdev; } ;
struct nv50_instmem {int addr; TYPE_2__ base; } ;


 struct nv50_instobj* FUNC_0 (struct nvkm_memory*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static u32
FUNC_7(struct nvkm_memory *VAR_0, u64 VAR_1)
{
 struct nv50_instobj *VAR_2 = FUNC_0(VAR_0);
 struct nv50_instmem *VAR_3 = VAR_2->imem;
 struct nvkm_device *VAR_4 = VAR_3->base.subdev.device;
 u64 VAR_5 = (FUNC_1(VAR_2->ram) + VAR_1) & 0xffffff00000ULL;
 u64 VAR_6 = (FUNC_1(VAR_2->ram) + VAR_1) & 0x000000fffffULL;
 u32 VAR_7;
 unsigned long VAR_8;

 FUNC_4(&VAR_3->base.lock, VAR_8);
 if (FUNC_6(VAR_3->addr != VAR_5)) {
  FUNC_3(VAR_4, 0x001700, VAR_5 >> 16);
  VAR_3->addr = VAR_5;
 }
 VAR_7 = FUNC_2(VAR_4, 0x700000 + VAR_6);
 FUNC_5(&VAR_3->base.lock, VAR_8);
 return VAR_7;
}
