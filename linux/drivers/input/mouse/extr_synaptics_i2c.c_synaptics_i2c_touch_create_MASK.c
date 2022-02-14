
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int dwork; int scan_rate_param; int no_decel_param; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct synaptics_i2c* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct synaptics_i2c*,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct synaptics_i2c *FUNC_3(struct i2c_client *VAR_4)
{
 struct synaptics_i2c *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct synaptics_i2c), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->client = VAR_4;
 VAR_5->no_decel_param = VAR_1;
 VAR_5->scan_rate_param = VAR_2;
 FUNC_2(VAR_5, VAR_2);
 FUNC_0(&VAR_5->dwork, VAR_3);

 return VAR_5;
}
