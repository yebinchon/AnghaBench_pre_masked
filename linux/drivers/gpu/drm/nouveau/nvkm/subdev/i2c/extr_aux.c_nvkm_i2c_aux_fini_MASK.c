
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_aux {int enabled; int mutex; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nvkm_i2c_aux *VAR_0)
{
 FUNC_0(VAR_0, "fini");
 FUNC_1(&VAR_0->mutex);
 VAR_0->enabled = 0;
 FUNC_2(&VAR_0->mutex);
}
