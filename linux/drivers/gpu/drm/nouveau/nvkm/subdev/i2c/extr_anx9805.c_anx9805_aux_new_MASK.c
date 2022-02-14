
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_i2c_pad {int dummy; } ;
struct nvkm_i2c_aux {int dummy; } ;
struct anx9805_pad {int addr; int base; } ;
struct anx9805_aux {int addr; struct nvkm_i2c_aux base; struct anx9805_pad* pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct anx9805_pad* FUNC_0 (struct nvkm_i2c_pad*) ;
 struct anx9805_aux* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int,struct nvkm_i2c_aux*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_i2c_pad *VAR_4, int VAR_5, u8 VAR_6,
  struct nvkm_i2c_aux **VAR_7)
{
 struct anx9805_pad *VAR_8 = FUNC_0(VAR_4);
 struct anx9805_aux *VAR_9;
 int VAR_10;

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2)))
  return -VAR_0;
 *VAR_7 = &VAR_9->base;
 VAR_9->pad = VAR_8;

 VAR_10 = FUNC_2(&VAR_3, &VAR_8->base, VAR_5, &VAR_9->base);
 if (VAR_10)
  return VAR_10;

 switch (VAR_8->addr) {
 case 0x39: VAR_9->addr = 0x38; break;
 case 0x3b: VAR_9->addr = 0x3c; break;
 default:
  return -VAR_1;
 }

 return 0;
}
