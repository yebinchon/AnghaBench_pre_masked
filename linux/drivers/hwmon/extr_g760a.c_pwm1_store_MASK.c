
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct g760a_data {int update_lock; int set_cnt; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ,int) ;
 struct g760a_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct g760a_data *VAR_6 = FUNC_2(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;

 if (FUNC_4(VAR_4, 10, &VAR_8))
  return -VAR_0;

 FUNC_5(&VAR_6->update_lock);
 VAR_6->set_cnt = FUNC_0(FUNC_1(VAR_8, 0, 255));
 FUNC_3(VAR_7, VAR_1, VAR_6->set_cnt);
 FUNC_6(&VAR_6->update_lock);

 return VAR_5;
}
