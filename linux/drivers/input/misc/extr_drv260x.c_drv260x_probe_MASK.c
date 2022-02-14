
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct drv260x_data {int mode; int library; TYPE_1__* input_dev; int regmap; struct i2c_client* client; int work; int enable_gpio; int regulator; void* overdrive_voltage; void* rated_voltage; } ;
struct TYPE_6__ {char* name; int close; } ;


 void* VAR_0 ;
 void* VAR_1 ;
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
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 TYPE_1__* FUNC_6 (struct device*) ;
 struct drv260x_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (struct drv260x_data*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct i2c_client*,struct drv260x_data*) ;
 int FUNC_13 (TYPE_1__*,int *,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 int FUNC_16 (TYPE_1__*,struct drv260x_data*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_17,
    const struct i2c_device_id *VAR_18)
{
 struct device *VAR_19 = &VAR_17->dev;
 struct drv260x_data *VAR_20;
 u32 VAR_21;
 int VAR_22;

 VAR_20 = FUNC_7(VAR_19, sizeof(*VAR_20), VAR_11);
 if (!VAR_20)
  return -VAR_8;

 VAR_22 = FUNC_4(VAR_19, "mode", &VAR_20->mode);
 if (VAR_22) {
  FUNC_3(VAR_19, "Can't fetch 'mode' property: %d\n", VAR_22);
  return VAR_22;
 }

 if (VAR_20->mode < VAR_6 ||
     VAR_20->mode > VAR_3) {
  FUNC_3(VAR_19, "Vibrator mode is invalid: %i\n", VAR_20->mode);
  return -VAR_7;
 }

 VAR_22 = FUNC_4(VAR_19, "library-sel", &VAR_20->library);
 if (VAR_22) {
  FUNC_3(VAR_19, "Can't fetch 'library-sel' property: %d\n", VAR_22);
  return VAR_22;
 }

 if (VAR_20->library < VAR_4 ||
     VAR_20->library > VAR_2) {
  FUNC_3(VAR_19,
   "Library value is invalid: %i\n", VAR_20->library);
  return -VAR_7;
 }

 if (VAR_20->mode == VAR_6 &&
     VAR_20->library != VAR_4 &&
     VAR_20->library != VAR_5) {
  FUNC_3(VAR_19, "LRA Mode with ERM Library mismatch\n");
  return -VAR_7;
 }

 if (VAR_20->mode == VAR_3 &&
     (VAR_20->library == VAR_4 ||
      VAR_20->library == VAR_5)) {
  FUNC_3(VAR_19, "ERM Mode with LRA Library mismatch\n");
  return -VAR_7;
 }

 VAR_22 = FUNC_4(VAR_19, "vib-rated-mv", &VAR_21);
 VAR_20->rated_voltage = VAR_22 ? VAR_1 :
      FUNC_10(VAR_21);

 VAR_22 = FUNC_4(VAR_19, "vib-overdrive-mv", &VAR_21);
 VAR_20->overdrive_voltage = VAR_22 ? VAR_0 :
          FUNC_10(VAR_21);

 VAR_20->regulator = FUNC_9(VAR_19, "vbat");
 if (FUNC_1(VAR_20->regulator)) {
  VAR_22 = FUNC_2(VAR_20->regulator);
  FUNC_3(VAR_19, "unable to get regulator, error: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_20->enable_gpio = FUNC_5(VAR_19, "enable",
             VAR_12);
 if (FUNC_1(VAR_20->enable_gpio))
  return FUNC_2(VAR_20->enable_gpio);

 VAR_20->input_dev = FUNC_6(VAR_19);
 if (!VAR_20->input_dev) {
  FUNC_3(VAR_19, "Failed to allocate input device\n");
  return -VAR_8;
 }

 VAR_20->input_dev->name = "drv260x:haptics";
 VAR_20->input_dev->close = VAR_13;
 FUNC_16(VAR_20->input_dev, VAR_20);
 FUNC_15(VAR_20->input_dev, VAR_9, VAR_10);

 VAR_22 = FUNC_13(VAR_20->input_dev, ((void*)0),
     VAR_14);
 if (VAR_22) {
  FUNC_3(VAR_19, "input_ff_create() failed: %d\n", VAR_22);
  return VAR_22;
 }

 FUNC_0(&VAR_20->work, VAR_16);

 VAR_20->client = VAR_17;
 FUNC_12(VAR_17, VAR_20);

 VAR_20->regmap = FUNC_8(VAR_17, &VAR_15);
 if (FUNC_1(VAR_20->regmap)) {
  VAR_22 = FUNC_2(VAR_20->regmap);
  FUNC_3(VAR_19, "Failed to allocate register map: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_11(VAR_20);
 if (VAR_22) {
  FUNC_3(VAR_19, "Device init failed: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_14(VAR_20->input_dev);
 if (VAR_22) {
  FUNC_3(VAR_19, "couldn't register input device: %d\n", VAR_22);
  return VAR_22;
 }

 return 0;
}
