
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxcontacts; } ;
struct mt_device {int is_buttonpad; TYPE_1__ mtclass; int maxcontacts; } ;
struct hid_usage {int hid; size_t usage_index; } ;
struct hid_field {size_t report_count; int report; int * value; int logical_maximum; } ;
struct hid_device {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct mt_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_2,
  struct hid_field *VAR_3, struct hid_usage *VAR_4)
{
 struct mt_device *VAR_5 = FUNC_1(VAR_2);

 switch (VAR_4->hid) {
 case 128:
  FUNC_2(VAR_2, VAR_3->report);

  VAR_5->maxcontacts = VAR_3->value[0];
  if (!VAR_5->maxcontacts &&
      VAR_3->logical_maximum <= VAR_1)
   VAR_5->maxcontacts = VAR_3->logical_maximum;
  if (VAR_5->mtclass.maxcontacts)

   VAR_5->maxcontacts = VAR_5->mtclass.maxcontacts;

  break;
 case 129:
  if (VAR_4->usage_index >= VAR_3->report_count) {
   FUNC_0(&VAR_2->dev, "HID_DG_BUTTONTYPE out of range\n");
   break;
  }

  FUNC_2(VAR_2, VAR_3->report);
  if (VAR_3->value[VAR_4->usage_index] == VAR_0)
   VAR_5->is_buttonpad = 1;

  break;
 case 0xff0000c5:

  if (VAR_4->usage_index == 0)
   FUNC_2(VAR_2, VAR_3->report);
  break;
 }
}
