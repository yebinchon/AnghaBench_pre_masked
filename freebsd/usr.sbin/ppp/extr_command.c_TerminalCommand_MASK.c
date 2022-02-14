
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cmdargs {TYPE_5__* cx; int prompt; } ;
struct TYPE_11__ {TYPE_4__* physical; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_1__ fsm; } ;
struct TYPE_9__ {TYPE_2__ lcp; } ;
struct TYPE_10__ {TYPE_3__ link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_5(struct cmdargs const *VAR_2)
{
  if (!VAR_2->prompt) {
    FUNC_2(VAR_0, "term: Need a prompt\n");
    return 1;
  }

  if (VAR_2->cx->physical->link.lcp.fsm.state > VAR_1) {
    FUNC_3(VAR_2->prompt, "LCP state is [%s]\n",
                  FUNC_0(VAR_2->cx->physical->link.lcp.fsm.state));
    return 1;
  }

  FUNC_1(VAR_2->cx, 0, 0);
  FUNC_4(VAR_2->prompt, VAR_2->cx);
  return 0;
}
