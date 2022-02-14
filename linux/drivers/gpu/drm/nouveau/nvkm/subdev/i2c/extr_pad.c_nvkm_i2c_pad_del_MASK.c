
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int head; } ;


 int FUNC_0 (struct nvkm_i2c_pad*,char*) ;
 int FUNC_1 (struct nvkm_i2c_pad*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nvkm_i2c_pad **VAR_0)
{
 struct nvkm_i2c_pad *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_0(VAR_1, "dtor");
  FUNC_2(&VAR_1->head);
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
}
