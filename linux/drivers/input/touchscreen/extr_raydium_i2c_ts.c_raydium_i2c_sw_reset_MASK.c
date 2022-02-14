
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int soft_rst_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 const u8 VAR_3 = 0x01;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1,
      &VAR_3, sizeof(VAR_3));
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "software reset failed: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_0);

 return 0;
}
