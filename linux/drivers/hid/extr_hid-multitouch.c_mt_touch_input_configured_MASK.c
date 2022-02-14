
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_class {scalar_t__ is_indirect; } ;
struct mt_device {int is_buttonpad; scalar_t__ maxcontacts; scalar_t__ serial_maybe; struct mt_class mtclass; } ;
struct mt_application {int mt_flags; int quirks; int buttons_count; int pending_palm_slots; } ;
struct input_dev {int dev; int propbit; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 struct mt_device* FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct input_dev*,scalar_t__,int) ;
 int FUNC_5 (struct mt_device*,struct mt_application*) ;
 int FUNC_6 (struct mt_device*,struct mt_application*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_7,
         struct hid_input *VAR_8,
         struct mt_application *VAR_9)
{
 struct mt_device *VAR_10 = FUNC_3(VAR_7);
 struct mt_class *VAR_11 = &VAR_10->mtclass;
 struct input_dev *VAR_12 = VAR_8->input;
 int VAR_13;

 if (!VAR_10->maxcontacts)
  VAR_10->maxcontacts = VAR_5;

 FUNC_5(VAR_10, VAR_9);
 if (VAR_10->serial_maybe)
  FUNC_6(VAR_10, VAR_9);

 if (VAR_11->is_indirect)
  VAR_9->mt_flags |= VAR_3;

 if (VAR_9->quirks & VAR_6)
  VAR_9->mt_flags |= VAR_2;


 if ((VAR_9->mt_flags & VAR_3) &&
     (VAR_9->buttons_count == 1))
  VAR_10->is_buttonpad = 1;

 if (VAR_10->is_buttonpad)
  FUNC_1(VAR_4, VAR_12->propbit);

 VAR_9->pending_palm_slots = FUNC_2(&VAR_8->input->dev,
            FUNC_0(VAR_10->maxcontacts),
            sizeof(long),
            VAR_1);
 if (!VAR_9->pending_palm_slots)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_12, VAR_10->maxcontacts, VAR_9->mt_flags);
 if (VAR_13)
  return VAR_13;

 VAR_9->mt_flags = 0;
 return 0;
}
