
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;






 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0, struct hid_field *VAR_1,
  struct hid_usage *VAR_2, __s32 VAR_3)
{
 switch (VAR_2->code) {
 case 130:
 case 129:
 case 128:
 case 131:
  if (VAR_3 < -1) {
   FUNC_0(VAR_1->hidinput->input, VAR_2->type,
    VAR_2->code, -1);
   return 1;
  }
  break;
 }

 return 0;
}
