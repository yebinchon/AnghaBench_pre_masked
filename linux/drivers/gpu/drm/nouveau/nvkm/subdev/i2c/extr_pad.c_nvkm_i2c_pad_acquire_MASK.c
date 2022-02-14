
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int mode; int mutex; } ;
typedef enum nvkm_i2c_pad_mode { ____Placeholder_nvkm_i2c_pad_mode } nvkm_i2c_pad_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nvkm_i2c_pad*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_i2c_pad*,int) ;

int
FUNC_4(struct nvkm_i2c_pad *VAR_2, enum nvkm_i2c_pad_mode VAR_3)
{
 FUNC_0(VAR_2, "acquire");
 FUNC_1(&VAR_2->mutex);
 if (VAR_2->mode != VAR_3) {
  if (VAR_2->mode != VAR_1) {
   FUNC_2(&VAR_2->mutex);
   return -VAR_0;
  }
  FUNC_3(VAR_2, VAR_3);
 }
 return 0;
}
