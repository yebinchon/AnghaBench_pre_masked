
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct gf119_i2c_bus {int addr; struct nvkm_i2c_bus base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gf119_i2c_bus* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_i2c_pad*,int,struct nvkm_i2c_bus*) ;

int
FUNC_2(struct nvkm_i2c_pad *VAR_3, int VAR_4, u8 VAR_5,
   struct nvkm_i2c_bus **VAR_6)
{
 struct gf119_i2c_bus *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_7->base;

 FUNC_1(&VAR_2, VAR_3, VAR_4, &VAR_7->base);
 VAR_7->addr = 0x00d014 + (VAR_5 * 0x20);
 return 0;
}
