
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned long gpio1; } ;
struct atxp1_data {scalar_t__ valid; TYPE_1__ reg; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct atxp1_data *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, 16, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8 &= VAR_1;

 if (VAR_8 != (VAR_6->reg.gpio1 & VAR_1)) {
  FUNC_1(VAR_2, "Writing 0x%x to GPIO1.\n", (unsigned int)VAR_8);

  FUNC_2(VAR_7, VAR_0, VAR_8);

  VAR_6->valid = 0;
 }

 return VAR_5;
}
