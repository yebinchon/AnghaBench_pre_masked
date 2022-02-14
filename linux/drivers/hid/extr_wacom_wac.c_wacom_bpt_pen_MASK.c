
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {unsigned char distance_max; } ;
struct wacom_wac {unsigned char* data; int* id; int reporting_data; int * tool; TYPE_1__* shared; struct input_dev* pen_input; struct wacom_features features; } ;
struct input_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int stylus_in_proximity; } ;


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
 unsigned char VAR_12 ;
 scalar_t__ FUNC_0 (struct wacom_wac*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_13)
{
 struct wacom_features *VAR_14 = &VAR_13->features;
 struct input_dev *VAR_15 = VAR_13->pen_input;
 unsigned char *VAR_16 = VAR_13->data;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 bool VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 bool VAR_24, VAR_25, VAR_26;

 if (VAR_16[0] != VAR_12)
     return 0;

 VAR_24 = (VAR_16[1] & 0x80) == 0x80;
 VAR_25 = (VAR_16[1] & 0x40) == 0x40;
 VAR_26 = (VAR_16[1] & 0x20) == 0x20;

 VAR_13->shared->stylus_in_proximity = VAR_24;
 if (FUNC_0(VAR_13))
  return 0;

 if (VAR_26) {
  VAR_19 = FUNC_3((__le16 *)&VAR_16[6]);
  VAR_21 = VAR_16[1] & 0x01;
  VAR_22 = VAR_16[1] & 0x02;
  VAR_23 = VAR_16[1] & 0x04;
 }
 if (VAR_25) {
  VAR_17 = FUNC_3((__le16 *)&VAR_16[2]);
  VAR_18 = FUNC_3((__le16 *)&VAR_16[4]);

  if (VAR_16[1] & 0x08) {
   VAR_13->tool[0] = VAR_8;
   VAR_13->id[0] = VAR_10;
  } else {
   VAR_13->tool[0] = VAR_7;
   VAR_13->id[0] = VAR_11;
  }
  VAR_13->reporting_data = 1;
 }
 if (VAR_24) {






  if (VAR_16[8] <= VAR_14->distance_max)
   VAR_20 = VAR_14->distance_max - VAR_16[8];
 } else {
  VAR_13->id[0] = 0;
 }

 if (VAR_13->reporting_data) {
  FUNC_2(VAR_15, VAR_9, VAR_21);
  FUNC_2(VAR_15, VAR_5, VAR_22);
  FUNC_2(VAR_15, VAR_6, VAR_23);

  if (VAR_25 || !VAR_24) {
   FUNC_1(VAR_15, VAR_3, VAR_17);
   FUNC_1(VAR_15, VAR_4, VAR_18);
  }
  FUNC_1(VAR_15, VAR_2, VAR_19);
  FUNC_1(VAR_15, VAR_0, VAR_20);

  FUNC_2(VAR_15, VAR_13->tool[0], VAR_24);
  FUNC_1(VAR_15, VAR_1, VAR_13->id[0]);
 }

 if (!VAR_24) {
  VAR_13->reporting_data = 0;
 }

 return 1;
}
