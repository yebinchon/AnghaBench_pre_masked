
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int soft_rst_cmd ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int const*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 const u8 VAR_1[] = { 0x77, 0x77, 0x77, 0x77 };
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1,
    sizeof(VAR_1));
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "software reset failed: %d\n", VAR_2);
  return VAR_2;
 }





 FUNC_2(30);

 return 0;
}
