
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_bus {int mutex; struct nvkm_i2c_pad* pad; } ;


 int FUNC_0 (struct nvkm_i2c_bus*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_i2c_pad*) ;

void
FUNC_3(struct nvkm_i2c_bus *VAR_0)
{
 struct nvkm_i2c_pad *VAR_1 = VAR_0->pad;
 FUNC_0(VAR_0, "release");
 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->mutex);
}
