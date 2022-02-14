
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

__attribute__((used)) static int FUNC_3(void *VAR_1, const void *VAR_2,
         size_t VAR_3, void *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = VAR_1;
 struct af9013_state *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;
 u8 VAR_10;
 u8 VAR_11 = !((u8 *)VAR_2)[0];
 u16 VAR_12 = ((u8 *)VAR_2)[1] << 8 | ((u8 *)VAR_2)[2] << 0;
 u8 *VAR_13 = &((u8 *)VAR_4)[0];
 const unsigned int VAR_14 = VAR_5;

 if (VAR_7->ts_mode == VAR_0 && (VAR_12 & 0xff00) != 0xae00) {
  VAR_10 = 0 << 7|0 << 6|(VAR_14 - 1) << 2|1 << 1|0 << 0;
  VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_12, VAR_4, VAR_14, VAR_11);
  if (VAR_8)
   goto err;
 } else {
  VAR_10 = 0 << 7|0 << 6|(1 - 1) << 2|1 << 1|0 << 0;
  for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
   VAR_8 = FUNC_0(VAR_6, VAR_10, VAR_12 + VAR_9, VAR_13 + VAR_9, 1,
        VAR_11);
   if (VAR_8)
    goto err;
  }
 }

 return 0;
err:
 FUNC_1(&VAR_6->dev, "failed %d\n", VAR_8);
 return VAR_8;
}
