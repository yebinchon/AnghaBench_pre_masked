
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int const,int const) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct gf100_gr *VAR_0, bool VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;
 const u32 VAR_3 = 0x00000010, VAR_4 = VAR_1 ? VAR_3 : 0x00000000;
 FUNC_0(VAR_2, 0x40988c, VAR_3, VAR_4);
 FUNC_1(VAR_2, 0x40988c);
 FUNC_0(VAR_2, 0x41a88c, VAR_3, VAR_4);
 FUNC_1(VAR_2, 0x41a88c);
 FUNC_0(VAR_2, 0x408a14, VAR_3, VAR_4);
 FUNC_1(VAR_2, 0x408a14);
}
