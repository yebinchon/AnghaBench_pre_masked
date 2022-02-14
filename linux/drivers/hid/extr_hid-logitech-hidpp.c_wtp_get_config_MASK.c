
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wtp_data {int flip_y; scalar_t__ resolution; int maxcontacts; int y_size; int x_size; int mt_feature_index; } ;
struct hidpp_touchpad_raw_info {scalar_t__ origin; scalar_t__ res; int maxcontacts; int y_size; int x_size; int member_0; } ;
struct hidpp_device {struct wtp_data* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hidpp_device*,int ,int *,int *) ;
 int FUNC_1 (struct hidpp_device*,int ,struct hidpp_touchpad_raw_info*) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_3)
{
 struct wtp_data *VAR_4 = VAR_3->private_data;
 struct hidpp_touchpad_raw_info VAR_5 = {0};
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_0,
  &VAR_4->mt_feature_index, &VAR_6);
 if (VAR_7)

  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4->mt_feature_index,
  &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_4->x_size = VAR_5.x_size;
 VAR_4->y_size = VAR_5.y_size;
 VAR_4->maxcontacts = VAR_5.maxcontacts;
 VAR_4->flip_y = VAR_5.origin == VAR_1;
 VAR_4->resolution = VAR_5.res;
 if (!VAR_4->resolution)
  VAR_4->resolution = VAR_2;

 return 0;
}
