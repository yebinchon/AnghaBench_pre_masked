
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lidar_data {struct i2c_client* client; } ;
struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct lidar_data *VAR_3, u8 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = VAR_3->client;
 struct i2c_msg VAR_8[2];
 int VAR_9;

 VAR_8[0].addr = VAR_7->addr;
 VAR_8[0].flags = VAR_7->flags | VAR_2;
 VAR_8[0].len = 1;
 VAR_8[0].buf = (char *) &VAR_4;

 VAR_8[1].addr = VAR_7->addr;
 VAR_8[1].flags = VAR_7->flags | VAR_1;
 VAR_8[1].len = VAR_6;
 VAR_8[1].buf = (char *) VAR_5;

 VAR_9 = FUNC_0(VAR_7->adapter, VAR_8, 2);

 return (VAR_9 == 2) ? 0 : -VAR_0;
}
