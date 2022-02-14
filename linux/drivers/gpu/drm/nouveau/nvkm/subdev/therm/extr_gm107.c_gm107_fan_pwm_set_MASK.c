
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_therm *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 FUNC_0(VAR_4, 0x10eb10, 0x1fff, VAR_2);
 FUNC_1(VAR_4, 0x10eb14, VAR_3 | 0x80000000);
 return 0;
}
