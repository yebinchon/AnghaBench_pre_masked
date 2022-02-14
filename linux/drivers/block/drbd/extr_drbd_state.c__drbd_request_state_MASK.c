
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_device {int state_wait; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,union drbd_state,union drbd_state,int) ;
 int FUNC_1 (int ,int) ;

enum drbd_state_rv
FUNC_2(struct drbd_device *VAR_1, union drbd_state VAR_2,
      union drbd_state VAR_3, enum chg_state_flags VAR_4)
{
 enum drbd_state_rv VAR_5;

 FUNC_1(VAR_1->state_wait,
     (VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4)) != VAR_0);

 return VAR_5;
}
