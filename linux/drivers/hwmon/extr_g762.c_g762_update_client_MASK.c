
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct g762_data {int valid; int set_cnt; int act_cnt; int fan_sta; int set_out; int fan_cmd1; int fan_cmd2; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct device {int dummy; } ;


 struct g762_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct g762_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct g762_data *FUNC_7(struct device *VAR_8)
{
 struct g762_data *VAR_9 = FUNC_1(VAR_8);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11 = 0;

 FUNC_4(&VAR_9->update_lock);
 if (FUNC_6(VAR_7, VAR_9->last_updated + VAR_6) &&
     FUNC_3(VAR_9->valid))
  goto out;

 VAR_11 = FUNC_2(VAR_10, VAR_4);
 if (VAR_11 < 0)
  goto out;
 VAR_9->set_cnt = VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_0);
 if (VAR_11 < 0)
  goto out;
 VAR_9->act_cnt = VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_3);
 if (VAR_11 < 0)
  goto out;
 VAR_9->fan_sta = VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (VAR_11 < 0)
  goto out;
 VAR_9->set_out = VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 < 0)
  goto out;
 VAR_9->fan_cmd1 = VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 if (VAR_11 < 0)
  goto out;
 VAR_9->fan_cmd2 = VAR_11;

 VAR_9->last_updated = VAR_7;
 VAR_9->valid = 1;
 out:
 FUNC_5(&VAR_9->update_lock);

 if (VAR_11 < 0)
  VAR_9 = FUNC_0(VAR_11);

 return VAR_9;
}
