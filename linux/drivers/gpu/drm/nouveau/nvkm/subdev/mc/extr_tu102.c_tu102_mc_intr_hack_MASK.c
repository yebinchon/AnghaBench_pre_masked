
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_mc {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 struct nvkm_subdev* FUNC_0 (struct nvkm_device*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_mc *VAR_1, bool *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 u32 VAR_4 = FUNC_1(VAR_3, 0xb81010);
 if (VAR_4 & 0x00000050) {
  struct nvkm_subdev *VAR_5 =
   FUNC_0(VAR_3, VAR_0);
  FUNC_3(VAR_3, 0xb81010, VAR_4 & 0x00000050);
  if (VAR_5)
   FUNC_2(VAR_5);
  *VAR_2 = 1;
 }
}
