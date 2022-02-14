
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int brightness_set_blocking; int flags; int max_brightness; int * name; } ;
struct u2fzero_device {TYPE_2__ ldev; TYPE_1__* hdev; int * led_name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ,char*,int ,unsigned int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct u2fzero_device *VAR_6,
       unsigned int VAR_7)
{
 VAR_6->led_name = FUNC_0(&VAR_6->hdev->dev, VAR_2,
  "%s%u", VAR_0, VAR_7);
 if (VAR_6->led_name == ((void*)0))
  return -VAR_1;

 VAR_6->ldev.name = VAR_6->led_name;
 VAR_6->ldev.max_brightness = VAR_4;
 VAR_6->ldev.flags = VAR_3;
 VAR_6->ldev.brightness_set_blocking = VAR_5;

 return FUNC_1(&VAR_6->hdev->dev, &VAR_6->ldev);
}
