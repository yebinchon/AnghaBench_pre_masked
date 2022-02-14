
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr121_touchkey {unsigned char keycount; } ;
struct mpr121_init_register {int addr; unsigned char val; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct mpr121_init_register*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_1 (int *,char*,unsigned char) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_client*,int,unsigned char) ;
 struct mpr121_init_register* VAR_9 ;

__attribute__((used)) static int FUNC_4(struct mpr121_touchkey *VAR_10,
       struct i2c_client *VAR_11, int VAR_12)
{
 const struct mpr121_init_register *VAR_13;
 unsigned char VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;


 for (VAR_18 = 0; VAR_18 <= VAR_6; VAR_18++) {
  VAR_19 = VAR_3 + (VAR_18 * 2);
  VAR_21 = FUNC_3(VAR_11, VAR_19, VAR_8);
  if (VAR_21 < 0)
   goto err_i2c_write;
  VAR_21 = FUNC_3(VAR_11, VAR_19 + 1,
      VAR_7);
  if (VAR_21 < 0)
   goto err_i2c_write;
 }


 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_9); VAR_18++) {
  VAR_13 = &VAR_9[VAR_18];
  VAR_21 = FUNC_3(VAR_11, VAR_13->addr, VAR_13->val);
  if (VAR_21 < 0)
   goto err_i2c_write;
 }







 VAR_20 = VAR_12 / 1000;
 VAR_14 = ((VAR_20 - 700) * 256) / VAR_20;
 VAR_15 = (VAR_14 * 65) / 100;
 VAR_16 = (VAR_14 * 90) / 100;
 VAR_21 = FUNC_3(VAR_11, VAR_2, VAR_14);
 VAR_21 |= FUNC_3(VAR_11, VAR_0, VAR_15);
 VAR_21 |= FUNC_3(VAR_11, VAR_1, VAR_16);






 VAR_17 = VAR_10->keycount | VAR_5;
 VAR_21 |= FUNC_3(VAR_11, VAR_4,
      VAR_17);
 if (VAR_21 != 0)
  goto err_i2c_write;

 FUNC_1(&VAR_11->dev, "set up with %x keys.\n", VAR_10->keycount);

 return 0;

err_i2c_write:
 FUNC_2(&VAR_11->dev, "i2c write error: %d\n", VAR_21);
 return VAR_21;
}
