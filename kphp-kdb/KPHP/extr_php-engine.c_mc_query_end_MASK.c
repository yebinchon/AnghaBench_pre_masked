
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conn_query {scalar_t__ extra; } ;
struct TYPE_5__ {TYPE_1__* func; } ;
typedef TYPE_2__ mc_ansgen_t ;
struct TYPE_4__ {int (* end ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (struct conn_query *VAR_0) {
  mc_ansgen_t *VAR_1 = (mc_ansgen_t *)VAR_0->extra;
  VAR_1->func->end (VAR_1);

  return FUNC_0 (VAR_0);
}
