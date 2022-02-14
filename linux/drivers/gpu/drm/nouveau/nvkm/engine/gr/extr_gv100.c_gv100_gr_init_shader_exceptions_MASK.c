
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct gf100_gr *VAR_0, int VAR_1, int VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->base.engine.subdev.device;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 0x100; VAR_4 += 0x80) {
  FUNC_1(VAR_3, FUNC_0(VAR_1, VAR_2, 0x728 + VAR_4), 0x0085eb64);
  FUNC_1(VAR_3, FUNC_0(VAR_1, VAR_2, 0x610), 0x00000001);
  FUNC_1(VAR_3, FUNC_0(VAR_1, VAR_2, 0x72c + VAR_4), 0x00000004);
 }
}
