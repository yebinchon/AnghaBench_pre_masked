
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct picolcd_data {int lcd_brightness; scalar_t__ lcd_power; int status; int lock; int hdev; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct TYPE_3__ {int brightness; scalar_t__ power; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_4__ {int report_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct picolcd_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,struct hid_report*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 struct hid_report* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_5)
{
 struct picolcd_data *VAR_6 = FUNC_0(VAR_5);
 struct hid_report *VAR_7 = FUNC_3(VAR_4, VAR_6->hdev);
 unsigned long VAR_8;

 if (!VAR_7 || VAR_7->maxfield != 1 || VAR_7->field[0]->report_count != 1)
  return -VAR_0;

 VAR_6->lcd_brightness = VAR_5->props.brightness & 0x0ff;
 VAR_6->lcd_power = VAR_5->props.power;
 FUNC_4(&VAR_6->lock, VAR_8);
 FUNC_2(VAR_7->field[0], 0, VAR_6->lcd_power == VAR_1 ? VAR_6->lcd_brightness : 0);
 if (!(VAR_6->status & VAR_3))
  FUNC_1(VAR_6->hdev, VAR_7, VAR_2);
 FUNC_5(&VAR_6->lock, VAR_8);
 return 0;
}
