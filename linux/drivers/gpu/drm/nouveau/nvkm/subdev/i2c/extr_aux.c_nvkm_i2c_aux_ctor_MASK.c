
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_i2c_pad {TYPE_2__* i2c; } ;
struct nvkm_i2c_aux_func {int dummy; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {int * algo; TYPE_3__ dev; int owner; int name; } ;
struct nvkm_i2c_aux {int id; TYPE_4__ i2c; int head; int mutex; struct nvkm_i2c_pad* pad; struct nvkm_i2c_aux_func const* func; } ;
struct nvkm_device {int dev; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {int aux; TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int,char*,char*,int) ;

int
FUNC_6(const struct nvkm_i2c_aux_func *VAR_2,
    struct nvkm_i2c_pad *VAR_3, int VAR_4,
    struct nvkm_i2c_aux *VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_3->i2c->subdev.device;

 VAR_5->func = VAR_2;
 VAR_5->pad = VAR_3;
 VAR_5->id = VAR_4;
 FUNC_4(&VAR_5->mutex);
 FUNC_3(&VAR_5->head, &VAR_3->i2c->aux);
 FUNC_0(VAR_5, "ctor");

 FUNC_5(VAR_5->i2c.name, sizeof(VAR_5->i2c.name), "nvkm-%s-aux-%04x",
   FUNC_1(VAR_6->dev), VAR_4);
 VAR_5->i2c.owner = VAR_0;
 VAR_5->i2c.dev.parent = VAR_6->dev;
 VAR_5->i2c.algo = &VAR_1;
 return FUNC_2(&VAR_5->i2c);
}
