
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt_report_data {scalar_t__ is_mt_collection; struct mt_application* application; } ;
struct TYPE_3__ {int export_all_inputs; } ;
struct mt_device {TYPE_1__ mtclass; } ;
struct mt_application {int quirks; } ;
struct hid_usage {int hid; } ;
struct hid_input {scalar_t__ application; TYPE_2__* input; } ;
struct hid_field {scalar_t__ application; int flags; scalar_t__ physical; int report; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int evbit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct mt_device* FUNC_1 (struct hid_device*) ;
 struct mt_report_data* FUNC_2 (struct mt_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*,struct mt_application*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_21, struct hid_input *VAR_22,
  struct hid_field *VAR_23, struct hid_usage *VAR_24,
  unsigned long **VAR_25, int *VAR_26)
{
 struct mt_device *VAR_27 = FUNC_1(VAR_21);
 struct mt_application *VAR_28;
 struct mt_report_data *VAR_29;

 VAR_29 = FUNC_2(VAR_27, VAR_23->report);
 if (!VAR_29) {
  FUNC_0(VAR_21, "failed to allocate data for report\n");
  return 0;
 }

 VAR_28 = VAR_29->application;







 if (!VAR_27->mtclass.export_all_inputs &&
     VAR_23->application != VAR_5 &&
     VAR_23->application != VAR_2 &&
     VAR_23->application != VAR_4 &&
     VAR_23->application != VAR_6 &&
     VAR_23->application != VAR_7 &&
     VAR_23->application != VAR_1 &&
     VAR_23->application != VAR_9 &&
     VAR_23->application != VAR_8 &&
     !(VAR_23->application == VAR_14 &&
       VAR_28->quirks & VAR_20))
  return -1;






 if (VAR_23->application == VAR_14 &&
     VAR_28->quirks & VAR_20 &&
     (VAR_24->hid & VAR_13) == VAR_11) {
  FUNC_5(VAR_0, VAR_22->input->evbit);
  if (VAR_23->flags & VAR_10)
   VAR_23->flags &= ~VAR_10;
  switch (VAR_24->hid & VAR_12) {
  case 0x10: FUNC_3(VAR_15); break;
  case 0x20: FUNC_3(VAR_16); break;
  case 0x35: FUNC_3(VAR_17); break;
  case 0x6b: FUNC_3(VAR_18); break;
  case 0x6c: FUNC_3(VAR_19); break;
  default:
   return -1;
  }
  return 1;
 }

 if (VAR_29->is_mt_collection)
  return FUNC_4(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26,
           VAR_28);





 if (VAR_23->physical == VAR_3)
  VAR_22->application = VAR_3;


 return 0;
}
