
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blocking_io; } ;
struct shtc1_data {scalar_t__ nonblocking_wait_time; TYPE_1__ setup; int command; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2,
          struct shtc1_data *VAR_3,
          char *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2, VAR_3->command, VAR_1);
 if (VAR_6 != VAR_1) {
  FUNC_0(&VAR_2->dev, "failed to send command: %d\n", VAR_6);
  return VAR_6 < 0 ? VAR_6 : -VAR_0;
 }







 if (!VAR_3->setup.blocking_io)
  FUNC_3(VAR_3->nonblocking_wait_time,
        VAR_3->nonblocking_wait_time + 1000);

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5);
 if (VAR_6 != VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to read values: %d\n", VAR_6);
  return VAR_6 < 0 ? VAR_6 : -VAR_0;
 }

 return 0;
}
