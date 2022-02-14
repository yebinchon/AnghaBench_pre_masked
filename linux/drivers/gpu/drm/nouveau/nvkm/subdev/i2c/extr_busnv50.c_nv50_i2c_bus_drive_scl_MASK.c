
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* pad; } ;
struct nv50_i2c_bus {int data; int addr; TYPE_4__ base; } ;
struct TYPE_7__ {TYPE_2__* i2c; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 struct nv50_i2c_bus* FUNC_0 (struct nvkm_i2c_bus*) ;
 int FUNC_1 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_i2c_bus *VAR_0, int VAR_1)
{
 struct nv50_i2c_bus *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_3 = VAR_2->base.pad->i2c->subdev.device;
 if (VAR_1) VAR_2->data |= 0x01;
 else VAR_2->data &= 0xfe;
 FUNC_1(VAR_3, VAR_2->addr, VAR_2->data);
}
