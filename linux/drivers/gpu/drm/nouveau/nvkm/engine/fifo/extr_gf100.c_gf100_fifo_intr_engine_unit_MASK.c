
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_fifo {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int ) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct gf100_fifo *VAR_0, int VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_3(VAR_3, 0x0025a8 + (VAR_1 * 0x04));
 u32 VAR_5 = FUNC_3(VAR_3, 0x002628);
 u32 VAR_6;

 FUNC_4(VAR_3, 0x0025a8 + (VAR_1 * 0x04), VAR_4);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  u32 VAR_7 = (VAR_4 >> (VAR_6 * 0x04)) & VAR_5;
  if (VAR_7 & 0x1) {
   FUNC_1(&VAR_0->base);
   VAR_7 &= ~1;
  }
  if (VAR_7) {
   FUNC_0(VAR_2, "ENGINE %d %d %01x",
       VAR_1, VAR_6, VAR_7);
   FUNC_2(VAR_3, 0x002628, VAR_7, 0);
  }
 }
}
