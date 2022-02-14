
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_bus {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct anx9805_pad {int addr; TYPE_1__* bus; } ;
struct anx9805_bus {int addr; struct anx9805_pad* pad; } ;
struct TYPE_2__ {struct i2c_adapter i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct anx9805_bus* FUNC_0 (struct nvkm_i2c_bus*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_adapter*,int ,int) ;
 int FUNC_3 (struct i2c_adapter*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_i2c_bus *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 struct anx9805_bus *VAR_5 = FUNC_0(VAR_2);
 struct anx9805_pad *VAR_6 = VAR_5->pad;
 struct i2c_adapter *VAR_7 = &VAR_6->bus->i2c;
 struct i2c_msg *VAR_8 = VAR_3;
 int VAR_9 = -VAR_0;
 int VAR_10, VAR_11, VAR_12 = VAR_4;
 u8 VAR_13 = 0x00, VAR_14 = 0x00, VAR_15;

 VAR_15 = FUNC_2(VAR_7, VAR_6->addr, 0x07) & ~0x10;
 FUNC_3(VAR_7, VAR_6->addr, 0x07, VAR_15 | 0x10);
 FUNC_3(VAR_7, VAR_6->addr, 0x07, VAR_15);
 FUNC_3(VAR_7, VAR_5->addr, 0x43, 0x05);
 FUNC_1(5);

 while (VAR_12--) {
  if ( (VAR_8->flags & VAR_1) && VAR_8->addr == 0x50) {
   FUNC_3(VAR_7, VAR_5->addr, 0x40, VAR_8->addr << 1);
   FUNC_3(VAR_7, VAR_5->addr, 0x41, VAR_13);
   FUNC_3(VAR_7, VAR_5->addr, 0x42, VAR_14);
   FUNC_3(VAR_7, VAR_5->addr, 0x44, VAR_8->len);
   FUNC_3(VAR_7, VAR_5->addr, 0x45, 0x00);
   FUNC_3(VAR_7, VAR_5->addr, 0x43, 0x01);
   for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10++) {
    VAR_11 = 0;
    while (FUNC_2(VAR_7, VAR_5->addr, 0x46) & 0x10) {
     FUNC_1(5);
     if (VAR_11++ == 32)
      goto done;
    }
    VAR_8->buf[VAR_10] = FUNC_2(VAR_7, VAR_5->addr, 0x47);
   }
  } else
  if (!(VAR_8->flags & VAR_1)) {
   if (VAR_8->addr == 0x50 && VAR_8->len == 0x01) {
    VAR_14 = VAR_8->buf[0];
   } else
   if (VAR_8->addr == 0x30 && VAR_8->len == 0x01) {
    VAR_13 = VAR_8->buf[0];
   } else
    goto done;
  } else {
   goto done;
  }
  VAR_8++;
 }

 VAR_9 = VAR_4;
done:
 FUNC_3(VAR_7, VAR_5->addr, 0x43, 0x00);
 return VAR_9;
}
