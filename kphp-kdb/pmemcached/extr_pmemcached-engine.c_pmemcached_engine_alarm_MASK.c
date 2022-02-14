
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int fd; int pending_queries; int status; int flags; TYPE_1__* Tmp; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;
struct TYPE_3__ {scalar_t__ total_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (struct connection*) ;
 scalar_t__ FUNC_4 (struct connection*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5 (struct connection *VAR_7) {
  if (VAR_5 > 1) {
    FUNC_1 (VAR_4, "pmemcached_engine connection %d timeout alarm, %d queries pending, status=%d\n", VAR_7->fd, VAR_7->pending_queries, VAR_7->status);
  }
  if (VAR_7->Tmp && !VAR_2 && VAR_7->Tmp->total_bytes) {
    if (FUNC_4 (VAR_7, 0)) {
      if (VAR_3->ptr) {
        FUNC_2 (VAR_3->ptr);
        VAR_6 --;

      }
    }
  }
  FUNC_0 (VAR_7->status == VAR_1);
  VAR_7->flags |= VAR_0;
  return FUNC_3 (VAR_7);
}
