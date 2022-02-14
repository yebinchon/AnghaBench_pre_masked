
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {int page; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int,int,int) ;

int
FUNC_1(struct nvkm_fb *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 switch (VAR_1->page) {
 case 16: FUNC_0(VAR_2, 0x100c80, 0x00001801, 0x00001001); break;
 case 17: FUNC_0(VAR_2, 0x100c80, 0x00001801, 0x00000000); break;
 case 0: FUNC_0(VAR_2, 0x100c80, 0x00001800, 0x00001800); break;
 default:
  return -VAR_0;
 }
 return 0;
}
