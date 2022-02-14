
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_therm {scalar_t__ ic; TYPE_1__ subdev; } ;
struct TYPE_4__ {int member_0; } ;
struct nvkm_i2c_bus_probe {int member_1; TYPE_2__ member_0; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_i2c {int dummy; } ;
struct nvkm_device {struct nvkm_i2c* i2c; struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_extdev_func {int addr; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_i2c_bus_probe* VAR_3 ;
 int FUNC_1 (struct nvkm_bios*,int ,struct nvbios_extdev_func*) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*) ;
 struct nvkm_i2c_bus* FUNC_3 (struct nvkm_i2c*,int ) ;
 int FUNC_4 (struct nvkm_i2c_bus*,char*,struct nvkm_i2c_bus_probe*,int ,struct nvkm_therm*) ;
 int VAR_4 ;

void
FUNC_5(struct nvkm_therm *VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_5->subdev.device;
 struct nvkm_bios *VAR_7 = VAR_6->bios;
 struct nvkm_i2c *VAR_8 = VAR_6->i2c;
 struct nvkm_i2c_bus *VAR_9;
 struct nvbios_extdev_func VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_2);
 if (!VAR_9)
  return;

 if (!FUNC_1(VAR_7, VAR_1, &VAR_10)) {
  struct nvkm_i2c_bus_probe VAR_11[] = {
    { FUNC_0("lm90", VAR_10.addr >> 1) , 0},
    { }
  };

  FUNC_4(VAR_9, "monitoring device", VAR_11,
       VAR_4, VAR_5);
  if (VAR_5->ic)
   return;
 }

 if (!FUNC_1(VAR_7, VAR_0, &VAR_10)) {
  struct nvkm_i2c_bus_probe VAR_12[] = {
    { FUNC_0("adt7473", VAR_10.addr >> 1) , 20 },
    { }
  };

  FUNC_4(VAR_9, "monitoring device", VAR_12,
       VAR_4, VAR_5);
  if (VAR_5->ic)
   return;
 }

 if (FUNC_2(VAR_7))
  return;




 FUNC_4(VAR_9, "monitoring device", VAR_3,
      VAR_4, VAR_5);
}
