
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct nvkm_i2c_bus {struct i2c_adapter i2c; } ;
struct nvkm_i2c {int dummy; } ;
struct nvbios_init {TYPE_3__* outp; TYPE_2__* subdev; } ;
struct TYPE_6__ {scalar_t__ i2c_upper_default; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct nvkm_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_i2c_bus* FUNC_0 (struct nvkm_i2c*,int) ;

__attribute__((used)) static struct i2c_adapter *
FUNC_1(struct nvbios_init *VAR_2, int VAR_3)
{
 struct nvkm_i2c *VAR_4 = VAR_2->subdev->device->i2c;
 struct nvkm_i2c_bus *VAR_5;

 if (VAR_3 == 0xff) {
  VAR_3 = VAR_0;
  if (VAR_2->outp && VAR_2->outp->i2c_upper_default)
   VAR_3 = VAR_1;
 } else
 if (VAR_3 == 0x80) {
  VAR_3 = VAR_0;
 } else
 if (VAR_3 == 0x81) {
  VAR_3 = VAR_1;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 return VAR_5 ? &VAR_5->i2c : ((void*)0);
}
