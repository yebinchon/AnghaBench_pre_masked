
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtp_data {scalar_t__ y_size; scalar_t__ flip_y; } ;
struct hidpp_touchpad_raw_xy_finger {scalar_t__ area; scalar_t__ y; scalar_t__ x; scalar_t__ contact_status; int finger_id; scalar_t__ contact_type; } ;
struct hidpp_device {int input; struct wtp_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct hidpp_device *VAR_5,
 struct hidpp_touchpad_raw_xy_finger *VAR_6)
{
 struct wtp_data *VAR_7 = VAR_5->private_data;
 int VAR_8;

 if (!VAR_6->finger_id || VAR_6->contact_type)

  return;

 VAR_8 = FUNC_1(VAR_5->input, VAR_6->finger_id);

 FUNC_3(VAR_5->input, VAR_8);
 FUNC_2(VAR_5->input, VAR_4,
     VAR_6->contact_status);
 if (VAR_6->contact_status) {
  FUNC_0(VAR_5->input, VAR_3, VAR_0,
    VAR_6->x);
  FUNC_0(VAR_5->input, VAR_3, VAR_1,
    VAR_7->flip_y ? VAR_7->y_size - VAR_6->y :
          VAR_6->y);
  FUNC_0(VAR_5->input, VAR_3, VAR_2,
    VAR_6->area);
 }
}
