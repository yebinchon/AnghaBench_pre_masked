
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {unsigned int report_count; int flags; int * value; TYPE_1__* usage; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int collection_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,struct hid_field*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_1,
    struct hid_report *VAR_2, int VAR_3,
    int VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_4; VAR_5 < VAR_2->maxfield; VAR_5++) {
  struct hid_field *VAR_6;
  unsigned VAR_7, VAR_8;

  VAR_6 = VAR_2->field[VAR_5];
  VAR_7 = VAR_6->report_count;

  if (!(VAR_0 & VAR_6->flags))
   continue;

  for (VAR_8 = 0 ; VAR_8 < VAR_7; VAR_8++) {
   if (VAR_6->usage[VAR_8].collection_index == VAR_3)
    FUNC_0(VAR_1, VAR_6, &VAR_6->usage[VAR_8],
      VAR_6->value[VAR_8]);
   else
    return;
  }
 }
}
