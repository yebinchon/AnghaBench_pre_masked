
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* pad; } ;
struct nv04_i2c_bus {int drive; TYPE_4__ base; } ;
struct TYPE_7__ {TYPE_2__* i2c; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 struct nv04_i2c_bus* FUNC_0 (struct nvkm_i2c_bus*) ;
 int FUNC_1 (struct nvkm_device*,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_i2c_bus *VAR_0, int VAR_1)
{
 struct nv04_i2c_bus *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_3 = VAR_2->base.pad->i2c->subdev.device;
 u8 VAR_4 = FUNC_1(VAR_3, 0, VAR_2->drive);
 if (VAR_1) VAR_4 |= 0x10;
 else VAR_4 &= 0xef;
 FUNC_2(VAR_3, 0, VAR_2->drive, VAR_4 | 0x01);
}
