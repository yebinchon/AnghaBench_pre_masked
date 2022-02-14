
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht21 {int valid; int lock; scalar_t__ last_update; int humidity; int temperature; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sht21* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4)
{
 int VAR_5 = 0;
 struct sht21 *VAR_6 = FUNC_0(VAR_4);
 struct i2c_client *VAR_7 = VAR_6->client;

 FUNC_2(&VAR_6->lock);





 if (FUNC_6(VAR_3, VAR_6->last_update + VAR_0 / 2) || !VAR_6->valid) {
  VAR_5 = FUNC_1(VAR_7,
        VAR_2);
  if (VAR_5 < 0)
   goto out;
  VAR_6->temperature = FUNC_5(VAR_5);
  VAR_5 = FUNC_1(VAR_7,
        VAR_1);
  if (VAR_5 < 0)
   goto out;
  VAR_6->humidity = FUNC_4(VAR_5);
  VAR_6->last_update = VAR_3;
  VAR_6->valid = 1;
 }
out:
 FUNC_3(&VAR_6->lock);

 return VAR_5 >= 0 ? 0 : VAR_5;
}
