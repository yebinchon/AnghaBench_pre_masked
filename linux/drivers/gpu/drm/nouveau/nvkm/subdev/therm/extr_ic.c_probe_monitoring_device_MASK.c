
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvbios_therm_sensor {int offset_constant; } ;
struct nvkm_therm {struct i2c_client* ic; int subdev; struct nvbios_therm_sensor bios_sensor; } ;
struct nvkm_i2c_bus {int i2c; } ;
struct TYPE_3__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {int addr; int type; } ;
struct TYPE_4__ {scalar_t__ (* detect ) (struct i2c_client*,struct i2c_board_info*) ;} ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (int *,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (struct i2c_client*,struct i2c_board_info*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct nvkm_i2c_bus *VAR_1,
   struct i2c_board_info *VAR_2, void *VAR_3)
{
 struct nvkm_therm *VAR_4 = VAR_3;
 struct nvbios_therm_sensor *VAR_5 = &VAR_4->bios_sensor;
 struct i2c_client *VAR_6;

 FUNC_3("%s%s", VAR_0, VAR_2->type);

 VAR_6 = FUNC_0(&VAR_1->i2c, VAR_2);
 if (!VAR_6)
  return 0;

 if (!VAR_6->dev.driver ||
     FUNC_5(VAR_6->dev.driver)->detect(VAR_6, VAR_2)) {
  FUNC_1(VAR_6);
  return 0;
 }

 FUNC_2(&VAR_4->subdev,
     "Found an %s at address 0x%x (controlled by lm_sensors, "
     "temp offset %+i C)\n",
     VAR_2->type, VAR_2->addr, VAR_5->offset_constant);
 VAR_4->ic = VAR_6;
 return 1;
}
