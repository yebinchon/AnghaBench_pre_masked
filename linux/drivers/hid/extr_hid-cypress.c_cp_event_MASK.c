
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {int hid; scalar_t__ code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,void*) ;
 int FUNC_2 (struct input_dev*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_5, struct hid_field *VAR_6,
  struct hid_usage *VAR_7, __s32 VAR_8)
{
 unsigned long VAR_9 = (unsigned long)FUNC_0(VAR_5);

 if (!(VAR_5->claimed & VAR_2) || !VAR_6->hidinput ||
   !VAR_7->type || !(VAR_9 & VAR_0))
  return 0;

 if (VAR_7->hid == 0x00090005) {
  if (VAR_8)
   VAR_9 |= VAR_1;
  else
   VAR_9 &= ~VAR_1;
  FUNC_1(VAR_5, (void *)VAR_9);
  return 1;
 }

 if (VAR_7->code == VAR_4 && (VAR_9 & VAR_1)) {
  struct input_dev *VAR_10 = VAR_6->hidinput->input;

  FUNC_2(VAR_10, VAR_7->type, VAR_3, VAR_8);
  return 1;
 }

 return 0;
}
