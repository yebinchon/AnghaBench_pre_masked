
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pad_input; int * touch_input; int * pen_input; } ;
struct wacom {int resources; TYPE_1__ wacom_wac; struct hid_device* hdev; } ;
struct hid_device {int dev; } ;


 int FUNC_0 (int *,struct wacom*) ;

__attribute__((used)) static void FUNC_1(struct wacom *VAR_0)
{
 struct hid_device *VAR_1 = VAR_0->hdev;

 if (!VAR_0->resources)
  return;

 FUNC_0(&VAR_1->dev, VAR_0);

 VAR_0->resources = 0;

 VAR_0->wacom_wac.pen_input = ((void*)0);
 VAR_0->wacom_wac.touch_input = ((void*)0);
 VAR_0->wacom_wac.pad_input = ((void*)0);
}
