
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fuse {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvkm_device*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_fuse *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 return FUNC_0(VAR_2, 0x021100 + VAR_1);
}
