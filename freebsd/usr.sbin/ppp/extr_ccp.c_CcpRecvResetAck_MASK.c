
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct fsm {TYPE_1__* link; } ;
struct TYPE_7__ {size_t algorithm; int * state; } ;
struct ccp {int reset_sent; int last_reset; TYPE_3__ in; } ;
struct TYPE_6__ {int (* Reset ) (int *) ;} ;
struct TYPE_8__ {TYPE_2__ i; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 TYPE_4__** VAR_1 ;
 struct ccp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct fsm *VAR_2, u_char VAR_3)
{

  struct ccp *VAR_4 = FUNC_0(VAR_2);

  if (VAR_4->reset_sent != -1) {
    if (VAR_3 != VAR_4->reset_sent) {
      FUNC_1(VAR_0, "%s: Incorrect ResetAck (id %d, not %d)"
                " ignored\n", VAR_2->link->name, VAR_3, VAR_4->reset_sent);
      return;
    }

  } else if (VAR_3 == VAR_4->last_reset)
    FUNC_1(VAR_0, "%s: Duplicate ResetAck (resetting again)\n",
               VAR_2->link->name);
  else {
    FUNC_1(VAR_0, "%s: Unexpected ResetAck (id %d) ignored\n",
               VAR_2->link->name, VAR_3);
    return;
  }

  VAR_4->last_reset = VAR_4->reset_sent;
  VAR_4->reset_sent = -1;
  if (VAR_4->in.state != ((void*)0))
    (*VAR_1[VAR_4->in.algorithm]->i.Reset)(VAR_4->in.state);
}
