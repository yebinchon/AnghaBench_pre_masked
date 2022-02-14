
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disk; } ;
struct drbd_device {int misc_wait; int flags; int local_cnt; TYPE_1__ state; } ;
typedef enum drbd_disk_state { ____Placeholder_drbd_disk_state } drbd_disk_state ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drbd_device*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct drbd_device *VAR_6)
{
 enum drbd_disk_state VAR_7 = VAR_6->state.disk;




 int VAR_8 = FUNC_2(&VAR_6->local_cnt);




 FUNC_1(VAR_5);
 FUNC_0(VAR_6, VAR_8 >= 0);
 if (VAR_8 == 0) {
  if (VAR_7 == VAR_1)

   FUNC_3(VAR_6, VAR_0);
  if (VAR_7 == VAR_2)

   if (!FUNC_4(VAR_3, &VAR_6->flags))
    FUNC_3(VAR_6, VAR_4);
  FUNC_5(&VAR_6->misc_wait);
 }
}
