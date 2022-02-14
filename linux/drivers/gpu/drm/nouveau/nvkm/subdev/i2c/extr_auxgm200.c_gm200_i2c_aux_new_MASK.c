
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_aux {int intr; } ;
struct gm200_i2c_aux {int ch; struct nvkm_i2c_aux base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gm200_i2c_aux* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_i2c_pad*,int,struct nvkm_i2c_aux*) ;

int
FUNC_2(struct nvkm_i2c_pad *VAR_3, int VAR_4, u8 VAR_5,
  struct nvkm_i2c_aux **VAR_6)
{
 struct gm200_i2c_aux *VAR_7;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 *VAR_6 = &VAR_7->base;

 FUNC_1(&VAR_2, VAR_3, VAR_4, &VAR_7->base);
 VAR_7->ch = VAR_5;
 VAR_7->base.intr = 1 << VAR_7->ch;
 return 0;
}
