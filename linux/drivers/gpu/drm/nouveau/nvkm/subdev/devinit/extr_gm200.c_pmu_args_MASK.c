
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_devinit {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,scalar_t__) ;

__attribute__((used)) static u32
FUNC_2(struct nv50_devinit *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->base.subdev.device;
 FUNC_1(VAR_3, 0x10a1c0, VAR_1);
 FUNC_1(VAR_3, 0x10a1c0, FUNC_0(VAR_3, 0x10a1c4) + VAR_2);
 return FUNC_0(VAR_3, 0x10a1c4);
}
