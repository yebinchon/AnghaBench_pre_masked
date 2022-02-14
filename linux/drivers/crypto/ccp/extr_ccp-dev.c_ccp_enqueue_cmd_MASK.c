
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_device {unsigned int cmd_q_count; scalar_t__ cmd_count; TYPE_1__* cmd_q; int cmd_lock; int suspending; int cmd; int backlog; } ;
struct ccp_cmd {int flags; int entry; struct ccp_device* ccp; int callback; } ;
struct TYPE_2__ {int kthread; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ccp_device* FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct ccp_cmd *VAR_7)
{
 struct ccp_device *VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 int VAR_11;


 VAR_8 = VAR_7->ccp ? VAR_7->ccp : FUNC_0();

 if (!VAR_8)
  return -VAR_4;


 if (!VAR_7->callback)
  return -VAR_3;

 VAR_7->ccp = VAR_8;

 FUNC_2(&VAR_8->cmd_lock, VAR_9);

 VAR_10 = VAR_8->cmd_q_count;

 if (VAR_8->cmd_count >= VAR_6) {
  if (VAR_7->flags & VAR_0) {
   VAR_11 = -VAR_1;
   FUNC_1(&VAR_7->entry, &VAR_8->backlog);
  } else {
   VAR_11 = -VAR_5;
  }
 } else {
  VAR_11 = -VAR_2;
  VAR_8->cmd_count++;
  FUNC_1(&VAR_7->entry, &VAR_8->cmd);


  if (!VAR_8->suspending) {
   for (VAR_10 = 0; VAR_10 < VAR_8->cmd_q_count; VAR_10++) {
    if (VAR_8->cmd_q[VAR_10].active)
     continue;

    break;
   }
  }
 }

 FUNC_3(&VAR_8->cmd_lock, VAR_9);


 if (VAR_10 < VAR_8->cmd_q_count)
  FUNC_4(VAR_8->cmd_q[VAR_10].kthread);

 return VAR_11;
}
