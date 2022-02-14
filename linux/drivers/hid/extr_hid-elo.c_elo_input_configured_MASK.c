
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int absbit; int keybit; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3,
  struct hid_input *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->input;






 FUNC_0(VAR_1, VAR_5->keybit);
 FUNC_2(VAR_2, VAR_5->keybit);
 FUNC_2(VAR_0, VAR_5->absbit);
 FUNC_1(VAR_5, VAR_0, 0, 256, 0, 0);

 return 0;
}
