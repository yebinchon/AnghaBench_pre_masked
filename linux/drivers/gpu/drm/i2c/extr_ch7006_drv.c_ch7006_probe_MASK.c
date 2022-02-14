
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,char*) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (struct i2c_client*,char*,int ) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 int FUNC_4 (struct i2c_client*,int *,int) ;
 int FUNC_5 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2, const struct i2c_device_id *VAR_3)
{
 uint8_t VAR_4 = VAR_0;
 uint8_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, "\n");

 VAR_6 = FUNC_5(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_4(VAR_2, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  goto fail;

 FUNC_2(VAR_2, "Detected version ID: %x\n", VAR_5);




 FUNC_3(VAR_2, 0x3d, 0x0);

 return 0;

fail:
 FUNC_1(VAR_2, "Error %d reading version ID\n", VAR_6);

 return -VAR_1;
}
