
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
struct gf100_gr {TYPE_2__ base; } ;
typedef int error ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int,char*,int,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct gf100_gr *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 char VAR_5[128];
 u32 VAR_6[4];

 VAR_6[0] = FUNC_2(VAR_4, FUNC_0(VAR_2, 0x0420)) & 0x3fffffff;
 VAR_6[1] = FUNC_2(VAR_4, FUNC_0(VAR_2, 0x0434));
 VAR_6[2] = FUNC_2(VAR_4, FUNC_0(VAR_2, 0x0438));
 VAR_6[3] = FUNC_2(VAR_4, FUNC_0(VAR_2, 0x043c));

 FUNC_3(VAR_5, sizeof(VAR_5), VAR_0, VAR_6[0]);

 FUNC_1(VAR_3, "GPC%d/PROP trap: %08x [%s] x = %u, y = %u, "
      "format = %x, storage type = %x\n",
     VAR_2, VAR_6[0], VAR_5, VAR_6[1] & 0xffff, VAR_6[1] >> 16,
     (VAR_6[2] >> 8) & 0x3f, VAR_6[3] & 0xff);
 FUNC_4(VAR_4, FUNC_0(VAR_2, 0x0420), 0xc0000000);
}
