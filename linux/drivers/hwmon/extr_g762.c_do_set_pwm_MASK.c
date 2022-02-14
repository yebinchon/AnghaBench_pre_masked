
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct g762_data {int valid; int update_lock; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g762_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, unsigned long VAR_3)
{
 struct g762_data *VAR_4 = FUNC_0(VAR_2);
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;

 if (VAR_3 > 255)
  return -VAR_0;

 FUNC_2(&VAR_4->update_lock);
 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_3);
 VAR_4->valid = 0;
 FUNC_3(&VAR_4->update_lock);

 return VAR_6;
}
