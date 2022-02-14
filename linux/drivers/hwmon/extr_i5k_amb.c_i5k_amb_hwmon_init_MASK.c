
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct platform_device {int dev; } ;
struct TYPE_7__ {int mode; int name; } ;
struct TYPE_8__ {TYPE_2__ attr; int show; int store; } ;
struct TYPE_6__ {int index; TYPE_3__ dev_attr; } ;
struct i5k_device_attribute {TYPE_1__ s_attr; int name; } ;
struct i5k_amb_data {int* amb_present; int num_attrs; struct i5k_device_attribute* attrs; int hwmon_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i5k_device_attribute*) ;
 struct i5k_device_attribute* FUNC_9 (int ,int ) ;
 struct i5k_amb_data* FUNC_10 (struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,int ,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 u16 VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 struct i5k_amb_data *VAR_24 = FUNC_10(VAR_16);



 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++)
  VAR_23 += FUNC_6(VAR_24->amb_present[VAR_17] & 0x7fff);


 VAR_24->attrs = FUNC_9(FUNC_3(VAR_23, VAR_3,
       sizeof(*VAR_24->attrs)),
         VAR_2);
 if (!VAR_24->attrs)
  return -VAR_1;
 VAR_24->num_attrs = 0;

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
  VAR_21 = VAR_24->amb_present[VAR_17];
  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++, VAR_21 >>= 1) {
   struct i5k_device_attribute *VAR_25;

   VAR_19 = FUNC_2(VAR_17, VAR_18);
   if (!(VAR_21 & 0x1))
    continue;
   VAR_20++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_label", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0444;
   VAR_25->s_attr.dev_attr.show = VAR_12;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_input", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0444;
   VAR_25->s_attr.dev_attr.show = VAR_11;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_min", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0644;
   VAR_25->s_attr.dev_attr.show = VAR_10;
   VAR_25->s_attr.dev_attr.store = VAR_15;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_mid", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0644;
   VAR_25->s_attr.dev_attr.show = VAR_9;
   VAR_25->s_attr.dev_attr.store = VAR_14;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_max", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0644;
   VAR_25->s_attr.dev_attr.show = VAR_8;
   VAR_25->s_attr.dev_attr.store = VAR_13;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;


   VAR_25 = VAR_24->attrs + VAR_24->num_attrs;
   FUNC_11(VAR_25->name, VAR_0,
     "temp%d_alarm", VAR_20);
   VAR_25->s_attr.dev_attr.attr.name = VAR_25->name;
   VAR_25->s_attr.dev_attr.attr.mode = 0444;
   VAR_25->s_attr.dev_attr.show = VAR_7;
   VAR_25->s_attr.index = VAR_19;
   FUNC_12(&VAR_25->s_attr.dev_attr.attr);
   VAR_22 = FUNC_4(&VAR_16->dev,
       &VAR_25->s_attr.dev_attr);
   if (VAR_22)
    goto exit_remove;
   VAR_24->num_attrs++;
  }
 }

 VAR_22 = FUNC_4(&VAR_16->dev, &VAR_6);
 if (VAR_22)
  goto exit_remove;

 VAR_24->hwmon_dev = FUNC_7(&VAR_16->dev);
 if (FUNC_0(VAR_24->hwmon_dev)) {
  VAR_22 = FUNC_1(VAR_24->hwmon_dev);
  goto exit_remove;
 }

 return VAR_22;

exit_remove:
 FUNC_5(&VAR_16->dev, &VAR_6);
 for (VAR_17 = 0; VAR_17 < VAR_24->num_attrs; VAR_17++)
  FUNC_5(&VAR_16->dev, &VAR_24->attrs[VAR_17].s_attr.dev_attr);
 FUNC_8(VAR_24->attrs);

 return VAR_22;
}
