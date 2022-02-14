
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* name; int load; void* arg; int func; } ;
struct TYPE_8__ {int (* req ) (struct authinfo*) ;} ;
struct TYPE_6__ {int timeout; int maxreq; } ;
struct TYPE_7__ {TYPE_1__ fsm; } ;
struct authinfo {int id; TYPE_4__ authtimer; TYPE_3__ fn; TYPE_2__ cfg; int retry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct authinfo*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

void
FUNC_3(struct authinfo *VAR_2)
{
  FUNC_2(&VAR_2->authtimer);
  VAR_2->authtimer.func = VAR_0;
  VAR_2->authtimer.name = "auth";
  VAR_2->authtimer.load = VAR_2->cfg.fsm.timeout * VAR_1;
  VAR_2->authtimer.arg = (void *)VAR_2;
  VAR_2->retry = VAR_2->cfg.fsm.maxreq;
  VAR_2->id = 1;
  (*VAR_2->fn.req)(VAR_2);
  FUNC_1(&VAR_2->authtimer);
}
