
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_device {int dummy; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drbd_device*,char*,union drbd_state) ;

void FUNC_3(struct drbd_device *VAR_1, union drbd_state VAR_2,
           union drbd_state VAR_3, enum drbd_state_rv VAR_4)
{
 if (VAR_4 == VAR_0)
  return;
 FUNC_0(VAR_1, "State change failed: %s\n", FUNC_1(VAR_4));
 FUNC_2(VAR_1, " state", VAR_2);
 FUNC_2(VAR_1, "wanted", VAR_3);
}
