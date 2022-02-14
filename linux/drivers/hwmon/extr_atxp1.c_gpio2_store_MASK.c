
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned long gpio2; } ;
struct atxp1_data {scalar_t__ valid; TYPE_1__ reg; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct atxp1_data *VAR_5 = FUNC_0(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 16, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_7 &= 0xff;

 if (VAR_7 != VAR_5->reg.gpio2) {
  FUNC_1(VAR_1, "Writing 0x%x to GPIO1.\n", (unsigned int)VAR_7);

  FUNC_2(VAR_6, VAR_0, VAR_7);

  VAR_5->valid = 0;
 }

 return VAR_4;
}
