
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_aux_func {int dummy; } ;
struct nvkm_i2c_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_i2c_aux* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_i2c_aux_func const*,struct nvkm_i2c_pad*,int,struct nvkm_i2c_aux*) ;

int
FUNC_2(const struct nvkm_i2c_aux_func *VAR_2,
    struct nvkm_i2c_pad *VAR_3, int VAR_4,
    struct nvkm_i2c_aux **VAR_5)
{
 if (!(*VAR_5 = FUNC_0(sizeof(**VAR_5), VAR_1)))
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3, VAR_4, *VAR_5);
}
