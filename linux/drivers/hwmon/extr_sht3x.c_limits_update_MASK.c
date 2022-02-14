
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sht3x_limit_commands {int read_command; } ;
struct sht3x_data {int* temperature_limits; int * humidity_limits; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int __be16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sht3x_limit_commands* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i2c_client*,struct sht3x_data*,int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct sht3x_data *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 int VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 char VAR_9[VAR_1];
 const struct sht3x_limit_commands *VAR_10;
 struct i2c_client *VAR_11 = VAR_3->client;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_10 = &VAR_2[VAR_5];
  VAR_4 = FUNC_3(VAR_11, VAR_3,
           VAR_10->read_command, VAR_9,
           VAR_1, 0);

  if (VAR_4)
   return VAR_4;

  VAR_8 = FUNC_0((__be16 *)VAR_9);
  VAR_6 = FUNC_2((VAR_8 & 0x01ff) << 7);
  VAR_7 = FUNC_1(VAR_8 & 0xfe00);
  VAR_3->temperature_limits[VAR_5] = VAR_6;
  VAR_3->humidity_limits[VAR_5] = VAR_7;
 }

 return VAR_4;
}
