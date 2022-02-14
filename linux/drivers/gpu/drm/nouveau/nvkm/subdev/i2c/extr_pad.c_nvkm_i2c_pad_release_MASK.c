
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {scalar_t__ mode; int mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_i2c_pad*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_i2c_pad*,scalar_t__) ;

void
FUNC_3(struct nvkm_i2c_pad *VAR_1)
{
 FUNC_0(VAR_1, "release");
 if (VAR_1->mode == VAR_0)
  FUNC_2(VAR_1, VAR_1->mode);
 FUNC_1(&VAR_1->mutex);
}
