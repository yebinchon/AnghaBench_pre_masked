
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ offset_bottom; scalar_t__ offset_top; scalar_t__ offset_right; scalar_t__ offset_left; } ;
struct wacom_wac {struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int evbit; } ;
struct hid_usage {int type; void* code; int hid; } ;
struct hid_field {int logical_minimum; int logical_maximum; } ;
typedef int __u8 ;
typedef void* __u16 ;


 int VAR_0 ;




 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct hid_field*,int) ;
 int FUNC_1 (struct input_dev*,void*,int ) ;
 struct wacom* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,void*,int,int,int,int ) ;
 int FUNC_4 (struct input_dev*,int const,void*) ;
 int FUNC_5 (int,int ) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_4, struct hid_usage *VAR_5,
  struct hid_field *VAR_6, __u8 VAR_7, __u16 VAR_8, int VAR_9)
{
 struct wacom *VAR_10 = FUNC_2(VAR_4);
 struct wacom_wac *VAR_11 = &VAR_10->wacom_wac;
 struct wacom_features *VAR_12 = &VAR_11->features;
 int VAR_13 = VAR_6->logical_minimum;
 int VAR_14 = VAR_6->logical_maximum;
 unsigned int VAR_15 = FUNC_6(VAR_5->hid);
 int VAR_16 = VAR_8;

 if (VAR_15 == VAR_1) {
  VAR_16 = VAR_0;
 }

 if (VAR_15 == VAR_2) {
  VAR_13 += VAR_12->offset_left;
  VAR_14 -= VAR_12->offset_right;
 }
 if (VAR_15 == VAR_3) {
  VAR_13 += VAR_12->offset_top;
  VAR_14 -= VAR_12->offset_bottom;
 }

 VAR_5->type = VAR_7;
 VAR_5->code = VAR_8;

 FUNC_5(VAR_7, VAR_4->evbit);

 switch (VAR_7) {
 case 131:
  FUNC_3(VAR_4, VAR_8, VAR_13, VAR_14, VAR_9, 0);
  FUNC_1(VAR_4, VAR_8,
      FUNC_0(VAR_6, VAR_16));
  break;
 case 130:
  FUNC_4(VAR_4, 130, VAR_8);
  break;
 case 129:
  FUNC_4(VAR_4, 129, VAR_8);
  break;
 case 128:
  FUNC_4(VAR_4, 128, VAR_8);
  break;
 }
}
