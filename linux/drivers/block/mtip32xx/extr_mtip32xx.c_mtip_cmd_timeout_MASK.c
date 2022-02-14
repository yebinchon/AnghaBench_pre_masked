
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int tag; TYPE_1__* q; } ;
struct mtip_cmd {int status; } ;
struct driver_data {TYPE_2__* port; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_4__ {int svc_wait; int flags; int cmds_to_issue; } ;
struct TYPE_3__ {struct driver_data* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request*) ;
 struct mtip_cmd* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_5(struct request *VAR_4,
        bool VAR_5)
{
 struct driver_data *VAR_6 = VAR_4->q->queuedata;

 if (VAR_5) {
  struct mtip_cmd *VAR_7 = FUNC_1(VAR_4);

  VAR_7->status = VAR_2;
  FUNC_0(VAR_4);
  return VAR_0;
 }

 if (FUNC_3(VAR_4->tag, VAR_6->port->cmds_to_issue))
  goto exit_handler;

 if (FUNC_2(VAR_3, &VAR_6->port->flags))
  goto exit_handler;

 FUNC_4(&VAR_6->port->svc_wait);
exit_handler:
 return VAR_1;
}
