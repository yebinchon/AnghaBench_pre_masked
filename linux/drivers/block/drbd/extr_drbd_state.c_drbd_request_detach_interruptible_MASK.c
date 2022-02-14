
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk; } ;
struct drbd_device {TYPE_1__ state; int misc_wait; int state_wait; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drbd_device*) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct drbd_device *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_1(VAR_5);
 FUNC_3(VAR_5->state_wait,
  (VAR_7 = FUNC_2(VAR_5)) != VAR_2);
 FUNC_0(VAR_5);

 VAR_6 = FUNC_3(VAR_5->misc_wait,
   VAR_5->state.disk != VAR_0);

 if (VAR_7 == VAR_3)
  VAR_7 = VAR_4;
 if (VAR_6)
  VAR_7 = VAR_1;

 return VAR_7;
}
