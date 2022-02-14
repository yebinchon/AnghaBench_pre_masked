
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hidpp_device {int dummy; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dummy; } ;


 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hidpp_device*,struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0,
    struct hid_input *VAR_1)
{
 struct hidpp_device *VAR_2 = FUNC_0(VAR_0);
 struct input_dev *VAR_3 = VAR_1->input;

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
