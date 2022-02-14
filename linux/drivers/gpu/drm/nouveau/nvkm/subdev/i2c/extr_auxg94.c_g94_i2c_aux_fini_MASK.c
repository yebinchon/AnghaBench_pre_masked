
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* pad; } ;
struct g94_i2c_aux {int ch; TYPE_4__ base; } ;
struct TYPE_7__ {TYPE_2__* i2c; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct g94_i2c_aux *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.pad->i2c->subdev.device;
 FUNC_0(VAR_1, 0x00e4e4 + (VAR_0->ch * 0x50), 0x00310000, 0x00000000);
}
