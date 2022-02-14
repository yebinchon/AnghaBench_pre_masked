
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct conn_query {scalar_t__ req_generation; TYPE_2__* requester; } ;
struct TYPE_4__ {scalar_t__ generation; } ;
struct TYPE_3__ {scalar_t__ query_state; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct conn_query*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct conn_query*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int FUNC_4 (struct conn_query *VAR_8) {
  if (VAR_6 > 0) {
    FUNC_3 (VAR_5, "delayed query %p timed out\n", VAR_8);
  }
  if (VAR_8->requester && VAR_8->requester->generation == VAR_8->req_generation) {
    FUNC_1 (FUNC_0(VAR_8->requester)->query_state == VAR_4);
    FUNC_0(VAR_8->requester)->query_state = VAR_3;
  }
  VAR_0++;
  FUNC_2 (VAR_8);
  VAR_7--;
  VAR_2++;
  VAR_1++;
  return 0;
}
