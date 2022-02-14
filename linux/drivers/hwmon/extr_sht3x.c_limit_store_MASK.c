
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sht3x_limit_commands {int write_command; } ;
struct sht3x_data {int* temperature_limits; int* humidity_limits; int i2c_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int buffer ;
typedef int __be16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int ,char*,int,int ) ;
 struct sht3x_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,char*,int) ;
 struct sht3x_limit_commands* VAR_5 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_7(struct device *VAR_7,
     size_t VAR_8,
     u8 VAR_9,
     int VAR_10,
     u32 VAR_11)
{
 char VAR_12[VAR_1 + VAR_4 + VAR_3];
 char *VAR_13 = VAR_12;
 int VAR_14;
 u16 VAR_15;
 struct sht3x_data *VAR_16 = FUNC_2(VAR_7);
 struct i2c_client *VAR_17 = VAR_16->client;
 const struct sht3x_limit_commands *VAR_18;

 VAR_18 = &VAR_5[VAR_9];

 FUNC_4(VAR_13, VAR_18->write_command, VAR_1);
 VAR_13 += VAR_1;






 VAR_15 = ((u32)(VAR_10 + 45000) * 24543) >> (16 + 7);
 VAR_15 |= ((VAR_11 * 42950) >> 16) & 0xfe00;

 *((__be16 *)VAR_13) = FUNC_0(VAR_15);
 VAR_13 += VAR_4;
 *VAR_13 = FUNC_1(VAR_6,
    VAR_13 - VAR_4,
    VAR_4,
    VAR_2);

 FUNC_5(&VAR_16->i2c_lock);
 VAR_14 = FUNC_3(VAR_17, VAR_12, sizeof(VAR_12));
 FUNC_6(&VAR_16->i2c_lock);

 if (VAR_14 != sizeof(VAR_12))
  return VAR_14 < 0 ? VAR_14 : -VAR_0;

 VAR_16->temperature_limits[VAR_9] = VAR_10;
 VAR_16->humidity_limits[VAR_9] = VAR_11;
 return VAR_8;
}
