
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_device {int state_mutex; int state_wait; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drbd_device*,union drbd_state,union drbd_state,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ) ;

enum drbd_state_rv
FUNC_5(struct drbd_device *VAR_2, union drbd_state VAR_3,
      union drbd_state VAR_4, enum chg_state_flags VAR_5)
{
 enum drbd_state_rv VAR_6;

 FUNC_0(VAR_5 & VAR_0);

 FUNC_4(VAR_2->state_wait,
         (VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5)) != VAR_1,
         FUNC_3(VAR_2->state_mutex),
         FUNC_2(VAR_2->state_mutex));

 return VAR_6;
}
