
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dev; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client*,int *,int) ;
 int FUNC_4 (struct i2c_client*,int ,int,int *) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (unsigned int,unsigned int) ;

int FUNC_7(void *VAR_1, u8 VAR_2, u8 VAR_3,
    unsigned int VAR_4, u32 *VAR_5)
{
 int VAR_6;
 __be32 VAR_7 = 0;
 struct i2c_client *VAR_8 = VAR_1;


 VAR_6 = FUNC_5(VAR_8, VAR_2);
 if (VAR_6)
  goto err;
 FUNC_6(VAR_4, VAR_4 + 1000);


 if (VAR_3 != VAR_0)
  VAR_6 = FUNC_4(VAR_8, VAR_3, 3, (u8 *)&VAR_7);
 else
  VAR_6 = FUNC_3(VAR_8, (u8 *)&VAR_7, 3);
 if (VAR_6 < 0)
  goto err;

 FUNC_1(&VAR_8->dev, "ADC raw value : %x\n", FUNC_0(VAR_7) >> 8);
 *VAR_5 = FUNC_0(VAR_7) >> 8;

 return 0;
err:
 FUNC_2(&VAR_8->dev, "Unable to make sensor adc conversion\n");
 return VAR_6;
}
