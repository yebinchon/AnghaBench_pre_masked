
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_devinit {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nv50_devinit *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.subdev.device;
 FUNC_0(VAR_2, 0x10a104, VAR_1);
 FUNC_0(VAR_2, 0x10a10c, 0x00000000);
 FUNC_0(VAR_2, 0x10a100, 0x00000002);
}
