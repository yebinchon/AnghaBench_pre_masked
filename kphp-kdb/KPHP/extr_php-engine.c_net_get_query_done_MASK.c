
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conn_query {scalar_t__ extra; } ;
struct TYPE_5__ {TYPE_1__* func; } ;
typedef TYPE_2__ net_get_ansgen_t ;
struct TYPE_4__ {int (* done ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct conn_query*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3 (struct conn_query *VAR_0) {
  net_get_ansgen_t *VAR_1 = (net_get_ansgen_t *)VAR_0->extra;
  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (VAR_1->func != ((void*)0));
  FUNC_0 (VAR_1->func->done != ((void*)0));
  VAR_1->func->done (VAR_1);

  return FUNC_1 (VAR_0);
}
