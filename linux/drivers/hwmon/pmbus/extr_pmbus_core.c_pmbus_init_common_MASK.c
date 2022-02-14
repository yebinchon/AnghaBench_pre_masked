
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_driver_info {int (* identify ) (struct i2c_client*,struct pmbus_driver_info*) ;int pages; } ;
struct pmbus_data {int has_status_word; TYPE_1__* info; int read_status; } ;
struct device {int dummy; } ;
struct i2c_client {int flags; struct device dev; } ;
struct TYPE_2__ {scalar_t__ pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,struct pmbus_data*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct i2c_client*,struct pmbus_driver_info*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_9, struct pmbus_data *VAR_10,
        struct pmbus_driver_info *VAR_11)
{
 struct device *VAR_12 = &VAR_9->dev;
 int VAR_13, VAR_14;






 VAR_10->read_status = VAR_8;
 VAR_14 = FUNC_2(VAR_9, VAR_6);
 if (VAR_14 < 0 || VAR_14 == 0xffff) {
  VAR_10->read_status = VAR_7;
  VAR_14 = FUNC_1(VAR_9, VAR_5);
  if (VAR_14 < 0 || VAR_14 == 0xff) {
   FUNC_0(VAR_12, "PMBus status register not found\n");
   return -VAR_0;
  }
 } else {
  VAR_10->has_status_word = 1;
 }


 VAR_14 = FUNC_1(VAR_9, VAR_3);
 if (VAR_14 >= 0 && (VAR_14 & VAR_2))
  VAR_9->flags |= VAR_1;

 if (VAR_10->info->pages)
  FUNC_4(VAR_9);
 else
  FUNC_3(VAR_9, -1);

 if (VAR_11->identify) {
  VAR_14 = (*VAR_11->identify)(VAR_9, VAR_11);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12, "Chip identification failed\n");
   return VAR_14;
  }
 }

 if (VAR_11->pages <= 0 || VAR_11->pages > VAR_4) {
  FUNC_0(VAR_12, "Bad number of PMBus pages: %d\n", VAR_11->pages);
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->pages; VAR_13++) {
  VAR_14 = FUNC_5(VAR_9, VAR_10, VAR_13);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12, "Failed to identify chip capabilities\n");
   return VAR_14;
  }
 }
 return 0;
}
