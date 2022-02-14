
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u32 ;
struct TYPE_2__ {int device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;


 scalar_t__ const FUNC_0 (int ,int) ;

u32
FUNC_1(struct nvkm_fb *VAR_0)
{
 const u32 VAR_1 = FUNC_0(VAR_0->subdev.device, 0x100320);
 return VAR_1 ? VAR_1 + 1 : 0;
}
