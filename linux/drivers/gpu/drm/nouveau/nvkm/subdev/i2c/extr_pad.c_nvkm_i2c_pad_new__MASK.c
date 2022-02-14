
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_i2c_pad_func {int dummy; } ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_i2c_pad* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_i2c_pad_func const*,struct nvkm_i2c*,int,struct nvkm_i2c_pad*) ;

int
FUNC_2(const struct nvkm_i2c_pad_func *VAR_2, struct nvkm_i2c *VAR_3,
    int VAR_4, struct nvkm_i2c_pad **VAR_5)
{
 if (!(*VAR_5 = FUNC_0(sizeof(**VAR_5), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, *VAR_5);
 return 0;
}
