
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_data {int lcd_contrast; int status; int lock; int hdev; } ;
struct lcd_device {int dummy; } ;
struct hid_report {int maxfield; TYPE_1__** field; } ;
struct TYPE_2__ {int report_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct hid_report*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 struct picolcd_data* FUNC_2 (struct lcd_device*) ;
 struct hid_report* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct lcd_device *VAR_4, int VAR_5)
{
 struct picolcd_data *VAR_6 = FUNC_2(VAR_4);
 struct hid_report *VAR_7 = FUNC_3(VAR_3, VAR_6->hdev);
 unsigned long VAR_8;

 if (!VAR_7 || VAR_7->maxfield != 1 || VAR_7->field[0]->report_count != 1)
  return -VAR_0;

 VAR_6->lcd_contrast = VAR_5 & 0x0ff;
 FUNC_4(&VAR_6->lock, VAR_8);
 FUNC_1(VAR_7->field[0], 0, VAR_6->lcd_contrast);
 if (!(VAR_6->status & VAR_2))
  FUNC_0(VAR_6->hdev, VAR_7, VAR_1);
 FUNC_5(&VAR_6->lock, VAR_8);
 return 0;
}
