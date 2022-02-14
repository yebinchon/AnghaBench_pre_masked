
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct af9013_state {scalar_t__ ts_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int,int*,unsigned int const,int) ;
 int FUNC_1 (int *,char*,int) ;
 struct af9013_state* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1;
 struct af9013_state *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7;
 u8 VAR_8;
 u8 VAR_9 = !((u8 *)VAR_2)[0];
 u16 VAR_10 = ((u8 *)VAR_2)[1] << 8 | ((u8 *)VAR_2)[2] << 0;
 u8 *VAR_11 = &((u8 *)VAR_2)[3];
 const unsigned int VAR_12 = VAR_3 - 3;

 if (VAR_5->ts_mode == VAR_0 && (VAR_10 & 0xff00) != 0xae00) {
  VAR_8 = 0 << 7|0 << 6|(VAR_12 - 1) << 2|1 << 1|1 << 0;
  VAR_6 = FUNC_0(VAR_4, VAR_8, VAR_10, VAR_11, VAR_12, VAR_9);
  if (VAR_6)
   goto err;
 } else if (VAR_10 >= 0x5100 && VAR_10 < 0x8fff) {

  VAR_8 = 1 << 7|1 << 6|(VAR_12 - 1) << 2|1 << 1|1 << 0;
  VAR_6 = FUNC_0(VAR_4, VAR_8, VAR_10, VAR_11, VAR_12, VAR_9);
  if (VAR_6)
   goto err;
 } else {
  VAR_8 = 0 << 7|0 << 6|(1 - 1) << 2|1 << 1|1 << 0;
  for (VAR_7 = 0; VAR_7 < VAR_12; VAR_7++) {
   VAR_6 = FUNC_0(VAR_4, VAR_8, VAR_10 + VAR_7, VAR_11 + VAR_7, 1,
        VAR_9);
   if (VAR_6)
    goto err;
  }
 }

 return 0;
err:
 FUNC_1(&VAR_4->dev, "failed %d\n", VAR_6);
 return VAR_6;
}
