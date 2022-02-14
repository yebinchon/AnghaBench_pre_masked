
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt_report_data {int is_mt_collection; int list; int application; struct hid_report* report; } ;
struct mt_device {int reports; TYPE_1__* hdev; } ;
struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {int flags; int report_count; TYPE_2__* usage; } ;
struct TYPE_4__ {scalar_t__ hid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mt_report_data*) ;
 struct mt_report_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mt_device*,struct hid_report*) ;

__attribute__((used)) static struct mt_report_data *FUNC_4(struct mt_device *VAR_3,
            struct hid_report *VAR_4)
{
 struct mt_report_data *VAR_5;
 struct hid_field *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(&VAR_3->hdev->dev, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->report = VAR_4;
 VAR_5->application = FUNC_3(VAR_3, VAR_4);

 if (!VAR_5->application) {
  FUNC_0(&VAR_3->hdev->dev, VAR_5);
  return ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->maxfield; VAR_7++) {
  VAR_6 = VAR_4->field[VAR_7];

  if (!(VAR_2 & VAR_6->flags))
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_6->report_count; VAR_8++) {
   if (VAR_6->usage[VAR_8].hid == VAR_1)
    VAR_5->is_mt_collection = 1;
  }
 }

 FUNC_2(&VAR_5->list, &VAR_3->reports);

 return VAR_5;
}
