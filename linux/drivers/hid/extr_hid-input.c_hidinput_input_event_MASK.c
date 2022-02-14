
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int led_work; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hid_field*,int,int) ;
 int FUNC_1 (struct input_dev*,char*) ;
 int FUNC_2 (struct hid_device*,unsigned int,unsigned int,struct hid_field**) ;
 int FUNC_3 (struct input_dev*,unsigned int,unsigned int,int) ;
 struct hid_device* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 struct hid_device *VAR_6 = FUNC_4(VAR_2);
 struct hid_field *VAR_7;
 int VAR_8;

 if (VAR_3 == VAR_0)
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_3 != VAR_1)
  return -1;

 if ((VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_4, &VAR_7)) == -1) {
  FUNC_1(VAR_2, "event field not found\n");
  return -1;
 }

 FUNC_0(VAR_7, VAR_8, VAR_5);

 FUNC_5(&VAR_6->led_work);
 return 0;
}
