
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct physical {TYPE_2__* dl; } ;
struct TYPE_4__ {scalar_t__ state; int phone; } ;
struct TYPE_6__ {int required; TYPE_1__ fsm; } ;
struct TYPE_5__ {TYPE_3__ cbcp; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

void
FUNC_2(struct physical *VAR_3)
{
  if (VAR_3->dl->cbcp.fsm.state == VAR_0) {

    VAR_3->dl->cbcp.required = 1;
    FUNC_1(VAR_2, "%s: CBCP: Will dial back on %s\n", VAR_3->dl->name,
               VAR_3->dl->cbcp.fsm.phone);
  } else
    FUNC_0(&VAR_3->dl->cbcp, VAR_1);
}
