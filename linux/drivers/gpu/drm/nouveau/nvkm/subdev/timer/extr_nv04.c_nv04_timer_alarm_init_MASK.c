
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_timer {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_device*,int ,int) ;

void
FUNC_1(struct nvkm_timer *VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->subdev.device;
 FUNC_0(VAR_4, VAR_0, VAR_3);
 FUNC_0(VAR_4, VAR_1, 0x00000001);
}
