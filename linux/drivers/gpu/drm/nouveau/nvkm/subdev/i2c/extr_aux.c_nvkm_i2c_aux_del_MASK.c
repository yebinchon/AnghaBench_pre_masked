
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_aux {int i2c; int head; int func; } ;


 int FUNC_0 (struct nvkm_i2c_aux*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_i2c_aux*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nvkm_i2c_aux **VAR_0)
{
 struct nvkm_i2c_aux *VAR_1 = *VAR_0;
 if (VAR_1 && !FUNC_1(!VAR_1->func)) {
  FUNC_0(VAR_1, "dtor");
  FUNC_4(&VAR_1->head);
  FUNC_2(&VAR_1->i2c);
  FUNC_3(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
