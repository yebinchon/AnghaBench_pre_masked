
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_gr {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; int firmware; } ;


 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_gr *VAR_0)
{
 struct gf100_gr *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1->firmware) {
  u32 VAR_2 = FUNC_1(VAR_1->base.engine.subdev.device, 0x40981c);
  if (VAR_2 & 0x00000040)
   return 1;
 } else {
  u32 VAR_3 = FUNC_1(VAR_1->base.engine.subdev.device, 0x409808);
  if (VAR_3 & 0x00080000)
   return 1;
 }
 return 0;
}
