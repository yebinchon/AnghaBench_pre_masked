
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntrig_data {int sensor_logical_width; int sensor_physical_width; int activation_width; int min_width; int sensor_logical_height; int sensor_physical_height; int activation_height; int min_height; } ;
struct hid_usage {int hid; } ;
struct hid_input {int input; } ;
struct hid_field {int logical_minimum; int logical_maximum; int physical_maximum; int physical_minimum; scalar_t__ physical; } ;
struct hid_device {int dummy; } ;


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
 struct ntrig_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_13, struct hid_input *VAR_14,
          struct hid_field *VAR_15, struct hid_usage *VAR_16,
          unsigned long **VAR_17, int *VAR_18)
{
 struct ntrig_data *VAR_19 = FUNC_0(VAR_13);


 if (VAR_15->physical)
  return 0;

 switch (VAR_16->hid & VAR_8) {
 case 128:
  switch (VAR_16->hid) {
  case 131:
   FUNC_1(VAR_14, VAR_16, VAR_17, VAR_18,
     VAR_7, VAR_1);
   FUNC_2(VAR_14->input, VAR_5,
     VAR_15->logical_minimum,
     VAR_15->logical_maximum, 0, 0);

   if (!VAR_19->sensor_logical_width) {
    VAR_19->sensor_logical_width =
     VAR_15->logical_maximum -
     VAR_15->logical_minimum;
    VAR_19->sensor_physical_width =
     VAR_15->physical_maximum -
     VAR_15->physical_minimum;
    VAR_19->activation_width = VAR_10 *
     VAR_19->sensor_logical_width /
     VAR_19->sensor_physical_width;
    VAR_19->min_width = VAR_12 *
     VAR_19->sensor_logical_width /
     VAR_19->sensor_physical_width;
   }
   return 1;
  case 130:
   FUNC_1(VAR_14, VAR_16, VAR_17, VAR_18,
     VAR_7, VAR_2);
   FUNC_2(VAR_14->input, VAR_6,
     VAR_15->logical_minimum,
     VAR_15->logical_maximum, 0, 0);

   if (!VAR_19->sensor_logical_height) {
    VAR_19->sensor_logical_height =
     VAR_15->logical_maximum -
     VAR_15->logical_minimum;
    VAR_19->sensor_physical_height =
     VAR_15->physical_maximum -
     VAR_15->physical_minimum;
    VAR_19->activation_height = VAR_9 *
     VAR_19->sensor_logical_height /
     VAR_19->sensor_physical_height;
    VAR_19->min_height = VAR_11 *
     VAR_19->sensor_logical_height /
     VAR_19->sensor_physical_height;
   }
   return 1;
  }
  return 0;

 case 129:
  switch (VAR_16->hid) {

  case 137:
  case 133:
  case 135:
  case 136:
   return -1;


  case 132:
   FUNC_1(VAR_14, VAR_16, VAR_17, VAR_18,
          VAR_7, VAR_3);
   return 1;
  case 134:
   FUNC_1(VAR_14, VAR_16, VAR_17, VAR_18,
          VAR_7, VAR_4);
   FUNC_2(VAR_14->input, VAR_0,
          0, 1, 0, 0);
   return 1;
  }
  return 0;

 case 0xff000000:

  return -1;
 }

 return 0;
}
