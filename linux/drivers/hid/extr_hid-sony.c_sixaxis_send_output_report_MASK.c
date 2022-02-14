
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sixaxis_output_report_01 {int buf; } ;
typedef int u8 ;
struct sony_sc {int* led_state; int quirks; int hdev; scalar_t__* led_delay_on; scalar_t__* led_delay_off; int left; scalar_t__ right; scalar_t__ output_report_dmabuf; } ;
struct TYPE_3__ {int right_motor_on; int left_motor_force; } ;
struct sixaxis_output_report {int leds_bitmap; int report_id; TYPE_2__* led; TYPE_1__ rumble; } ;
struct TYPE_4__ {scalar_t__ duty_on; scalar_t__ duty_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int ,int *,int,int ,int ) ;
 int FUNC_2 (struct sixaxis_output_report*,union sixaxis_output_report_01 const*,int) ;

__attribute__((used)) static void FUNC_3(struct sony_sc *VAR_3)
{
 static const union sixaxis_output_report_01 VAR_4 = {
  .buf = {
   0x01,
   0x01, 0xff, 0x00, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00,
   0xff, 0x27, 0x10, 0x00, 0x32,
   0xff, 0x27, 0x10, 0x00, 0x32,
   0xff, 0x27, 0x10, 0x00, 0x32,
   0xff, 0x27, 0x10, 0x00, 0x32,
   0x00, 0x00, 0x00, 0x00, 0x00
  }
 };
 struct sixaxis_output_report *VAR_5 =
  (struct sixaxis_output_report *)VAR_3->output_report_dmabuf;
 int VAR_6;


 FUNC_2(VAR_5, &VAR_4, sizeof(struct sixaxis_output_report));






 VAR_5->leds_bitmap |= VAR_3->led_state[0] << 1;
 VAR_5->leds_bitmap |= VAR_3->led_state[1] << 2;
 VAR_5->leds_bitmap |= VAR_3->led_state[2] << 3;
 VAR_5->leds_bitmap |= VAR_3->led_state[3] << 4;


 if ((VAR_5->leds_bitmap & 0x1E) == 0)
  VAR_5->leds_bitmap |= 0x20;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_3->led_delay_on[VAR_6] || VAR_3->led_delay_off[VAR_6]) {
   VAR_5->led[3 - VAR_6].duty_off = VAR_3->led_delay_off[VAR_6];
   VAR_5->led[3 - VAR_6].duty_on = VAR_3->led_delay_on[VAR_6];
  }
 }


 if (VAR_3->quirks & VAR_2)
  FUNC_0(VAR_3->hdev, (u8 *)VAR_5,
    sizeof(struct sixaxis_output_report));
 else
  FUNC_1(VAR_3->hdev, VAR_5->report_id, (u8 *)VAR_5,
    sizeof(struct sixaxis_output_report),
    VAR_0, VAR_1);
}
