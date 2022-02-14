
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tx_buf ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int*,int,int*,size_t) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, u8 VAR_3,
       u8 *VAR_4, size_t VAR_5)
{
 u8 VAR_6[] = { 0x22, 0x00, 0x10, 0x0E, 0x23, 0x00 };
 int VAR_7;

 VAR_6[2] |= VAR_3 & 0xF;

 VAR_7 = FUNC_2(VAR_2, VAR_6, sizeof(VAR_6),
     VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_2->dev, "get desc failed: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_4[0] != VAR_5) {
  FUNC_0(&VAR_2->dev, "unexpected response to get desc: %d\n",
   VAR_4[0]);
  return -VAR_0;
 }

 FUNC_1(VAR_1);

 return 0;
}
