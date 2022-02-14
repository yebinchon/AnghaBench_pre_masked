
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct i2c_client {int dev; } ;
typedef int checksum_cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (size_t,int*) ;
 int FUNC_2 (struct i2c_client*,int*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1,
          size_t VAR_2, u16 VAR_3)
{
 u8 VAR_4[] = { 0x00, 0x05, 0x6D, 0x00, 0x00, 0x00, 0x00 };
 int VAR_5;

 FUNC_1(VAR_2, &VAR_4[3]);
 FUNC_1(VAR_3, &VAR_4[5]);

 VAR_5 = FUNC_2(VAR_1,
      VAR_4, sizeof(VAR_4),
      VAR_0);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "failed to write checksum: %d\n",
   VAR_5);
  return VAR_5;
 }

 return 0;
}
