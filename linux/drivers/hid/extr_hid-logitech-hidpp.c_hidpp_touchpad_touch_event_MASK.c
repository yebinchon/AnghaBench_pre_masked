
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_touchpad_raw_xy_finger {int x; int y; int contact_type; int contact_status; int z; int area; int finger_id; } ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0,
 struct hidpp_touchpad_raw_xy_finger *VAR_1)
{
 u8 VAR_2 = VAR_0[0] << 2;
 u8 VAR_3 = VAR_0[2] << 2;

 VAR_1->x = VAR_2 << 6 | VAR_0[1];
 VAR_1->y = VAR_3 << 6 | VAR_0[3];

 VAR_1->contact_type = VAR_0[0] >> 6;
 VAR_1->contact_status = VAR_0[2] >> 6;

 VAR_1->z = VAR_0[4];
 VAR_1->area = VAR_0[5];
 VAR_1->finger_id = VAR_0[6] >> 4;
}
