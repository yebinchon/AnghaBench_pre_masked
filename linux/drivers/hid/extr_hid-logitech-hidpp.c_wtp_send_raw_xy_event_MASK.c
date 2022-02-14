
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_touchpad_raw_xy {int finger_count; scalar_t__ end_of_frame; int button; int * fingers; } ;
struct hidpp_device {int quirks; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hidpp_device*,int *) ;

__attribute__((used)) static void FUNC_4(struct hidpp_device *VAR_3,
  struct hidpp_touchpad_raw_xy *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
  FUNC_3(VAR_3, &(VAR_4->fingers[VAR_5]));

 if (VAR_4->end_of_frame &&
     !(VAR_3->quirks & VAR_2))
  FUNC_0(VAR_3->input, VAR_1, VAR_0, VAR_4->button);

 if (VAR_4->end_of_frame || VAR_4->finger_count <= 2) {
  FUNC_1(VAR_3->input);
  FUNC_2(VAR_3->input);
 }
}
