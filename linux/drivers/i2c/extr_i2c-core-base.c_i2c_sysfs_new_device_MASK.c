
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int detected; } ;
struct i2c_board_info {int addr; int type; int flags; } ;
struct i2c_adapter {int userspace_clients_lock; int userspace_clients; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 size_t FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*,char*,int ,int) ;
 struct i2c_client* FUNC_4 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (struct i2c_board_info*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,int*,char*) ;
 char* FUNC_11 (char const*,char) ;
 struct i2c_adapter* FUNC_12 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_13(struct device *VAR_6, struct device_attribute *VAR_7,
       const char *VAR_8, size_t VAR_9)
{
 struct i2c_adapter *VAR_10 = FUNC_12(VAR_6);
 struct i2c_board_info VAR_11;
 struct i2c_client *VAR_12;
 char *VAR_13, VAR_14;
 int VAR_15;

 FUNC_7(&VAR_11, 0, sizeof(struct i2c_board_info));

 VAR_13 = FUNC_11(VAR_8, ' ');
 if (!VAR_13) {
  FUNC_2(VAR_6, "%s: Missing parameters\n", "new_device");
  return -VAR_0;
 }
 if (VAR_13 - VAR_8 > VAR_5 - 1) {
  FUNC_2(VAR_6, "%s: Invalid device name\n", "new_device");
  return -VAR_0;
 }
 FUNC_6(VAR_11.type, VAR_8, VAR_13 - VAR_8);


 VAR_15 = FUNC_10(++VAR_13, "%hi%c", &VAR_11.addr, &VAR_14);
 if (VAR_15 < 1) {
  FUNC_2(VAR_6, "%s: Can't parse I2C address\n", "new_device");
  return -VAR_0;
 }
 if (VAR_15 > 1 && VAR_14 != '\n') {
  FUNC_2(VAR_6, "%s: Extra parameters\n", "new_device");
  return -VAR_0;
 }

 if ((VAR_11.addr & VAR_2) == VAR_2) {
  VAR_11.addr &= ~VAR_2;
  VAR_11.flags |= VAR_4;
 }

 if (VAR_11.addr & VAR_1) {
  VAR_11.addr &= ~VAR_1;
  VAR_11.flags |= VAR_3;
 }

 VAR_12 = FUNC_4(VAR_10, &VAR_11);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);


 FUNC_8(&VAR_10->userspace_clients_lock);
 FUNC_5(&VAR_12->detected, &VAR_10->userspace_clients);
 FUNC_9(&VAR_10->userspace_clients_lock);
 FUNC_3(VAR_6, "%s: Instantiated device %s at 0x%02hx\n", "new_device",
   VAR_11.type, VAR_11.addr);

 return VAR_9;
}
