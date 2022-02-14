
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {struct task_struct* task; } ;
struct drbd_connection {TYPE_1__ ack_receiver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct task_struct*,int) ;

__attribute__((used)) static inline void FUNC_2(struct drbd_connection *VAR_2)
{
 struct task_struct *VAR_3 = VAR_2->ack_receiver.task;
 if (VAR_3 && FUNC_0(&VAR_2->ack_receiver) == VAR_0)
  FUNC_1(VAR_1, VAR_3, 1);
}
