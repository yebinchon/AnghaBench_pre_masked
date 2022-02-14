
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;
struct ams_iaqcore_data {int buffer; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct ams_iaqcore_data *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;

 struct i2c_msg VAR_5 = {
  .addr = VAR_3->addr,
  .flags = VAR_3->flags | VAR_1,
  .len = VAR_0,
  .buf = (char *) &VAR_2->buffer,
 };

 VAR_4 = FUNC_0(VAR_3->adapter, &VAR_5, 1);

 return (VAR_4 == VAR_0) ? 0 : VAR_4;
}
