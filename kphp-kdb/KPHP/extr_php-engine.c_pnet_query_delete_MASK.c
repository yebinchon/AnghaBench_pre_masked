
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conn_query {int * extra; } ;
struct TYPE_5__ {TYPE_1__* func; } ;
typedef TYPE_2__ net_ansgen_t ;
struct TYPE_4__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct conn_query*,int) ;

void FUNC_3 (struct conn_query *VAR_0) {
  net_ansgen_t *VAR_1 = (net_ansgen_t *)VAR_0->extra;

  VAR_1->func->free (VAR_1);
  VAR_0->extra = ((void*)0);

  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0, sizeof (*VAR_0));
}
