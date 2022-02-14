
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_i2c_pad {TYPE_2__* i2c; } ;
struct nvkm_i2c_bus_func {scalar_t__ drive_scl; } ;
struct TYPE_8__ {int parent; } ;
struct TYPE_9__ {int * algo; struct i2c_algo_bit_data* algo_data; TYPE_3__ dev; int owner; int name; } ;
struct nvkm_i2c_bus {int id; TYPE_4__ i2c; struct nvkm_i2c_bus_func const* func; int head; int mutex; struct nvkm_i2c_pad* pad; } ;
struct nvkm_device {int cfgopt; int dev; } ;
struct i2c_algo_bit_data {int udelay; int getsda; int getscl; int setsda; int setscl; int post_xfer; int pre_xfer; struct nvkm_i2c_bus* data; int timeout; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {int bus; TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_i2c_bus*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 struct i2c_algo_bit_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int,char*,char*,int) ;
 int FUNC_9 (int) ;

int
FUNC_10(const struct nvkm_i2c_bus_func *VAR_10,
    struct nvkm_i2c_pad *VAR_11, int VAR_12,
    struct nvkm_i2c_bus *VAR_13)
{
 struct nvkm_device *VAR_14 = VAR_11->i2c->subdev.device;
 struct i2c_algo_bit_data *VAR_15;

 const bool VAR_16 = 0;



 int VAR_17;

 VAR_13->func = VAR_10;
 VAR_13->pad = VAR_11;
 VAR_13->id = VAR_12;
 FUNC_6(&VAR_13->mutex);
 FUNC_5(&VAR_13->head, &VAR_11->i2c->bus);
 FUNC_0(VAR_13, "ctor");

 FUNC_8(VAR_13->i2c.name, sizeof(VAR_13->i2c.name), "nvkm-%s-bus-%04x",
   FUNC_1(VAR_14->dev), VAR_12);
 VAR_13->i2c.owner = VAR_2;
 VAR_13->i2c.dev.parent = VAR_14->dev;

 if ( VAR_13->func->drive_scl &&
     !FUNC_7(VAR_14->cfgopt, "NvI2C", VAR_16)) {
  if (!(VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1)))
   return -VAR_0;
  VAR_15->udelay = 10;
  VAR_15->timeout = FUNC_9(2200);
  VAR_15->data = VAR_13;
  VAR_15->pre_xfer = VAR_7;
  VAR_15->post_xfer = VAR_6;
  VAR_15->setscl = VAR_8;
  VAR_15->setsda = VAR_9;
  VAR_15->getscl = VAR_4;
  VAR_15->getsda = VAR_5;
  VAR_13->i2c.algo_data = VAR_15;
  VAR_17 = FUNC_3(&VAR_13->i2c);
 } else {
  VAR_13->i2c.algo = &VAR_3;
  VAR_17 = FUNC_2(&VAR_13->i2c);
 }

 return VAR_17;
}
