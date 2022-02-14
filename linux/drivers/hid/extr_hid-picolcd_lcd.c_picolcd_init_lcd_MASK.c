
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct picolcd_data {int lcd_contrast; struct lcd_device* lcd; TYPE_1__* hdev; } ;
struct TYPE_6__ {int max_contrast; } ;
struct lcd_device {TYPE_3__ props; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int report_count; int report_size; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct lcd_device* FUNC_4 (int ,struct device*,struct picolcd_data*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct lcd_device*,int) ;

int FUNC_6(struct picolcd_data *VAR_3, struct hid_report *VAR_4)
{
 struct device *VAR_5 = &VAR_3->hdev->dev;
 struct lcd_device *VAR_6;

 if (!VAR_4)
  return -VAR_1;
 if (VAR_4->maxfield != 1 || VAR_4->field[0]->report_count != 1 ||
   VAR_4->field[0]->report_size != 8) {
  FUNC_2(VAR_5, "unsupported CONTRAST report");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(FUNC_3(VAR_5), VAR_5, VAR_3, &VAR_2);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_5, "failed to register LCD\n");
  return FUNC_1(VAR_6);
 }
 VAR_6->props.max_contrast = 0x0ff;
 VAR_3->lcd_contrast = 0xe5;
 VAR_3->lcd = VAR_6;
 FUNC_5(VAR_6, 0xe5);
 return 0;
}
