
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_i2c_aux {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct anx9805_pad {int addr; TYPE_1__* bus; } ;
struct anx9805_aux {int base; int addr; struct anx9805_pad* pad; } ;
struct TYPE_2__ {struct i2c_adapter i2c; } ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct anx9805_aux* FUNC_1 (struct nvkm_i2c_aux*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct i2c_adapter*,int ,int) ;
 int FUNC_5 (struct i2c_adapter*,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_i2c_aux *VAR_2, bool VAR_3,
   u8 VAR_4, u32 VAR_5, u8 *VAR_6, u8 *VAR_7)
{
 struct anx9805_aux *VAR_8 = FUNC_1(VAR_2);
 struct anx9805_pad *VAR_9 = VAR_8->pad;
 struct i2c_adapter *VAR_10 = &VAR_9->bus->i2c;
 int VAR_11, VAR_12 = -VAR_1;
 u8 VAR_13[16] = {};
 u8 VAR_14;

 FUNC_0(&VAR_8->base, "%02x %05x %d", VAR_4, VAR_5, *VAR_7);

 VAR_14 = FUNC_4(VAR_10, VAR_9->addr, 0x07) & ~0x04;
 FUNC_5(VAR_10, VAR_9->addr, 0x07, VAR_14 | 0x04);
 FUNC_5(VAR_10, VAR_9->addr, 0x07, VAR_14);
 FUNC_5(VAR_10, VAR_9->addr, 0xf7, 0x01);

 FUNC_5(VAR_10, VAR_8->addr, 0xe4, 0x80);
 if (!(VAR_4 & 1)) {
  FUNC_3(VAR_13, VAR_6, *VAR_7);
  FUNC_0(&VAR_8->base, "%16ph", VAR_13);
  for (VAR_11 = 0; VAR_11 < *VAR_7; VAR_11++)
   FUNC_5(VAR_10, VAR_8->addr, 0xf0 + VAR_11, VAR_13[VAR_11]);
 }
 FUNC_5(VAR_10, VAR_8->addr, 0xe5, ((*VAR_7 - 1) << 4) | VAR_4);
 FUNC_5(VAR_10, VAR_8->addr, 0xe6, (VAR_5 & 0x000ff) >> 0);
 FUNC_5(VAR_10, VAR_8->addr, 0xe7, (VAR_5 & 0x0ff00) >> 8);
 FUNC_5(VAR_10, VAR_8->addr, 0xe8, (VAR_5 & 0xf0000) >> 16);
 FUNC_5(VAR_10, VAR_8->addr, 0xe9, 0x01);

 VAR_11 = 0;
 while ((VAR_14 = FUNC_4(VAR_10, VAR_8->addr, 0xe9)) & 0x01) {
  FUNC_2(5);
  if (VAR_11++ == 32)
   goto done;
 }

 if ((VAR_14 = FUNC_4(VAR_10, VAR_9->addr, 0xf7)) & 0x01) {
  VAR_12 = -VAR_0;
  goto done;
 }

 if (VAR_4 & 1) {
  for (VAR_11 = 0; VAR_11 < *VAR_7; VAR_11++)
   VAR_13[VAR_11] = FUNC_4(VAR_10, VAR_8->addr, 0xf0 + VAR_11);
  FUNC_0(&VAR_8->base, "%16ph", VAR_13);
  FUNC_3(VAR_6, VAR_13, *VAR_7);
 }

 VAR_12 = 0;
done:
 FUNC_5(VAR_10, VAR_9->addr, 0xf7, 0x01);
 return VAR_12;
}
