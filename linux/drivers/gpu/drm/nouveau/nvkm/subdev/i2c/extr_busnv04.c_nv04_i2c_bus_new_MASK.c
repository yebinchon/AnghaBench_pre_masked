
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct nv04_i2c_bus {void* sense; void* drive; struct nvkm_i2c_bus base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv04_i2c_bus* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_i2c_pad*,int,struct nvkm_i2c_bus*) ;

int
FUNC_2(struct nvkm_i2c_pad *VAR_3, int VAR_4, u8 VAR_5, u8 VAR_6,
   struct nvkm_i2c_bus **VAR_7)
{
 struct nv04_i2c_bus *VAR_8;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 *VAR_7 = &VAR_8->base;

 FUNC_1(&VAR_2, VAR_3, VAR_4, &VAR_8->base);
 VAR_8->drive = VAR_5;
 VAR_8->sense = VAR_6;
 return 0;
}
