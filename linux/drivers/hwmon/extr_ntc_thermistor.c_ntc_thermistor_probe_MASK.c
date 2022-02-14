
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device_id {size_t driver_data; int name; } ;
struct ntc_thermistor_platform_data {scalar_t__ pullup_uv; scalar_t__ pullup_ohm; scalar_t__ connect; scalar_t__ pulldown_ohm; int * read_uv; scalar_t__ read_ohm; } ;
struct platform_device {struct ntc_thermistor_platform_data dev; } ;
struct of_device_id {struct platform_device_id* data; } ;
struct ntc_data {int n_comp; int comp; struct ntc_thermistor_platform_data* pdata; } ;
struct device {scalar_t__ pullup_uv; scalar_t__ pullup_ohm; scalar_t__ connect; scalar_t__ pulldown_ohm; int * read_uv; scalar_t__ read_ohm; } ;
struct TYPE_3__ {int n_comp; int comp; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ntc_thermistor_platform_data*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ntc_thermistor_platform_data*) ;
 int FUNC_3 (struct ntc_thermistor_platform_data*,char*,...) ;
 struct ntc_thermistor_platform_data* FUNC_4 (struct ntc_thermistor_platform_data*) ;
 int FUNC_5 (struct ntc_thermistor_platform_data*,char*,int ) ;
 int FUNC_6 (struct ntc_thermistor_platform_data*,char*) ;
 struct ntc_thermistor_platform_data* FUNC_7 (struct ntc_thermistor_platform_data*,int ,struct ntc_data*,int *,int *) ;
 struct ntc_data* FUNC_8 (struct ntc_thermistor_platform_data*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ntc_thermistor_platform_data* FUNC_9 (struct ntc_thermistor_platform_data*) ;
 TYPE_1__* VAR_8 ;
 struct of_device_id* FUNC_10 (int ,struct ntc_thermistor_platform_data*) ;
 int FUNC_11 (int ) ;
 struct platform_device_id* FUNC_12 (struct platform_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 const struct of_device_id *VAR_11 =
   FUNC_10(FUNC_11(VAR_7), VAR_10);
 const struct platform_device_id *VAR_12;
 struct ntc_thermistor_platform_data *VAR_13;
 struct device *VAR_14;
 struct ntc_data *VAR_15;

 VAR_13 = FUNC_9(VAR_10);
 if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);
 else if (VAR_13 == ((void*)0))
  VAR_13 = FUNC_4(VAR_10);

 if (!VAR_13) {
  FUNC_3(VAR_10, "No platform init data supplied.\n");
  return -VAR_1;
 }


 if (!VAR_13->read_uv && !VAR_13->read_ohm) {
  FUNC_3(VAR_10,
   "Both read_uv and read_ohm missing. Need either one of the two.\n");
  return -VAR_0;
 }

 if (VAR_13->read_uv && VAR_13->read_ohm) {
  FUNC_6(VAR_10,
    "Only one of read_uv and read_ohm is needed; ignoring read_uv.\n");
  VAR_13->read_uv = ((void*)0);
 }

 if (VAR_13->read_uv && (VAR_13->pullup_uv == 0 ||
    (VAR_13->pullup_ohm == 0 && VAR_13->connect ==
     VAR_4) ||
    (VAR_13->pulldown_ohm == 0 && VAR_13->connect ==
     VAR_5) ||
    (VAR_13->connect != VAR_5 &&
     VAR_13->connect != VAR_4))) {
  FUNC_3(VAR_10, "Required data to use read_uv not supplied.\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_8(VAR_10, sizeof(struct ntc_data), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_12 = VAR_11 ? VAR_11->data : FUNC_12(VAR_9);

 VAR_15->pdata = VAR_13;

 if (VAR_12->driver_data >= FUNC_0(VAR_8)) {
  FUNC_3(VAR_10, "Unknown device type: %lu(%s)\n",
    VAR_12->driver_data, VAR_12->name);
  return -VAR_0;
 }

 VAR_15->comp = VAR_8[VAR_12->driver_data].comp;
 VAR_15->n_comp = VAR_8[VAR_12->driver_data].n_comp;

 VAR_14 = FUNC_7(VAR_10, VAR_12->name,
        VAR_15, &VAR_6,
        ((void*)0));
 if (FUNC_1(VAR_14)) {
  FUNC_3(VAR_10, "unable to register as hwmon device.\n");
  return FUNC_2(VAR_14);
 }

 FUNC_5(VAR_10, "Thermistor type: %s successfully probed.\n",
   VAR_12->name);

 return 0;
}
