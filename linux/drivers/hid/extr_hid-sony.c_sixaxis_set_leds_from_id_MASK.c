
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_1__ u8 ;
struct sony_sc {int device_id; int led_state; } ;
typedef int sixaxis_leds ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,TYPE_1__ const*,int) ;

__attribute__((used)) static void FUNC_3(struct sony_sc *VAR_1)
{
 static const u8 VAR_2[10][4] = {
    { 0x01, 0x00, 0x00, 0x00 },
    { 0x00, 0x01, 0x00, 0x00 },
    { 0x00, 0x00, 0x01, 0x00 },
    { 0x00, 0x00, 0x00, 0x01 },
    { 0x01, 0x00, 0x00, 0x01 },
    { 0x00, 0x01, 0x00, 0x01 },
    { 0x00, 0x00, 0x01, 0x01 },
    { 0x01, 0x00, 0x01, 0x01 },
    { 0x00, 0x01, 0x01, 0x01 },
    { 0x01, 0x01, 0x01, 0x01 }
 };

 int VAR_3 = VAR_1->device_id;

 FUNC_1(VAR_0 < FUNC_0(VAR_2[0]));

 if (VAR_3 < 0)
  return;

 VAR_3 %= 10;
 FUNC_2(VAR_1->led_state, VAR_2[VAR_3], sizeof(VAR_2[VAR_3]));
}
