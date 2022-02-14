
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {scalar_t__ status; int flags; TYPE_1__ Out; } ;
struct TYPE_4__ {int (* ht_wakeup ) (struct connection*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_4) {
  if (VAR_4->status == VAR_3 || VAR_4->status == VAR_2) {
    VAR_4->status = VAR_1;
    FUNC_0(VAR_4)->ht_wakeup (VAR_4);
  }
  if (VAR_4->Out.total_bytes > 0) {
    VAR_4->flags |= VAR_0;
  }


  return 0;
}
