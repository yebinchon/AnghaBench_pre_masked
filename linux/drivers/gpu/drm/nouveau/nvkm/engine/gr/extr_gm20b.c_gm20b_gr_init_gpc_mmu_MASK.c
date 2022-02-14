
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int secboot; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,char*) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2;


 if (!VAR_1->secboot) {
  FUNC_2(VAR_1, 0x100ce4, 0xffffffff);

  if (FUNC_1(VAR_1, 0x100ce4) != 0xffffffff)
   FUNC_0(VAR_1,
     "cannot bypass secure boot - expect failure soon!\n");
 }

 VAR_2 = FUNC_1(VAR_1, 0x100c80);
 VAR_2 &= 0xf000187f;
 FUNC_2(VAR_1, 0x418880, VAR_2);
 FUNC_2(VAR_1, 0x418890, 0);
 FUNC_2(VAR_1, 0x418894, 0);

 FUNC_2(VAR_1, 0x4188b0, FUNC_1(VAR_1, 0x100cc4));
 FUNC_2(VAR_1, 0x4188b4, FUNC_1(VAR_1, 0x100cc8));
 FUNC_2(VAR_1, 0x4188b8, FUNC_1(VAR_1, 0x100ccc));

 FUNC_2(VAR_1, 0x4188ac, FUNC_1(VAR_1, 0x100800));
}
