
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char u8 ;
struct pmbus_driver_info {int pages; int* func; int read_byte_data; } ;
struct ucd9000_data {char** fan_data; struct pmbus_driver_info info; } ;
struct i2c_device_id {int driver_data; scalar_t__* name; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int FUNC_0 (char) ;

 int FUNC_1 (char) ;


 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 struct ucd9000_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct i2c_client*,int ,char*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (scalar_t__*,char*,int ) ;
 int VAR_23 ;
 struct i2c_device_id* VAR_24 ;
 int FUNC_15 (struct i2c_client*,struct i2c_device_id const*,struct ucd9000_data*) ;
 int FUNC_16 (struct i2c_client*,struct i2c_device_id const*,struct ucd9000_data*) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_27,
    const struct i2c_device_id *VAR_28)
{
 u8 VAR_29[VAR_5 + 1];
 struct ucd9000_data *VAR_30;
 struct pmbus_driver_info *VAR_31;
 const struct i2c_device_id *VAR_32;
 enum chips VAR_33;
 int VAR_34, VAR_35;

 if (!FUNC_7(VAR_27->adapter,
         VAR_4 |
         VAR_3))
  return -VAR_0;

 VAR_35 = FUNC_8(VAR_27, VAR_17,
     VAR_29);
 if (VAR_35 < 0) {
  FUNC_2(&VAR_27->dev, "Failed to read device ID\n");
  return VAR_35;
 }
 VAR_29[VAR_35] = '\0';
 FUNC_3(&VAR_27->dev, "Device ID %s\n", VAR_29);

 for (VAR_32 = VAR_24; VAR_32->name[0]; VAR_32++) {
  if (!FUNC_14(VAR_32->name, VAR_29, FUNC_13(VAR_32->name)))
   break;
 }
 if (!VAR_32->name[0]) {
  FUNC_2(&VAR_27->dev, "Unsupported device\n");
  return -VAR_0;
 }

 if (VAR_27->dev.of_node)
  VAR_33 = (enum chips)FUNC_11(&VAR_27->dev);
 else
  VAR_33 = VAR_28->driver_data;

 if (VAR_33 != VAR_23 && VAR_33 != VAR_32->driver_data)
  FUNC_4(&VAR_27->dev,
      "Device mismatch: Configured %s, detected %s\n",
      VAR_28->name, VAR_32->name);

 VAR_30 = FUNC_6(&VAR_27->dev, sizeof(struct ucd9000_data),
       VAR_2);
 if (!VAR_30)
  return -VAR_1;
 VAR_31 = &VAR_30->info;

 VAR_35 = FUNC_9(VAR_27, VAR_22);
 if (VAR_35 < 0) {
  FUNC_2(&VAR_27->dev,
   "Failed to read number of active pages\n");
  return VAR_35;
 }
 VAR_31->pages = VAR_35;
 if (!VAR_31->pages) {
  FUNC_2(&VAR_27->dev, "No pages configured\n");
  return -VAR_0;
 }


 VAR_31->func[0] = VAR_14;


 VAR_35 = FUNC_8(VAR_27, VAR_20,
     VAR_29);
 if (VAR_35 <= 0) {
  FUNC_2(&VAR_27->dev, "Failed to read configuration data\n");
  return -VAR_0;
 }
 for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34++) {
  int VAR_36 = FUNC_0(VAR_29[VAR_34]);

  if (VAR_36 >= VAR_31->pages)
   continue;

  switch (FUNC_1(VAR_29[VAR_34])) {
  case 129:
  case 128:
   VAR_31->func[VAR_36] |= VAR_16
     | VAR_13;
   break;
  case 130:
   VAR_31->func[VAR_36] |= VAR_15
     | VAR_12;
   break;
  case 131:
   VAR_31->func[VAR_36] |= VAR_8
     | VAR_11;
   break;
  default:
   break;
  }
 }


 if (VAR_32->driver_data == VAR_26) {
  for (VAR_34 = 0; VAR_34 < VAR_21; VAR_34++) {
   FUNC_10(VAR_27,
        VAR_19, VAR_34);
   VAR_35 = FUNC_8(VAR_27,
       VAR_18,
       VAR_30->fan_data[VAR_34]);
   if (VAR_35 < 0)
    return VAR_35;
  }
  FUNC_10(VAR_27, VAR_19, 0);

  VAR_31->read_byte_data = VAR_25;
  VAR_31->func[0] |= VAR_6 | VAR_9
    | VAR_7 | VAR_10;
 }

 FUNC_16(VAR_27, VAR_32, VAR_30);

 VAR_35 = FUNC_12(VAR_27, VAR_32, VAR_31);
 if (VAR_35)
  return VAR_35;

 VAR_35 = FUNC_15(VAR_27, VAR_32, VAR_30);
 if (VAR_35)
  FUNC_5(&VAR_27->dev, "Failed to register debugfs: %d\n",
    VAR_35);

 return 0;
}
