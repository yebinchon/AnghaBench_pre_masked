
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_volt {TYPE_1__ subdev; } ;
struct nvkm_fuse {int dummy; } ;
struct nvkm_device {struct nvkm_fuse* fuse; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_fuse*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_volt *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 struct nvkm_fuse *VAR_3 = VAR_2->fuse;

 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_3, 0x1cc);
}
