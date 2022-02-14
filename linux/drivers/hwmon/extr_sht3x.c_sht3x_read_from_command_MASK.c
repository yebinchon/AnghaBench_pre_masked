
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sht3x_data {int i2c_lock; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,char*,int) ;
 int FUNC_1 (struct i2c_client*,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2,
       struct sht3x_data *VAR_3,
       const char *VAR_4,
       char *VAR_5, int VAR_6, u32 VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_3->i2c_lock);
 VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_1);

 if (VAR_8 != VAR_1) {
  VAR_8 = VAR_8 < 0 ? VAR_8 : -VAR_0;
  goto out;
 }

 if (VAR_7)
  FUNC_4(VAR_7, VAR_7 + 1000);

 VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6);
 if (VAR_8 != VAR_6) {
  VAR_8 = VAR_8 < 0 ? VAR_8 : -VAR_0;
  goto out;
 }

 VAR_8 = 0;
out:
 FUNC_3(&VAR_3->i2c_lock);
 return VAR_8;
}
