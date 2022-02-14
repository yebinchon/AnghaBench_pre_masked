
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_falcon {scalar_t__ addr; TYPE_1__* owner; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;


 int FUNC_0 (struct nvkm_falcon*,int,int ,int ) ;
 int FUNC_1 (struct nvkm_device*,int,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_falcon *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->owner->device;
 int VAR_3;


 FUNC_0(VAR_0, 0x004, VAR_1, VAR_1);

 VAR_3 = FUNC_1(VAR_2, 10, VAR_0->addr + 0x008, VAR_1, 0x0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
