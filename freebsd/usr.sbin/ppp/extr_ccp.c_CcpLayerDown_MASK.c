
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fsm {TYPE_1__* link; } ;
struct ccp_opt {struct ccp_opt* next; } ;
struct TYPE_11__ {size_t algorithm; struct ccp_opt* opt; int * state; } ;
struct TYPE_9__ {size_t algorithm; int * state; } ;
struct ccp {TYPE_5__ out; scalar_t__ my_reject; scalar_t__ his_reject; TYPE_3__ in; } ;
struct TYPE_10__ {int (* Term ) (int *) ;} ;
struct TYPE_8__ {int (* Term ) (int *) ;} ;
struct TYPE_12__ {TYPE_4__ o; TYPE_2__ i; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 TYPE_6__** VAR_1 ;
 int FUNC_0 (struct ccp*) ;
 int FUNC_1 (struct ccp_opt*) ;
 struct ccp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct fsm *VAR_2)
{

  struct ccp *VAR_3 = FUNC_2(VAR_2);
  struct ccp_opt *VAR_4;

  FUNC_3(VAR_0, "%s: LayerDown.\n", VAR_2->link->name);
  if (VAR_3->in.state != ((void*)0)) {
    (*VAR_1[VAR_3->in.algorithm]->i.Term)(VAR_3->in.state);
    VAR_3->in.state = ((void*)0);
    VAR_3->in.algorithm = -1;
  }
  if (VAR_3->out.state != ((void*)0)) {
    (*VAR_1[VAR_3->out.algorithm]->o.Term)(VAR_3->out.state);
    VAR_3->out.state = ((void*)0);
    VAR_3->out.algorithm = -1;
  }
  VAR_3->his_reject = VAR_3->my_reject = 0;

  while (VAR_3->out.opt) {
    VAR_4 = VAR_3->out.opt->next;
    FUNC_1(VAR_3->out.opt);
    VAR_3->out.opt = VAR_4;
  }
  FUNC_0(VAR_3);
}
