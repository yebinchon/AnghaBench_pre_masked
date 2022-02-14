
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k400_private_data {int dummy; } ;
struct hidpp_device {struct k400_private_data* private_data; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct k400_private_data* FUNC_0 (int *,int,int ) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2)
{
 struct hidpp_device *VAR_3 = FUNC_1(VAR_2);
 struct k400_private_data *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->dev, sizeof(struct k400_private_data),
       VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->private_data = VAR_4;

 return 0;
}
