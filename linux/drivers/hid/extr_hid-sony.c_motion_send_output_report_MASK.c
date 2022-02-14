
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sony_sc {int left; int right; int * led_state; scalar_t__ output_report_dmabuf; struct hid_device* hdev; } ;
struct motion_output_report_02 {int type; int rumble; int b; int g; int r; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct motion_output_report_02*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sony_sc *VAR_1)
{
 struct hid_device *VAR_2 = VAR_1->hdev;
 struct motion_output_report_02 *VAR_3 =
  (struct motion_output_report_02 *)VAR_1->output_report_dmabuf;

 FUNC_2(VAR_3, 0, VAR_0);

 VAR_3->type = 0x02;
 VAR_3->r = VAR_1->led_state[0];
 VAR_3->g = VAR_1->led_state[1];
 VAR_3->b = VAR_1->led_state[2];





 FUNC_0(VAR_2, (u8 *)VAR_3, VAR_0);
}
