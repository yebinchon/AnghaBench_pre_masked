
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ total_bytes; } ;
struct connection {int flags; TYPE_1__ Out; int status; scalar_t__ pending_queries; scalar_t__ generation; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct connection*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2 (struct connection *VAR_5) {


  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "pmemcached_engine_wakeup (%p)\n", VAR_5);
  }

  VAR_5->generation = ++VAR_1;
  VAR_5->pending_queries = 0;
  VAR_5->status = VAR_2;




  FUNC_0 (VAR_5);

  if (VAR_5->Out.total_bytes > 0) {
    VAR_5->flags |= VAR_0;
  }

  return 0;
}
