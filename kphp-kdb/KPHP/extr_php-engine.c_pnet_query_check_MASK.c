
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conn_query {scalar_t__ extra; } ;
struct TYPE_2__ {int state; } ;
typedef TYPE_1__ net_ansgen_t ;
typedef int ansgen_state_t ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (struct conn_query*) ;




int FUNC_2 (struct conn_query *VAR_0) {
  net_ansgen_t *VAR_1 = (net_ansgen_t *)VAR_0->extra;

  ansgen_state_t VAR_2 = VAR_1->state;
  switch (VAR_2) {
    case 130:
    case 129:
      FUNC_0 (VAR_0);
      FUNC_1 (VAR_0);
      break;

    case 128:
      break;
  }

  return VAR_2 == 129;
}
