
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int propbit; int keybit; } ;
struct hid_input {TYPE_1__* report; struct input_dev* input; } ;
struct hid_device {int dummy; } ;
struct asus_drvdata {int quirks; scalar_t__ enable_backlight; struct input_dev* input; TYPE_2__* tp; } ;
struct TYPE_4__ {int contact_size; int max_contacts; int res_y; int res_x; int max_y; int max_x; } ;
struct TYPE_3__ {scalar_t__ id; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,char*,int) ;
 struct asus_drvdata* FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_12, struct hid_input *VAR_13)
{
 struct input_dev *VAR_14 = VAR_13->input;
 struct asus_drvdata *VAR_15 = FUNC_4(VAR_12);


 if (VAR_15->quirks & VAR_10 &&
     VAR_13->report->id != VAR_11)
  return 0;

 if (VAR_15->tp) {
  int VAR_16;

  FUNC_8(VAR_14, VAR_0, 0,
         VAR_15->tp->max_x, 0, 0);
  FUNC_8(VAR_14, VAR_1, 0,
         VAR_15->tp->max_y, 0, 0);
  FUNC_6(VAR_14, VAR_0, VAR_15->tp->res_x);
  FUNC_6(VAR_14, VAR_1, VAR_15->tp->res_y);

  if (VAR_15->tp->contact_size >= 5) {
   FUNC_8(VAR_14, VAR_4, 0,
          VAR_9, 0, 0);
   FUNC_8(VAR_14, VAR_3, 0,
          VAR_9, 0, 0);
   FUNC_8(VAR_14, VAR_2, 0,
           VAR_8, 0, 0);
  }

  FUNC_0(VAR_5, VAR_14->keybit);
  FUNC_0(VAR_7, VAR_14->propbit);

  VAR_16 = FUNC_7(VAR_14, VAR_15->tp->max_contacts,
       VAR_6);

  if (VAR_16) {
   FUNC_3(VAR_12, "Asus input mt init slots failed: %d\n", VAR_16);
   return VAR_16;
  }
 }

 VAR_15->input = VAR_14;

 if (VAR_15->enable_backlight &&
     !FUNC_2(VAR_12) &&
     FUNC_1(VAR_12))
  FUNC_5(VAR_12, "Failed to initialize backlight.\n");

 return 0;
}
