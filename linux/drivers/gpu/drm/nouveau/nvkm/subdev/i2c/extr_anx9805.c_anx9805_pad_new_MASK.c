
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_bus {TYPE_1__* pad; } ;
struct anx9805_pad {int addr; struct nvkm_i2c_bus* bus; struct nvkm_i2c_pad base; } ;
struct TYPE_2__ {int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct anx9805_pad* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int,struct nvkm_i2c_pad*) ;

int
FUNC_2(struct nvkm_i2c_bus *VAR_3, int VAR_4, u8 VAR_5,
  struct nvkm_i2c_pad **VAR_6)
{
 struct anx9805_pad *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_7->base;

 FUNC_1(&VAR_2, VAR_3->pad->i2c, VAR_4, &VAR_7->base);
 VAR_7->bus = VAR_3;
 VAR_7->addr = VAR_5;
 return 0;
}
