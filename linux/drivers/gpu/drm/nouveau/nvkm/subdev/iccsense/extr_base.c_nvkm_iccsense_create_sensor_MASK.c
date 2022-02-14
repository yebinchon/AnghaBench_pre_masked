
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_iccsense_sensor {int type; int config; void* addr; int * i2c; void* id; int head; } ;
struct nvkm_iccsense {int data_valid; int sensors; struct nvkm_subdev subdev; } ;
struct nvkm_i2c_bus {int i2c; } ;
struct nvkm_i2c {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_extdev_func {int type; int addr; scalar_t__ bus; } ;
struct TYPE_2__ {struct nvkm_i2c* i2c; struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nvkm_iccsense_sensor* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,void*,struct nvbios_extdev_func*) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int) ;
 struct nvkm_i2c_bus* FUNC_4 (struct nvkm_i2c*,int ) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (struct nvkm_subdev*,char*,void*) ;

__attribute__((used)) static struct nvkm_iccsense_sensor*
FUNC_7(struct nvkm_iccsense *VAR_6, u8 VAR_7)
{
 struct nvkm_subdev *VAR_8 = &VAR_6->subdev;
 struct nvkm_bios *VAR_9 = VAR_8->device->bios;
 struct nvkm_i2c *VAR_10 = VAR_8->device->i2c;
 struct nvbios_extdev_func VAR_11;
 struct nvkm_i2c_bus *VAR_12;
 struct nvkm_iccsense_sensor *VAR_13;
 u8 VAR_14;

 if (!VAR_10 || !VAR_9 || FUNC_2(VAR_9, VAR_7, &VAR_11))
  return ((void*)0);

 if (VAR_11.type == 0xff)
  return ((void*)0);

 if (VAR_11.type != VAR_1 &&
     VAR_11.type != VAR_2 &&
     VAR_11.type != VAR_3) {
  VAR_6->data_valid = 0;
  FUNC_3(VAR_8, "Unknown sensor type %x, power reading "
      "disabled\n", VAR_11.type);
  return ((void*)0);
 }

 if (VAR_11.bus)
  VAR_12 = FUNC_4(VAR_10, VAR_5);
 else
  VAR_12 = FUNC_4(VAR_10, VAR_4);
 if (!VAR_12)
  return ((void*)0);

 VAR_14 = VAR_11.addr >> 1;
 if (!FUNC_5(&VAR_12->i2c, VAR_14,
        VAR_11.type)) {
  VAR_6->data_valid = 0;
  FUNC_6(VAR_8, "found invalid sensor id: %i, power reading"
     "might be invalid\n", VAR_7);
  return ((void*)0);
 }

 VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return ((void*)0);

 FUNC_1(&VAR_13->head, &VAR_6->sensors);
 VAR_13->id = VAR_7;
 VAR_13->type = VAR_11.type;
 VAR_13->i2c = &VAR_12->i2c;
 VAR_13->addr = VAR_14;
 VAR_13->config = 0x0;
 return VAR_13;
}
