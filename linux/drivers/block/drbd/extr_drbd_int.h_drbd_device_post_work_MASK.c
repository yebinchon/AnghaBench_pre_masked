
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_work_queue {int q_wait; } ;
struct drbd_device {int flags; } ;
struct drbd_connection {int flags; struct drbd_work_queue sender_work; } ;
struct TYPE_2__ {struct drbd_connection* connection; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct drbd_device*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct drbd_device *VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_2, &VAR_1->flags)) {
  struct drbd_connection *VAR_3 =
   FUNC_0(VAR_1)->connection;
  struct drbd_work_queue *VAR_4 = &VAR_3->sender_work;
  if (!FUNC_1(VAR_0, &VAR_3->flags))
   FUNC_2(&VAR_4->q_wait);
 }
}
