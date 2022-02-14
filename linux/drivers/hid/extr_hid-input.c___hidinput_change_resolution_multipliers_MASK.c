
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {scalar_t__ hid; } ;
struct hid_report {int maxfield; TYPE_1__** field; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int report_count; int maxusage; int * value; struct hid_usage* usage; int logical_minimum; int logical_maximum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,struct hid_report*,int ) ;
 int FUNC_1 (struct hid_device*) ;

__attribute__((used)) static bool FUNC_2(struct hid_device *VAR_2,
  struct hid_report *VAR_3, bool VAR_4)
{
 struct hid_usage *VAR_5;
 bool VAR_6 = 0;
 int VAR_7, VAR_8;

 if (VAR_3->maxfield == 0)
  return 0;






 if (VAR_3->maxfield > 1) {
  FUNC_0(VAR_2, VAR_3, VAR_1);
  FUNC_1(VAR_2);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->maxfield; VAR_7++) {
  __s32 VAR_9 = VAR_4 ?
         VAR_3->field[VAR_7]->logical_maximum :
         VAR_3->field[VAR_7]->logical_minimum;





  if (VAR_3->field[VAR_7]->report_count != 1)
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_3->field[VAR_7]->maxusage; VAR_8++) {
   VAR_5 = &VAR_3->field[VAR_7]->usage[VAR_8];

   if (VAR_5->hid != VAR_0)
    continue;

   VAR_3->field[VAR_7]->value[VAR_8] = VAR_9;
   VAR_6 = 1;
  }
 }

 return VAR_6;
}
