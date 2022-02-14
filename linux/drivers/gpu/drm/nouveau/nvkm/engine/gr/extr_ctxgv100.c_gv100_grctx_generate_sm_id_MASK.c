
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


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct gf100_gr *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->base.engine.subdev.device;
 FUNC_2(VAR_4, FUNC_1(VAR_1, VAR_2, 0x608), VAR_3);
 FUNC_2(VAR_4, FUNC_0(VAR_1, 0x0c10 + VAR_2 * 4), VAR_3);
 FUNC_2(VAR_4, FUNC_1(VAR_1, VAR_2, 0x088), VAR_3);
}
