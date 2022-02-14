
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int valid; int* rpm_output; int* fan_fault; int config; int status; int duty_cycle; int update_lock; scalar_t__ last_updated; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct tc654_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tc654_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct tc654_data *FUNC_9(struct device *VAR_5)
{
 struct tc654_data *VAR_6 = FUNC_3(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = 0;

 FUNC_6(&VAR_6->update_lock);
 if (FUNC_8(VAR_4, VAR_6->last_updated + VAR_3) &&
     FUNC_5(VAR_6->valid))
  goto out;

 VAR_8 = FUNC_4(VAR_7, FUNC_2(0));
 if (VAR_8 < 0)
  goto out;
 VAR_6->rpm_output[0] = VAR_8;

 VAR_8 = FUNC_4(VAR_7, FUNC_2(1));
 if (VAR_8 < 0)
  goto out;
 VAR_6->rpm_output[1] = VAR_8;

 VAR_8 = FUNC_4(VAR_7, FUNC_1(0));
 if (VAR_8 < 0)
  goto out;
 VAR_6->fan_fault[0] = VAR_8;

 VAR_8 = FUNC_4(VAR_7, FUNC_1(1));
 if (VAR_8 < 0)
  goto out;
 VAR_6->fan_fault[1] = VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_0);
 if (VAR_8 < 0)
  goto out;
 VAR_6->config = VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_2);
 if (VAR_8 < 0)
  goto out;
 VAR_6->status = VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_8 < 0)
  goto out;
 VAR_6->duty_cycle = VAR_8 & 0x0f;

 VAR_6->last_updated = VAR_4;
 VAR_6->valid = 1;
out:
 FUNC_7(&VAR_6->update_lock);

 if (VAR_8 < 0)
  VAR_6 = FUNC_0(VAR_8);

 return VAR_6;
}
