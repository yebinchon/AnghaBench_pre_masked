
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ protocol; } ;
struct ata_queued_cmd {TYPE_2__* dev; TYPE_1__ tf; } ;
struct ata_port {scalar_t__ hsm_task_state; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct ata_port *VAR_5,
      struct ata_queued_cmd *VAR_6)
{
 if (VAR_6->tf.flags & VAR_2)
  return 1;

 if (VAR_5->hsm_task_state == VAR_4) {
  if (VAR_6->tf.protocol == VAR_1 &&
     (VAR_6->tf.flags & VAR_3))
      return 1;

  if (FUNC_0(VAR_6->tf.protocol) &&
     !(VAR_6->dev->flags & VAR_0))
   return 1;
 }

 return 0;
}
