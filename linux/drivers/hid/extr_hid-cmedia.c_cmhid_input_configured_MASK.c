
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int * evbit; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dummy; } ;
struct cmhid {struct input_dev* input_dev; int switch_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cmhid* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_3,
  struct hid_input *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->input;
 struct cmhid *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 VAR_6->input_dev = VAR_5;
 FUNC_3(VAR_6->switch_map, VAR_2, sizeof(VAR_6->switch_map));
 VAR_5->evbit[0] = FUNC_0(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_2(VAR_6->input_dev,
    VAR_1, VAR_2[VAR_7]);
 return 0;
}
