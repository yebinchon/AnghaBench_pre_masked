
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magicmouse_sc {int * input; } ;
struct hid_input {int dummy; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (struct hid_device*,char*,int) ;
 struct magicmouse_sc* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *,struct hid_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0,
  struct hid_input *VAR_1)

{
 struct magicmouse_sc *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->input, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_0, "magicmouse setup input failed (%d)\n", VAR_3);

  VAR_2->input = ((void*)0);
  return VAR_3;
 }

 return 0;
}
