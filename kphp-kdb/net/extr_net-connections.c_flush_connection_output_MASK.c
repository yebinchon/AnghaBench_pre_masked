
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int flags; int fd; TYPE_1__* type; } ;
struct TYPE_2__ {int (* writer ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct connection*) ;
 scalar_t__ FUNC_3 (struct connection*) ;
 int FUNC_4 (struct connection*) ;

int FUNC_5 (struct connection *VAR_2) {
  if (FUNC_2 (VAR_2) + FUNC_3 (VAR_2) > 0) {
    VAR_2->flags |= VAR_1;
    int VAR_3 = VAR_2->type->writer (VAR_2);
    if (FUNC_2 (VAR_2) > 0 && !(VAR_2->flags & VAR_0)) {
      FUNC_1 (VAR_2->fd, FUNC_0 (VAR_2));
    }
    return VAR_3;
  } else {
    return 0;
  }
}
