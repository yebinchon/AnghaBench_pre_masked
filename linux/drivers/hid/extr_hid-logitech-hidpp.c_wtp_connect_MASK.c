
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtp_data {int mt_feature_index; int x_size; } ;
struct hidpp_device {struct wtp_data* private_data; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (struct hid_device*,char*,int) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hidpp_device*,int ,int,int) ;
 int FUNC_3 (struct hidpp_device*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_0, bool VAR_1)
{
 struct hidpp_device *VAR_2 = FUNC_1(VAR_0);
 struct wtp_data *VAR_3 = VAR_2->private_data;
 int VAR_4;

 if (!VAR_3->x_size) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_0, "Can not get wtp config: %d\n", VAR_4);
   return VAR_4;
  }
 }

 return FUNC_2(VAR_2, VAR_3->mt_feature_index,
   1, 1);
}
