
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct gb_interface {int quirks; int mutex; int mode_switch_completion; int dev; int mode_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;
 int FUNC_5 (struct gb_interface*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct gb_interface *VAR_2, u16 VAR_3,
    u32 VAR_4)
{
 FUNC_6(&VAR_2->mutex);

 if (VAR_3) {
  FUNC_2(&VAR_2->dev,
    "mailbox event with UniPro error: 0x%04x\n",
    VAR_3);
  goto err_disable;
 }

 if (VAR_4 != VAR_1) {
  FUNC_2(&VAR_2->dev,
    "mailbox event with unexpected value: 0x%08x\n",
    VAR_4);
  goto err_disable;
 }

 if (VAR_2->quirks & VAR_0) {
  FUNC_5(VAR_2);
  goto out_unlock;
 }

 if (!VAR_2->mode_switch) {
  FUNC_2(&VAR_2->dev, "unexpected mailbox event: 0x%08x\n",
    VAR_4);
  goto err_disable;
 }

 FUNC_1(&VAR_2->dev, "mode switch detected\n");

 FUNC_0(&VAR_2->mode_switch_completion);

out_unlock:
 FUNC_7(&VAR_2->mutex);

 return;

err_disable:
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_7(&VAR_2->mutex);
}
