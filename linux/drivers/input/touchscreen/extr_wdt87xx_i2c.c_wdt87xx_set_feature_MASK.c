
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx_buf ;
struct i2c_client {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int const*,size_t) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
          const u8 *VAR_5, size_t VAR_6)
{
 u8 VAR_7[VAR_2];
 int VAR_8 = 0;
 int VAR_9;


 VAR_7[VAR_8++] = 0x22;
 VAR_7[VAR_8++] = 0x00;
 if (VAR_5[VAR_0] > 0xF) {
  VAR_7[VAR_8++] = 0x30;
  VAR_7[VAR_8++] = 0x03;
  VAR_7[VAR_8++] = VAR_5[VAR_0];
 } else {
  VAR_7[VAR_8++] = 0x30 | VAR_5[VAR_0];
  VAR_7[VAR_8++] = 0x03;
 }
 VAR_7[VAR_8++] = 0x23;
 VAR_7[VAR_8++] = 0x00;
 VAR_7[VAR_8++] = (VAR_6 & 0xFF);
 VAR_7[VAR_8++] = ((VAR_6 & 0xFF00) >> 8);

 if (VAR_8 + VAR_6 > sizeof(VAR_7))
  return -VAR_1;

 FUNC_3(&VAR_7[VAR_8], VAR_5, VAR_6);
 VAR_8 += VAR_6;

 VAR_9 = FUNC_1(VAR_4, VAR_7, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_4->dev, "set feature failed: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_2(VAR_3);

 return 0;
}
