
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm5974 {scalar_t__ bt_urb; scalar_t__ tp_urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm5974*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct bcm5974 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2) {
  FUNC_1(1, "bcm5974: mode switch failed\n");
  goto err_out;
 }

 if (VAR_1->bt_urb) {
  VAR_2 = FUNC_3(VAR_1->bt_urb, VAR_0);
  if (VAR_2)
   goto err_reset_mode;
 }

 VAR_2 = FUNC_3(VAR_1->tp_urb, VAR_0);
 if (VAR_2)
  goto err_kill_bt;

 return 0;

err_kill_bt:
 FUNC_2(VAR_1->bt_urb);
err_reset_mode:
 FUNC_0(VAR_1, 0);
err_out:
 return VAR_2;
}
