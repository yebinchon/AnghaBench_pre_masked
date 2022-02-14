
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct thermal_zone_device {int dummy; } ;
struct TYPE_9__ {int class; int sensor_id; } ;
struct TYPE_8__ {int mode; int name; } ;
struct TYPE_7__ {TYPE_3__ attr; int show; } ;
struct TYPE_6__ {TYPE_3__ attr; int show; } ;
struct sensor_data {TYPE_4__ info; TYPE_2__ dev_attr_label; TYPE_1__ dev_attr_input; int label; int input; int scale; } ;
struct scpi_thermal_zone {int sensor_id; struct scpi_sensors* scpi_sensors; } ;
struct TYPE_10__ {TYPE_3__** attrs; } ;
struct scpi_sensors {struct sensor_data* data; int thermal_zones; TYPE_5__** groups; TYPE_5__ group; TYPE_3__** attrs; struct scpi_ops* scpi_ops; } ;
struct scpi_ops {int (* sensor_get_capability ) (int*) ;int (* sensor_get_info ) (int,TYPE_4__*) ;} ;
struct platform_device {struct thermal_zone_device dev; } ;
struct of_device_id {int * data; } ;
typedef struct thermal_zone_device device ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;

 int FUNC_2 (struct thermal_zone_device*) ;


 int FUNC_3 (struct thermal_zone_device*,char*) ;
 struct thermal_zone_device* FUNC_4 (struct thermal_zone_device*,char*,struct scpi_sensors*,TYPE_5__**) ;
 void* FUNC_5 (struct thermal_zone_device*,int,int,int ) ;
 int FUNC_6 (struct thermal_zone_device*,struct scpi_thermal_zone*) ;
 void* FUNC_7 (struct thermal_zone_device*,int,int ) ;
 struct thermal_zone_device* FUNC_8 (struct thermal_zone_device*,int ,struct scpi_thermal_zone*,int *) ;
 struct scpi_ops* FUNC_9 () ;
 struct of_device_id* FUNC_10 (int ,struct thermal_zone_device*) ;
 int FUNC_11 (struct platform_device*,struct scpi_sensors*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,int,char*,int) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int,TYPE_4__*) ;
 int FUNC_15 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_8)
{
 u16 VAR_9, VAR_10;
 const u32 *VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0;
 struct scpi_ops *VAR_17;
 struct device *VAR_18, *VAR_19 = &VAR_8->dev;
 struct scpi_sensors *VAR_20;
 const struct of_device_id *VAR_21;
 int VAR_22, VAR_23;

 VAR_17 = FUNC_9();
 if (!VAR_17)
  return -VAR_2;

 VAR_23 = VAR_17->sensor_get_capability(&VAR_9);
 if (VAR_23)
  return VAR_23;

 if (!VAR_9)
  return -VAR_0;

 VAR_20 = FUNC_7(VAR_19, sizeof(*VAR_20), VAR_3);
 if (!VAR_20)
  return -VAR_1;

 VAR_20->data = FUNC_5(VAR_19, VAR_9,
       sizeof(*VAR_20->data), VAR_3);
 if (!VAR_20->data)
  return -VAR_1;

 VAR_20->attrs = FUNC_5(VAR_19, (VAR_9 * 2) + 1,
       sizeof(*VAR_20->attrs), VAR_3);
 if (!VAR_20->attrs)
  return -VAR_1;

 VAR_20->scpi_ops = VAR_17;

 VAR_21 = FUNC_10(VAR_4, &VAR_8->dev);
 if (!VAR_21) {
  FUNC_3(&VAR_8->dev, "Unable to initialize scpi-hwmon data\n");
  return -VAR_0;
 }
 VAR_11 = VAR_21->data;

 for (VAR_10 = 0, VAR_22 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct sensor_data *VAR_24 = &VAR_20->data[VAR_22];

  VAR_23 = VAR_17->sensor_get_info(VAR_10, &VAR_24->info);
  if (VAR_23)
   return VAR_23;

  switch (VAR_24->info.class) {
  case 129:
   FUNC_12(VAR_24->input, sizeof(VAR_24->input),
     "temp%d_input", VAR_12 + 1);
   FUNC_12(VAR_24->label, sizeof(VAR_24->input),
     "temp%d_label", VAR_12 + 1);
   VAR_12++;
   break;
  case 128:
   FUNC_12(VAR_24->input, sizeof(VAR_24->input),
     "in%d_input", VAR_13);
   FUNC_12(VAR_24->label, sizeof(VAR_24->input),
     "in%d_label", VAR_13);
   VAR_13++;
   break;
  case 132:
   FUNC_12(VAR_24->input, sizeof(VAR_24->input),
     "curr%d_input", VAR_14 + 1);
   FUNC_12(VAR_24->label, sizeof(VAR_24->input),
     "curr%d_label", VAR_14 + 1);
   VAR_14++;
   break;
  case 130:
   FUNC_12(VAR_24->input, sizeof(VAR_24->input),
     "power%d_input", VAR_15 + 1);
   FUNC_12(VAR_24->label, sizeof(VAR_24->input),
     "power%d_label", VAR_15 + 1);
   VAR_15++;
   break;
  case 131:
   FUNC_12(VAR_24->input, sizeof(VAR_24->input),
     "energy%d_input", VAR_16 + 1);
   FUNC_12(VAR_24->label, sizeof(VAR_24->input),
     "energy%d_label", VAR_16 + 1);
   VAR_16++;
   break;
  default:
   continue;
  }

  VAR_24->scale = VAR_11[VAR_24->info.class];

  VAR_24->dev_attr_input.attr.mode = 0444;
  VAR_24->dev_attr_input.show = VAR_7;
  VAR_24->dev_attr_input.attr.name = VAR_24->input;

  VAR_24->dev_attr_label.attr.mode = 0444;
  VAR_24->dev_attr_label.show = VAR_6;
  VAR_24->dev_attr_label.attr.name = VAR_24->label;

  VAR_20->attrs[VAR_22 << 1] = &VAR_24->dev_attr_input.attr;
  VAR_20->attrs[(VAR_22 << 1) + 1] = &VAR_24->dev_attr_label.attr;

  FUNC_15(VAR_20->attrs[VAR_22 << 1]);
  FUNC_15(VAR_20->attrs[(VAR_22 << 1) + 1]);
  VAR_22++;
 }

 VAR_20->group.attrs = VAR_20->attrs;
 VAR_20->groups[0] = &VAR_20->group;

 FUNC_11(VAR_8, VAR_20);

 VAR_18 = FUNC_4(VAR_19,
   "scpi_sensors", VAR_20, VAR_20->groups);

 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);
 FUNC_0(&VAR_20->thermal_zones);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct sensor_data *VAR_25 = &VAR_20->data[VAR_10];
  struct thermal_zone_device *VAR_26;
  struct scpi_thermal_zone *VAR_27;

  if (VAR_25->info.class != 129)
   continue;

  VAR_27 = FUNC_7(VAR_19, sizeof(*VAR_27), VAR_3);
  if (!VAR_27)
   return -VAR_1;

  VAR_27->sensor_id = VAR_10;
  VAR_27->scpi_sensors = VAR_20;
  VAR_26 = FUNC_8(VAR_19,
        VAR_25->info.sensor_id,
        VAR_27,
        &VAR_5);






  if (FUNC_1(VAR_26))
   FUNC_6(VAR_19, VAR_27);
 }

 return 0;
}
