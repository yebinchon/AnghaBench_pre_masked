
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {scalar_t__ pending_queries; scalar_t__ generation; int flags; TYPE_1__ out_p; } ;
struct TYPE_4__ {int (* rpc_alarm ) (struct connection*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_2) {
  FUNC_0(VAR_2)->rpc_alarm (VAR_2);
  if (VAR_2->out_p.total_bytes > 0) {
    VAR_2->flags |= VAR_0;
  }
  VAR_2->generation = ++VAR_1;
  VAR_2->pending_queries = 0;
  return 0;
}
