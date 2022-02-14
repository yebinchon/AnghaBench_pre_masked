
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_ior {TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_device*,int const,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_ior *VAR_0, int VAR_1,
    u8 VAR_2, u8 VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_7 = VAR_1 * 0x800;

 FUNC_0(VAR_6, 0x61657c + VAR_7, 0xffffffff, (VAR_5 << 16) | VAR_4);
 FUNC_0(VAR_6, 0x616578 + VAR_7, 0x00003f3f, (VAR_3 << 8) | VAR_2);
}
