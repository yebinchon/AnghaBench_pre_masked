
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk; } ;
struct drbd_device {TYPE_1__ state; int local_cnt; } ;
typedef enum drbd_disk_state { ____Placeholder_drbd_disk_state } drbd_disk_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_device*) ;

__attribute__((used)) static inline int FUNC_2(struct drbd_device *VAR_1, enum drbd_disk_state VAR_2)
{
 int VAR_3;


 if (VAR_1->state.disk == VAR_0)
  return 0;

 FUNC_0(&VAR_1->local_cnt);
 VAR_3 = (VAR_1->state.disk >= VAR_2);
 if (!VAR_3)
  FUNC_1(VAR_1);
 return VAR_3;
}
