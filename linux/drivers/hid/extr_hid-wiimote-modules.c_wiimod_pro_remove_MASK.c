
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {int * input; } ;
struct wiimote_data {TYPE_2__ state; TYPE_1__* hdev; int rumble_worker; TYPE_3__ extension; } ;
struct wiimod_ops {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wiimote_data*,int ) ;

__attribute__((used)) static void FUNC_6(const struct wiimod_ops *VAR_1,
         struct wiimote_data *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2->extension.input)
  return;

 FUNC_2(VAR_2->extension.input);
 VAR_2->extension.input = ((void*)0);
 FUNC_0(&VAR_2->rumble_worker);
 FUNC_1(&VAR_2->hdev->dev,
      &VAR_0);

 FUNC_3(&VAR_2->state.lock, VAR_3);
 FUNC_5(VAR_2, 0);
 FUNC_4(&VAR_2->state.lock, VAR_3);
}
