
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmbus_driver_info {int pages; int* func; void** format; int read_word_data; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


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
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_0 (int *,char*) ;
 struct pmbus_driver_info* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int*) ;
 int VAR_26 ;
 void* VAR_27 ;
 int FUNC_4 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_28,
    const struct i2c_device_id *VAR_29)
{
 struct pmbus_driver_info *VAR_30;
 u8 VAR_31[VAR_6];
 int VAR_32;

 if (!FUNC_2(VAR_28->adapter,
         VAR_4
    | VAR_5
    | VAR_3))
  return -VAR_0;

 VAR_32 = FUNC_3(VAR_28, VAR_18, VAR_31);
 if (VAR_32 < 0) {
  FUNC_0(&VAR_28->dev, "Failed to read PMBUS_MFR_ID\n");
  return VAR_32;
 }
 if (VAR_32 != 2 || FUNC_6(VAR_31, "RI", FUNC_5("RI"))) {
  FUNC_0(&VAR_28->dev, "MFR_ID unrecognised\n");
  return -VAR_0;
 }

 VAR_32 = FUNC_3(VAR_28, VAR_19, VAR_31);
 if (VAR_32 < 0) {
  FUNC_0(&VAR_28->dev, "Failed to read PMBUS_MFR_MODEL\n");
  return VAR_32;
 }
 if (VAR_32 != 2 || !(VAR_31[0] == 0x6c && VAR_31[1] == 0x00)) {
  FUNC_0(&VAR_28->dev, "MFR_MODEL unrecognised\n");
  return -VAR_0;
 }

 VAR_30 = FUNC_1(&VAR_28->dev, sizeof(struct pmbus_driver_info),
       VAR_2);
 if (!VAR_30)
  return -VAR_1;

 VAR_30->read_word_data = VAR_26;

 VAR_30->pages = 2;
 VAR_30->format[VAR_24] = VAR_27;
 VAR_30->format[VAR_25] = VAR_27;
 VAR_30->format[VAR_20] = VAR_27;
 VAR_30->format[VAR_21] = VAR_27;
 VAR_30->format[VAR_22] = VAR_27;
 VAR_30->format[VAR_23] = VAR_27;

 VAR_30->func[0] = VAR_16
  | VAR_17 | VAR_7
  | VAR_8 | VAR_9
  | VAR_10 | VAR_15
  | VAR_14 | VAR_12
  | VAR_11 | VAR_13;
 VAR_30->func[1] = VAR_30->func[0];

 return FUNC_4(VAR_28, VAR_29, VAR_30);
}
