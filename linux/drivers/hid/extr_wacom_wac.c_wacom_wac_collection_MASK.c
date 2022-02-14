
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ touch_input; scalar_t__ pen_input; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_report {scalar_t__ type; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hid_field*) ;
 scalar_t__ FUNC_1 (struct hid_field*) ;
 struct wacom* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,struct hid_report*,int,int) ;
 int FUNC_4 (struct hid_device*,struct hid_report*,int,struct hid_field*,int) ;
 int FUNC_5 (struct hid_device*,struct hid_report*) ;
 int FUNC_6 (struct hid_device*,struct hid_report*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_1, struct hid_report *VAR_2,
    int VAR_3, struct hid_field *VAR_4,
    int VAR_5)
{
 struct wacom *VAR_6 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4))
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
 if (VAR_2->type != VAR_0)
  return -1;

 if (FUNC_1(VAR_4) && VAR_6->wacom_wac.pen_input)
  FUNC_6(VAR_1, VAR_2);
 else if (FUNC_0(VAR_4) && VAR_6->wacom_wac.touch_input)
  FUNC_5(VAR_1, VAR_2);

 return 0;
}
