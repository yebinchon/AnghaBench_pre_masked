
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; int dev; } ;
typedef int boot_cmd ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 const u8 VAR_1[] = { 0x4D, 0x61, 0x69, 0x6E };
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1, sizeof(VAR_1));
 if (VAR_2) {
  FUNC_1(&VAR_0->dev, "boot failed: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_0(&VAR_0->dev, "boot success -- 0x%x\n", VAR_0->addr);
 return 0;
}
