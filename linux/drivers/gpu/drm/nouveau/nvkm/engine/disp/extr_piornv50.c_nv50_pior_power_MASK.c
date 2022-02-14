
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ior {TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,int const) ;
 int FUNC_2 (struct nvkm_device*,int const,int const,int const) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_ior *VAR_0, bool VAR_1, bool VAR_2,
        bool VAR_3, bool VAR_4, bool VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_7 = FUNC_0(VAR_0);
 const u32 VAR_8 = VAR_1 ? 0 : 16;
 const u32 VAR_9 = 0x80000000 | (0x00000001 * !!VAR_2) << VAR_8;
 const u32 VAR_10 = 0x80000000 | (0x00000101 << VAR_8);

 FUNC_1(VAR_6, VAR_7);
 FUNC_2(VAR_6, 0x61e004 + VAR_7, VAR_10, VAR_9);
 FUNC_1(VAR_6, VAR_7);
}
