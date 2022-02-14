
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int terminated; } ;
struct gather_data {TYPE_2__* c; TYPE_1__ Out; } ;
struct conn_query {scalar_t__ req_generation; } ;
struct TYPE_4__ {scalar_t__ generation; } ;


 struct gather_data* FUNC_0 (struct conn_query*) ;
 int FUNC_1 (struct conn_query*) ;
 int FUNC_2 (struct gather_data*) ;
 int FUNC_3 (struct gather_data*) ;
 int FUNC_4 (struct conn_query*,int) ;

int FUNC_5 (struct conn_query *VAR_0) {
  struct gather_data *VAR_1 = FUNC_0(VAR_0);
  if (!VAR_1->Out.terminated) {
    return 0;
  }
  if (VAR_1->c->generation == VAR_0->req_generation) {
    FUNC_3 (VAR_1);
  }
  FUNC_1 (VAR_0);
  FUNC_2 (VAR_1);
  FUNC_4 (VAR_0, sizeof (struct conn_query));
  return 0;
}
