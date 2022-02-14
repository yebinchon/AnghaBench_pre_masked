
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {int fd; int status; scalar_t__ pending_queries; scalar_t__ generation; int flags; TYPE_1__ Out; } ;
struct TYPE_4__ {int (* sql_wakeup ) (struct connection*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_4 ;
 int FUNC_2 (struct connection*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3 (struct connection *VAR_6) {
  if (VAR_5 > 1) {
    FUNC_1 (VAR_4, "sqls_wakeup for #%d: status=%d\n", VAR_6->fd, VAR_6->status);
  }
  if (VAR_6->status == VAR_3) {
    FUNC_0(VAR_6)->sql_wakeup (VAR_6);
    if (VAR_6->status == VAR_3) {
      VAR_6->status = VAR_1;
    }
  }
  if (VAR_6->Out.total_bytes > 0) {
    VAR_6->flags |= VAR_0;
  }
  VAR_6->generation = ++VAR_2;
  VAR_6->pending_queries = 0;
  return 0;
}
