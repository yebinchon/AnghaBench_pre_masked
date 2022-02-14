
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_therm *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 FUNC_1(VAR_1, 0x20010, 0x40000000, 0x0);
 FUNC_0(20);
}
