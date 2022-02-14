
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {struct i2c_client* client; } ;


 int* VAR_0 ;
 int * VAR_1 ;
 struct adt7411_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, int VAR_3, long *VAR_4)
{
 struct adt7411_data *VAR_5 = FUNC_0(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1[VAR_3]);
 if (VAR_7 < 0)
  return VAR_7;
 *VAR_4 = !!(VAR_7 & VAR_0[VAR_3]);
 return 0;
}
