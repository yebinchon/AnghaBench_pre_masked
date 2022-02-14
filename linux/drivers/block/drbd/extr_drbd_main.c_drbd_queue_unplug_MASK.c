
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pdsk; scalar_t__ conn; scalar_t__ role; } ;
struct drbd_device {int unplug_work; int flags; TYPE_1__ state; } ;
struct TYPE_6__ {TYPE_2__* connection; } ;
struct TYPE_5__ {int sender_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (struct drbd_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct drbd_device *VAR_4)
{
 if (VAR_4->state.pdsk >= VAR_1 && VAR_4->state.conn >= VAR_0) {
  FUNC_0(VAR_4, VAR_4->state.role == VAR_2);
  if (FUNC_3(VAR_3, &VAR_4->flags)) {
   FUNC_1(
    &FUNC_2(VAR_4)->connection->sender_work,
    &VAR_4->unplug_work);
  }
 }
}
