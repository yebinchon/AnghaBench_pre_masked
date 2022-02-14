
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int const*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 static const u8 VAR_2[] = { 0x09, 0x00, 0x09, 0x00, 0x50, 0x10, 0x00 };
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, sizeof(VAR_2),
      VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "check path command failed: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
