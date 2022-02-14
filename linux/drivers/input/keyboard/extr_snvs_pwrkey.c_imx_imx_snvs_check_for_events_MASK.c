
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct pwrkey_drv_data {int keystate; int check_timer; struct input_dev* input; int keycode; int snvs; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pwrkey_drv_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 struct pwrkey_drv_data* VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_7)
{
 struct pwrkey_drv_data *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_4);
 struct input_dev *VAR_9 = VAR_8->input;
 u32 VAR_10;

 FUNC_6(VAR_8->snvs, VAR_3, &VAR_10);
 VAR_10 = VAR_10 & VAR_2 ? 1 : 0;


 if (VAR_10 ^ VAR_8->keystate) {
  VAR_8->keystate = VAR_10;
  FUNC_1(VAR_9, VAR_0, VAR_8->keycode, VAR_10);
  FUNC_2(VAR_9);
  FUNC_5(VAR_8->input->dev.parent);
 }


 if (VAR_10) {
  FUNC_3(&VAR_8->check_timer,
     VAR_5 + FUNC_4(VAR_1));
 }
}
