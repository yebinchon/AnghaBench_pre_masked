
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mode; int * name; } ;
struct TYPE_5__ {TYPE_2__ attr; int show; } ;
struct sensor_device_attribute {int index; TYPE_1__ dev_attr; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {TYPE_2__** attrs; } ;
struct iio_hwmon_state {size_t num_channels; TYPE_4__** groups; TYPE_4__ attr_group; TYPE_2__** attrs; struct iio_channel* channels; } ;
struct iio_channel {scalar_t__ indio_dev; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ FUNC_0 (struct iio_channel*) ;
 int FUNC_1 (struct iio_channel*) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (struct device*,char*,struct iio_hwmon_state*,TYPE_4__**) ;
 struct iio_channel* FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,int ,char*,char const*,...) ;
 TYPE_2__** FUNC_6 (struct device*,int,int,int ) ;
 void* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct iio_channel*,int*) ;
 int VAR_5 ;
 int FUNC_9 (char*,char,char) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct iio_hwmon_state *VAR_8;
 struct sensor_device_attribute *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 1, VAR_13 = 1, VAR_14 = 1, VAR_15 = 1, VAR_16 = 1;
 enum iio_chan_type VAR_17;
 struct iio_channel *VAR_18;
 struct device *VAR_19;
 char *VAR_20;

 VAR_18 = FUNC_4(VAR_7);
 if (FUNC_0(VAR_18)) {
  if (FUNC_1(VAR_18) == -VAR_1)
   return -VAR_3;
  return FUNC_1(VAR_18);
 }

 VAR_8 = FUNC_7(VAR_7, sizeof(*VAR_8), VAR_4);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_8->channels = VAR_18;


 while (VAR_8->channels[VAR_8->num_channels].indio_dev)
  VAR_8->num_channels++;

 VAR_8->attrs = FUNC_6(VAR_7,
     VAR_8->num_channels + 1, sizeof(*VAR_8->attrs),
     VAR_4);
 if (VAR_8->attrs == ((void*)0))
  return -VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_channels; VAR_11++) {
  const char *VAR_21;
  int VAR_22;

  VAR_9 = FUNC_7(VAR_7, sizeof(*VAR_9), VAR_4);
  if (VAR_9 == ((void*)0))
   return -VAR_2;

  FUNC_10(&VAR_9->dev_attr.attr);
  VAR_10 = FUNC_8(&VAR_8->channels[VAR_11], &VAR_17);
  if (VAR_10 < 0)
   return VAR_10;

  switch (VAR_17) {
  case 128:
   VAR_22 = VAR_12++;
   VAR_21 = "in";
   break;
  case 129:
   VAR_22 = VAR_13++;
   VAR_21 = "temp";
   break;
  case 132:
   VAR_22 = VAR_14++;
   VAR_21 = "curr";
   break;
  case 130:
   VAR_22 = VAR_16++;
   VAR_21 = "power";
   break;
  case 131:
   VAR_22 = VAR_15++;
   VAR_21 = "humidity";
   break;
  default:
   return -VAR_0;
  }

  VAR_9->dev_attr.attr.name = FUNC_5(VAR_7, VAR_4,
             "%s%d_input",
             VAR_21, VAR_22);
  if (VAR_9->dev_attr.attr.name == ((void*)0))
   return -VAR_2;

  VAR_9->dev_attr.show = VAR_5;
  VAR_9->dev_attr.attr.mode = 0444;
  VAR_9->index = VAR_11;
  VAR_8->attrs[VAR_11] = &VAR_9->dev_attr.attr;
 }

 VAR_8->attr_group.attrs = VAR_8->attrs;
 VAR_8->groups[0] = &VAR_8->attr_group;

 if (VAR_7->of_node) {
  VAR_20 = FUNC_5(VAR_7, VAR_4, "%pOFn", VAR_7->of_node);
  if (!VAR_20)
   return -VAR_2;
  FUNC_9(VAR_20, '-', '_');
 } else {
  VAR_20 = "iio_hwmon";
 }

 VAR_19 = FUNC_3(VAR_7, VAR_20, VAR_8,
          VAR_8->groups);
 return FUNC_2(VAR_19);
}
