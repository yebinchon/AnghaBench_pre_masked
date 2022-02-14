
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * input; } ;
struct wiimote_data {TYPE_2__* hdev; TYPE_1__ extension; } ;
struct wiimod_ops {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const struct wiimod_ops *VAR_1,
     struct wiimote_data *VAR_2)
{
 if (!VAR_2->extension.input)
  return;

 FUNC_1(VAR_2->extension.input);
 VAR_2->extension.input = ((void*)0);
 FUNC_0(&VAR_2->hdev->dev,
      &VAR_0);
}
