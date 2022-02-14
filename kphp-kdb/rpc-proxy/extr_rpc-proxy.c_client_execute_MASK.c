
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_query {int dummy; } ;
struct TYPE_6__ {TYPE_1__* h; int (* fail_query ) (int ,int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ op; int qid; } ;


 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rpc_query* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_query*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,char*,...) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8 (void) {
  if (VAR_0->h) {
    FUNC_5 (VAR_0->h);
    VAR_0->h = 0;
  }
  VAR_0->h = FUNC_7 (sizeof (*(VAR_0->h)));
  if (FUNC_4 (VAR_0->h) < 0) {
    VAR_4 ++;
    FUNC_6 (3, "Can not fetch header\n");
    VAR_7 ++;
    VAR_0->fail_query (0, 0, 0);
    return;
  }
  if (VAR_0->h->op == VAR_1 || VAR_0->h->op == VAR_2) { VAR_5 ++; }
  else { VAR_3 ++; }

  struct rpc_query *VAR_8 = FUNC_0 (VAR_0->h->qid);
  if (!VAR_8) {
    VAR_6 ++;
    VAR_7 ++;
    VAR_0->fail_query (0, 0, 0);
    FUNC_6 (3, "Answer for unknown query (qid = %lld)\n", VAR_0->h->qid);
  } else {
    FUNC_1 (VAR_8);
    FUNC_6 (3, "Query end\n");
  }
}
