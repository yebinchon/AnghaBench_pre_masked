
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wbuf ;
typedef int u8 ;
struct tc90522_state {TYPE_1__* i2c_client; } ;
struct i2c_msg {int flags; int addr; int* buf; int len; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int addr; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tc90522_state* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_msg*) ;
 struct i2c_msg* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_6, struct i2c_msg *VAR_7, int VAR_8)
{
 struct tc90522_state *VAR_9;
 struct i2c_msg *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15[256];
 u8 *VAR_16, *VAR_17;

 if (VAR_8 <= 0)
  return -VAR_0;

 VAR_14 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  if (VAR_7[VAR_11].flags & VAR_4)
   VAR_14++;
 VAR_10 = FUNC_3(VAR_8 + VAR_14, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_6);
 VAR_16 = VAR_15;
 VAR_17 = VAR_15 + sizeof(VAR_15);
 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_8; VAR_11++, VAR_12++) {
  VAR_10[VAR_12].addr = VAR_9->i2c_client->addr;
  VAR_10[VAR_12].flags = VAR_7[VAR_11].flags;

  if (VAR_7[VAR_11].flags & VAR_4) {
   VAR_10[VAR_12].flags &= ~VAR_4;
   if (VAR_16 + 2 > VAR_17)
    break;
   VAR_16[0] = VAR_5;
   VAR_16[1] = VAR_7[VAR_11].addr << 1 | 0x01;
   VAR_10[VAR_12].buf = VAR_16;
   VAR_10[VAR_12].len = 2;
   VAR_16 += 2;
   VAR_12++;
   VAR_10[VAR_12].addr = VAR_9->i2c_client->addr;
   VAR_10[VAR_12].flags = VAR_7[VAR_11].flags;
   VAR_10[VAR_12].buf = VAR_7[VAR_11].buf;
   VAR_10[VAR_12].len = VAR_7[VAR_11].len;
   continue;
  }

  if (VAR_16 + VAR_7[VAR_11].len + 2 > VAR_17)
   break;
  VAR_16[0] = VAR_5;
  VAR_16[1] = VAR_7[VAR_11].addr << 1;
  FUNC_4(VAR_16 + 2, VAR_7[VAR_11].buf, VAR_7[VAR_11].len);
  VAR_10[VAR_12].buf = VAR_16;
  VAR_10[VAR_12].len = VAR_7[VAR_11].len + 2;
  VAR_16 += VAR_10[VAR_12].len;
 }

 if (VAR_11 < VAR_8)
  VAR_13 = -VAR_2;
 else
  VAR_13 = FUNC_1(VAR_9->i2c_client->adapter, VAR_10, VAR_12);
 if (VAR_13 >= 0 && VAR_13 < VAR_12)
  VAR_13 = -VAR_1;
 FUNC_2(VAR_10);
 return (VAR_13 == VAR_12) ? VAR_8 : VAR_13;
}
