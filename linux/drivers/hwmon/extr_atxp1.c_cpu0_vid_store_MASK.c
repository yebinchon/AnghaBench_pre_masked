
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int vid; int cpu_vid; } ;
struct atxp1_data {scalar_t__ valid; TYPE_1__ reg; int vrm; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4, const char *VAR_5,
         size_t VAR_6)
{
 struct atxp1_data *VAR_7 = FUNC_0(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_5, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11 /= 25;
 VAR_11 *= 25;


 VAR_9 = FUNC_5(VAR_11, VAR_7->vrm);
 if (VAR_9 < 0) {
  FUNC_2(VAR_3, "VID calculation failed.\n");
  return VAR_9;
 }





 if (VAR_7->reg.vid & VAR_1)
  VAR_10 = VAR_7->reg.vid & VAR_2;
 else
  VAR_10 = VAR_7->reg.cpu_vid;


 if (VAR_9 == VAR_10)
  return VAR_6;

 FUNC_1(VAR_3, "Setting VCore to %d mV (0x%02x)\n", (int)VAR_11, VAR_9);


 if (VAR_10 > VAR_9) {
  for (; VAR_10 >= VAR_9; VAR_10--)
   FUNC_3(VAR_8,
      VAR_0, VAR_10 | VAR_1);
 } else {
  for (; VAR_10 <= VAR_9; VAR_10++)
   FUNC_3(VAR_8,
      VAR_0, VAR_10 | VAR_1);
 }

 VAR_7->valid = 0;

 return VAR_6;
}
