
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lg_drv_data {int quirks; } ;
struct hid_usage {unsigned int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {scalar_t__ application; } ;
struct hid_device {scalar_t__ product; } ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct lg_drv_data* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int const) ;
 scalar_t__ FUNC_3 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;
 scalar_t__ FUNC_4 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;
 scalar_t__ FUNC_5 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_10, struct hid_input *VAR_11,
  struct hid_field *VAR_12, struct hid_usage *VAR_13,
  unsigned long **VAR_14, int *VAR_15)
{


 static const u8 VAR_16[] = {
    0,216, 0,213,175,156, 0, 0, 0, 0,
  144, 0, 0, 0, 0, 0, 0, 0, 0,212,
  174,167,152,161,112, 0, 0, 0,154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,183,184,185,186,187,
  188,189,190,191,192,193,194, 0, 0, 0
 };
 struct lg_drv_data *VAR_17 = FUNC_1(VAR_10);
 unsigned int VAR_18 = VAR_13->hid;

 if (VAR_10->product == VAR_9 &&
   FUNC_4(VAR_11, VAR_13, VAR_14, VAR_15))
  return 1;

 if (VAR_10->product == VAR_8 &&
   FUNC_3(VAR_11, VAR_13, VAR_14, VAR_15))
  return 1;

 if ((VAR_17->quirks & VAR_7) && FUNC_5(VAR_11, VAR_13, VAR_14, VAR_15))
  return 1;

 if ((VAR_18 & VAR_4) != VAR_2)
  return 0;

 VAR_18 &= VAR_3;


 if (VAR_12->application == VAR_1) {
  if ((VAR_17->quirks & VAR_6) &&
    (VAR_18 == 7 || VAR_18 == 8))
   return -1;
 } else {
  if ((VAR_17->quirks & VAR_5) &&
    VAR_18 < FUNC_0(VAR_16) &&
    VAR_16[VAR_18] != 0) {
   FUNC_2(VAR_11, VAR_13, VAR_14, VAR_15, VAR_0,
     VAR_16[VAR_18]);
   return 1;
  }
 }

 return 0;
}
