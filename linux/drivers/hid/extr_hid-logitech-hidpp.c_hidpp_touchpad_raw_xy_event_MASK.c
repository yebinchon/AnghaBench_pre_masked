
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_touchpad_raw_xy {int end_of_frame; int spurious_flag; int finger_count; int button; int * fingers; } ;
struct hidpp_device {int dummy; } ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (struct hidpp_touchpad_raw_xy*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hidpp_device *VAR_0,
  u8 *VAR_1, struct hidpp_touchpad_raw_xy *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(struct hidpp_touchpad_raw_xy));
 VAR_2->end_of_frame = VAR_1[8] & 0x01;
 VAR_2->spurious_flag = (VAR_1[8] >> 1) & 0x01;
 VAR_2->finger_count = VAR_1[15] & 0x0f;
 VAR_2->button = (VAR_1[8] >> 2) & 0x01;

 if (VAR_2->finger_count) {
  FUNC_0(&VAR_1[2], &VAR_2->fingers[0]);
  FUNC_0(&VAR_1[9], &VAR_2->fingers[1]);
 }
}
