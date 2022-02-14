
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_falcon {scalar_t__ addr; TYPE_1__* owner; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;


 int FUNC_0 (struct nvkm_device*,int,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_falcon *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->owner->device;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 10, VAR_0->addr + 0x04c, 0xffff, 0x0);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
