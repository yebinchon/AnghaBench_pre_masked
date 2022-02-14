
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ unknownproto; scalar_t__ badcommand; scalar_t__ badaddr; scalar_t__ badfcs; } ;
struct TYPE_10__ {TYPE_3__* owner; } ;
struct hdlc {int ReportTimer; TYPE_5__ stats; TYPE_5__ laststats; TYPE_4__ lqm; } ;
struct TYPE_8__ {TYPE_1__* link; } ;
struct TYPE_9__ {TYPE_2__ fsm; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{

  struct hdlc *VAR_2 = (struct hdlc *)VAR_1;

  FUNC_3(&VAR_2->ReportTimer);

  if (FUNC_1(&VAR_2->laststats, &VAR_2->stats, sizeof VAR_2->stats)) {
    FUNC_0(VAR_0,
              "%s: HDLC errors -> FCS: %u, ADDR: %u, COMD: %u, PROTO: %u\n",
              VAR_2->lqm.owner->fsm.link->name,
       VAR_2->stats.badfcs - VAR_2->laststats.badfcs,
              VAR_2->stats.badaddr - VAR_2->laststats.badaddr,
              VAR_2->stats.badcommand - VAR_2->laststats.badcommand,
              VAR_2->stats.unknownproto - VAR_2->laststats.unknownproto);
    VAR_2->laststats = VAR_2->stats;
  }

  FUNC_2(&VAR_2->ReportTimer);
}
