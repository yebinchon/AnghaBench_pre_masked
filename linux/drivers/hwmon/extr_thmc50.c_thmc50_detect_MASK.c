
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 unsigned int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
    struct i2c_board_info *VAR_9)
{
 unsigned VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 struct i2c_adapter *VAR_13 = VAR_8->adapter;
 const char *VAR_14;

 if (!FUNC_1(VAR_13, VAR_1)) {
  FUNC_4("thmc50: detect failed, smbus byte data not supported!\n");
  return -VAR_0;
 }

 FUNC_4("thmc50: Probing for THMC50 at 0x%2X on bus %d\n",
   VAR_8->addr, FUNC_0(VAR_8->adapter));

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 VAR_11 = FUNC_2(VAR_8, VAR_5);
 VAR_12 = FUNC_2(VAR_8, VAR_4);
 if (VAR_11 < 0xc0 || (VAR_12 & 0x10))
  return -VAR_0;

 if (VAR_10 == 0x41) {
  int VAR_15 = FUNC_0(VAR_8->adapter);
  int VAR_16;

  VAR_14 = "adm1022";
  for (VAR_16 = 0; VAR_16 + 1 < VAR_7; VAR_16 += 2)
   if (VAR_6[VAR_16] == VAR_15 &&
       VAR_6[VAR_16 + 1] == VAR_8->addr) {

    VAR_12 |= (1 << 7);
    FUNC_3(VAR_8,
         VAR_4,
         VAR_12);
    break;
   }
 } else if (VAR_10 == 0x49) {
  VAR_14 = "thmc50";
 } else {
  FUNC_4("thmc50: Detection of THMC50/ADM1022 failed\n");
  return -VAR_0;
 }

 FUNC_4("thmc50: Detected %s (version %x, revision %x)\n",
   VAR_14, (VAR_11 >> 4) - 0xc, VAR_11 & 0xf);

 FUNC_5(VAR_9->type, VAR_14, VAR_2);

 return 0;
}
