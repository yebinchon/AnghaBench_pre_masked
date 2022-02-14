
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gf100_grctx {TYPE_4__* gr; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct TYPE_8__ {TYPE_3__ base; } ;


 int FUNC_0 (struct gf100_grctx*,int,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;

void
FUNC_2(struct gf100_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->gr->base.engine.subdev.device;
 u32 VAR_2 = FUNC_1(VAR_1, 0x17e91c);
 u32 VAR_3 = FUNC_1(VAR_1, 0x17e920);

 FUNC_0(VAR_0, 0x17e91c, VAR_2);
 FUNC_0(VAR_0, 0x17e920, VAR_3);
}
