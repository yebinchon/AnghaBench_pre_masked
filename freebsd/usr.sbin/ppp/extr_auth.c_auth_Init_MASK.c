
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct physical {int dummy; } ;
struct TYPE_4__ {void* failure; void* success; void* req; } ;
struct TYPE_6__ {scalar_t__ maxtrm; int maxreq; int timeout; } ;
struct TYPE_5__ {TYPE_3__ fsm; } ;
struct authinfo {struct physical* physical; TYPE_1__ fn; TYPE_2__ cfg; } ;
typedef void* auth_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct authinfo*,char,int) ;

void
FUNC_1(struct authinfo *VAR_2, struct physical *VAR_3, auth_func VAR_4,
          auth_func VAR_5, auth_func VAR_6)
{
  FUNC_0(VAR_2, '\0', sizeof(struct authinfo));
  VAR_2->cfg.fsm.timeout = VAR_1;
  VAR_2->cfg.fsm.maxreq = VAR_0;
  VAR_2->cfg.fsm.maxtrm = 0;
  VAR_2->fn.req = VAR_4;
  VAR_2->fn.success = VAR_5;
  VAR_2->fn.failure = VAR_6;
  VAR_2->physical = VAR_3;
}
