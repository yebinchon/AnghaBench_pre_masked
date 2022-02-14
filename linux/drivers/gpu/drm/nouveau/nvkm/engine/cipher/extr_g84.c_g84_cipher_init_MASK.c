
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_engine *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 FUNC_0(VAR_1, 0x102130, 0xffffffff);
 FUNC_0(VAR_1, 0x102140, 0xffffffbf);
 FUNC_0(VAR_1, 0x10200c, 0x00000010);
 return 0;
}
