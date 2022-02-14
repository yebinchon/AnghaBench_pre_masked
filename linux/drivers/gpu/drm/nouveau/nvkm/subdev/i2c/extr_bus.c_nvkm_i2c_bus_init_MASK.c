
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_bus {int enabled; int mutex; TYPE_1__* func; } ;
struct TYPE_2__ {int (* init ) (struct nvkm_i2c_bus*) ;} ;


 int FUNC_0 (struct nvkm_i2c_bus*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_i2c_bus*) ;

void
FUNC_4(struct nvkm_i2c_bus *VAR_0)
{
 FUNC_0(VAR_0, "init");
 if (VAR_0->func->init)
  VAR_0->func->init(VAR_0);

 FUNC_1(&VAR_0->mutex);
 VAR_0->enabled = 1;
 FUNC_2(&VAR_0->mutex);
}
