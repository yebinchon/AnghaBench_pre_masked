
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_aux {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct anx9805_pad {TYPE_1__* bus; } ;
struct anx9805_aux {int base; int addr; struct anx9805_pad* pad; } ;
struct TYPE_2__ {struct i2c_adapter i2c; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct anx9805_aux* FUNC_2 (struct nvkm_i2c_aux*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i2c_adapter*,int ,int) ;
 int FUNC_5 (struct i2c_adapter*,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_i2c_aux *VAR_2,
      int VAR_3, int VAR_4, bool VAR_5)
{
 struct anx9805_aux *VAR_6 = FUNC_2(VAR_2);
 struct anx9805_pad *VAR_7 = VAR_6->pad;
 struct i2c_adapter *VAR_8 = &VAR_7->bus->i2c;
 u8 VAR_9, VAR_10;

 FUNC_0(&VAR_6->base, "ANX9805 train %d %02x %d",
  VAR_3, VAR_4, VAR_5);

 FUNC_5(VAR_8, VAR_6->addr, 0xa0, VAR_4);
 FUNC_5(VAR_8, VAR_6->addr, 0xa1, VAR_3 | (VAR_5 ? 0x80 : 0x00));
 FUNC_5(VAR_8, VAR_6->addr, 0xa2, 0x01);
 FUNC_5(VAR_8, VAR_6->addr, 0xa8, 0x01);

 VAR_10 = 0;
 while ((VAR_9 = FUNC_4(VAR_8, VAR_6->addr, 0xa8)) & 0x01) {
  FUNC_3(5);
  if (VAR_10++ == 100) {
   FUNC_1(&VAR_6->base, "link training timeout");
   return -VAR_1;
  }
 }

 if (VAR_9 & 0x70) {
  FUNC_1(&VAR_6->base, "link training failed");
  return -VAR_0;
 }

 return 0;
}
