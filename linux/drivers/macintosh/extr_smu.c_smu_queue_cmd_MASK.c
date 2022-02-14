
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_cmd {scalar_t__ data_len; scalar_t__ reply_len; int status; int link; } ;
struct TYPE_2__ {int db_irq; int lock; int * cmd_cur; int cmd_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct smu_cmd*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct smu_cmd *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_3 == ((void*)0))
  return -VAR_1;
 if (VAR_5->data_len > VAR_2 ||
     VAR_5->reply_len > VAR_2)
  return -VAR_0;

 VAR_5->status = 1;
 FUNC_3(&VAR_3->lock, VAR_6);
 FUNC_0(&VAR_5->link, &VAR_3->cmd_list);
 if (VAR_3->cmd_cur == ((void*)0))
  FUNC_2();
 FUNC_4(&VAR_3->lock, VAR_6);


 if (!VAR_4 || !VAR_3->db_irq)
  FUNC_1(VAR_5);

 return 0;
}
