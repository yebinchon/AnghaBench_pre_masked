
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_drv_data {int quirks; } ;
struct hid_usage {scalar_t__ code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lg_drv_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct hid_device*,struct hid_field*,struct hid_usage*,int ,struct lg_drv_data*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3, struct hid_field *VAR_4,
  struct hid_usage *VAR_5, __s32 VAR_6)
{
 struct lg_drv_data *VAR_7 = FUNC_0(VAR_3);

 if ((VAR_7->quirks & VAR_1) && VAR_5->code == VAR_2) {
  FUNC_1(VAR_4->hidinput->input, VAR_5->type, VAR_5->code,
    -VAR_6);
  return 1;
 }
 if (VAR_7->quirks & VAR_0) {
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 return 0;
}
