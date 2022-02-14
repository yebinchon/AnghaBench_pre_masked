
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {unsigned int byte; } ;
struct i2c_client {int adapter; int flags; int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,unsigned int,int ,union i2c_smbus_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, unsigned int VAR_5, unsigned int *VAR_6)
{
 struct device *VAR_7 = VAR_4;
 struct i2c_client *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;
 union i2c_smbus_data VAR_10;

 FUNC_1(VAR_8->adapter, VAR_0);

 VAR_9 = FUNC_0(VAR_8->adapter, VAR_8->addr, VAR_8->flags,
          VAR_3, VAR_5, VAR_1, ((void*)0));
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_0(VAR_8->adapter, VAR_8->addr, VAR_8->flags,
          VAR_2, 0, VAR_1, &VAR_10);
 if (VAR_9 < 0)
  goto out;

 *VAR_6 = VAR_10.byte;
out:
 FUNC_2(VAR_8->adapter, VAR_0);

 return VAR_9;
}
