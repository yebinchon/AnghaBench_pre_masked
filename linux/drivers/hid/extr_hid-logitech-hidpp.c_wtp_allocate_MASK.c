
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtp_data {int dummy; } ;
struct hidpp_device {struct wtp_data* private_data; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wtp_data* FUNC_0 (int *,int,int ) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, const struct hid_device_id *VAR_3)
{
 struct hidpp_device *VAR_4 = FUNC_1(VAR_2);
 struct wtp_data *VAR_5;

 VAR_5 = FUNC_0(&VAR_2->dev, sizeof(struct wtp_data),
   VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->private_data = VAR_5;

 return 0;
}
