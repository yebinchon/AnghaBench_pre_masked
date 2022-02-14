
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cmds; int poll_sem; int context; int event_sem; int flags; } ;
struct mthca_dev {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mthca_dev *VAR_1)
{
 int VAR_2;

 VAR_1->cmd.flags &= ~VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->cmd.max_cmds; ++VAR_2)
  FUNC_0(&VAR_1->cmd.event_sem);

 FUNC_1(VAR_1->cmd.context);

 FUNC_2(&VAR_1->cmd.poll_sem);
}
