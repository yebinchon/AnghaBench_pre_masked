
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_data {int drain; int cmd_msg_lock; int write_active; int drain_complete; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct applespi_data *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->cmd_msg_lock, VAR_1);

 VAR_0->drain = 1;
 FUNC_2(VAR_0->drain_complete, !VAR_0->write_active,
       VAR_0->cmd_msg_lock);

 FUNC_1(&VAR_0->cmd_msg_lock, VAR_1);
}
