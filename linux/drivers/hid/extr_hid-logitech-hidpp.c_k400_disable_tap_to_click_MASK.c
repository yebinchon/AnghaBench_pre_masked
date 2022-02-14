
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct k400_private_data {int feature_index; } ;
struct hidpp_touchpad_fw_items {int dummy; } ;
struct hidpp_device {struct k400_private_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hidpp_device*,int ,int *,int *) ;
 int FUNC_1 (struct hidpp_device*,int ,struct hidpp_touchpad_fw_items*) ;

__attribute__((used)) static int FUNC_2(struct hidpp_device *VAR_1)
{
 struct k400_private_data *VAR_2 = VAR_1->private_data;
 struct hidpp_touchpad_fw_items VAR_3 = {};
 int VAR_4;
 u8 VAR_5;

 if (!VAR_2->feature_index) {
  VAR_4 = FUNC_0(VAR_1,
   VAR_0,
   &VAR_2->feature_index, &VAR_5);
  if (VAR_4)

   return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2->feature_index, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}
