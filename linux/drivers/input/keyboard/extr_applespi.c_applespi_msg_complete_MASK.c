
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_data {int read_active; int write_active; int cmd_msg_queued; int cmd_msg_lock; int drain_complete; scalar_t__ drain; } ;


 int FUNC_0 (struct applespi_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct applespi_data *VAR_0,
      bool VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->cmd_msg_lock, VAR_3);

 if (VAR_2)
  VAR_0->read_active = 0;
 if (VAR_1)
  VAR_0->write_active = 0;

 if (VAR_0->drain && !VAR_0->write_active)
  FUNC_3(&VAR_0->drain_complete);

 if (VAR_1) {
  VAR_0->cmd_msg_queued = 0;
  FUNC_0(VAR_0);
 }

 FUNC_2(&VAR_0->cmd_msg_lock, VAR_3);
}
