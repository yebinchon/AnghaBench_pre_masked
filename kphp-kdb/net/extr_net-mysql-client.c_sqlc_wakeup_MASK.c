
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {scalar_t__ status; scalar_t__ pending_queries; scalar_t__ generation; int flags; TYPE_1__ Out; } ;
struct TYPE_4__ {int (* sql_wakeup ) (struct connection*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct connection*) ;

__attribute__((used)) static int FUNC_2 (struct connection *VAR_4) {
  if (VAR_4->status == VAR_3) {
    VAR_4->status = VAR_2;
    FUNC_0(VAR_4)->sql_wakeup (VAR_4);
  }
  if (VAR_4->Out.total_bytes > 0) {
    VAR_4->flags |= VAR_0;
  }
  VAR_4->generation = ++VAR_1;
  VAR_4->pending_queries = 0;
  return 0;
}
