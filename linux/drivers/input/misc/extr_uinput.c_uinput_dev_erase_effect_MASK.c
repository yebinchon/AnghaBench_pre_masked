
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int effect_id; } ;
struct uinput_request {TYPE_1__ u; int code; } ;
struct uinput_device {int dummy; } ;
struct input_dev {int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uinput_device* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct uinput_device*,struct uinput_request*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_3, int VAR_4)
{
 struct uinput_device *VAR_5 = FUNC_0(VAR_3);
 struct uinput_request VAR_6;

 if (!FUNC_1(VAR_1, VAR_3->evbit))
  return -VAR_0;

 VAR_6.code = VAR_2;
 VAR_6.u.effect_id = VAR_4;

 return FUNC_2(VAR_5, &VAR_6);
}
