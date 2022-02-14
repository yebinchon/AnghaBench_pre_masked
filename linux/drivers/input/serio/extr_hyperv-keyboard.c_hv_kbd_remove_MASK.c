
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_kbd_dev {int hv_serio; } ;
struct hv_device {int channel; } ;


 struct hv_kbd_dev* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*,int *) ;
 int FUNC_2 (struct hv_kbd_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_0)
{
 struct hv_kbd_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->hv_serio);
 FUNC_4(VAR_0->channel);
 FUNC_2(VAR_1);

 FUNC_1(VAR_0, ((void*)0));

 return 0;
}
