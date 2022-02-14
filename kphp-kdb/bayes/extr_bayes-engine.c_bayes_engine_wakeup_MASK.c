
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcs_data {scalar_t__ query_type; } ;
struct TYPE_2__ {scalar_t__ total_bytes; } ;
struct connection {int flags; TYPE_1__ Out; int status; scalar_t__ pending_queries; scalar_t__ generation; } ;


 int VAR_0 ;
 struct mcs_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct connection*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4 (struct connection *VAR_6) {
  struct mcs_data *VAR_7 = FUNC_0 (VAR_6);

  if (VAR_5 > 1) {
    FUNC_3 (VAR_4, "bayes_engine_wakeup (%p)\n", VAR_6);
  }

  VAR_6->generation = ++VAR_1;
  VAR_6->pending_queries = 0;
  VAR_6->status = VAR_2;
  FUNC_1 (VAR_7->query_type == VAR_3);
  FUNC_2 (VAR_6);

  if (VAR_6->Out.total_bytes > 0) {
    VAR_6->flags |= VAR_0;
  }

  return 0;
}
