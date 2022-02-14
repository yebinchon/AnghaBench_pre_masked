
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_i2c {int dummy; } ;
struct nvbios_init {TYPE_3__* outp; TYPE_2__* subdev; } ;
struct TYPE_6__ {int i2c_index; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct nvkm_i2c* i2c; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;
 struct nvkm_i2c_aux* FUNC_2 (struct nvkm_i2c*,int ) ;

__attribute__((used)) static struct nvkm_i2c_aux *
FUNC_3(struct nvbios_init *VAR_0)
{
 struct nvkm_i2c *VAR_1 = VAR_0->subdev->device->i2c;
 if (!VAR_0->outp) {
  if (FUNC_1(VAR_0))
   FUNC_0("script needs output for aux\n");
  return ((void*)0);
 }
 return FUNC_2(VAR_1, VAR_0->outp->i2c_index);
}
