
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {scalar_t__ code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
struct apple_sc {int quirks; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct apple_sc* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (struct hid_device*,int ,struct hid_usage*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4, struct hid_field *VAR_5,
  struct hid_usage *VAR_6, __s32 VAR_7)
{
 struct apple_sc *VAR_8 = FUNC_0(VAR_4);

 if (!(VAR_4->claimed & VAR_2) || !VAR_5->hidinput ||
   !VAR_6->type)
  return 0;

 if ((VAR_8->quirks & VAR_1) &&
   VAR_6->code == VAR_3) {
  FUNC_2(VAR_5->hidinput->input, VAR_6->type, VAR_6->code,
    -VAR_7);
  return 1;
 }

 if ((VAR_8->quirks & VAR_0) &&
   FUNC_1(VAR_4, VAR_5->hidinput->input,
    VAR_6, VAR_7))
  return 1;


 return 0;
}
