
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int quirks; } ;
struct mt_device {int applications; TYPE_2__ mtclass; int inputmode_value; TYPE_1__* hdev; } ;
struct mt_application {unsigned int application; int list; int report_id; int quirks; void* raw_cc; void* scantime; int mt_flags; int mt_usages; } ;
struct hid_report {unsigned int application; int id; } ;
struct TYPE_3__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mt_application* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct mt_application *FUNC_3(struct mt_device *VAR_7,
            struct hid_report *VAR_8)
{
 unsigned int VAR_9 = VAR_8->application;
 struct mt_application *VAR_10;

 VAR_10 = FUNC_1(&VAR_7->hdev->dev, sizeof(*VAR_10),
          VAR_1);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->application = VAR_9;
 FUNC_0(&VAR_10->mt_usages);

 if (VAR_9 == VAR_3)
  VAR_10->mt_flags |= VAR_4;




 if (VAR_9 == VAR_2) {
  VAR_10->mt_flags |= VAR_5;
  VAR_7->inputmode_value = VAR_6;
 }

 VAR_10->scantime = VAR_0;
 VAR_10->raw_cc = VAR_0;
 VAR_10->quirks = VAR_7->mtclass.quirks;
 VAR_10->report_id = VAR_8->id;

 FUNC_2(&VAR_10->list, &VAR_7->applications);

 return VAR_10;
}
