
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max11801_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct max11801_data *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_6->client;


 FUNC_0(VAR_7, VAR_2, 0xff);

 FUNC_0(VAR_7, VAR_4, 0x11);

 FUNC_0(VAR_7, VAR_5, 0x10);

 FUNC_0(VAR_7, VAR_1, 0xaa);

 FUNC_0(VAR_7, VAR_0, 0x33);

 FUNC_0(VAR_7, VAR_3, 0x36);
}
