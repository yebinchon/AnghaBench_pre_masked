
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {TYPE_1__* report; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_4, struct hid_input *VAR_5,
         struct hid_field *VAR_6, struct hid_usage *VAR_7,
         unsigned long **VAR_8, int *VAR_9)
{
 if (FUNC_0(VAR_4))
  return 0;

 if (VAR_6->report->id == VAR_3 ||
     VAR_6->report->id == VAR_0 ||
     VAR_6->report->id == VAR_2 ||
     VAR_6->report->id == VAR_1)
  return -1;

 return 0;
}
