
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {scalar_t__ status; int flags; TYPE_2__* ev; TYPE_1__* type; int fd; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int (* close ) (struct connection*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct connection*,int ,int) ;
 int FUNC_3 (struct connection*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int,char*,int ) ;

int FUNC_5 (struct connection *VAR_4) {
  FUNC_4 (1, "socket %d: forced closing\n", VAR_4->fd);
  if (VAR_4->status != VAR_2) {
    VAR_1--;
    if (VAR_4->flags & VAR_0) {
      FUNC_1 (VAR_4);
    }
  } else {
    VAR_3++;
  }
  VAR_4->type->close (VAR_4, 0);
  FUNC_0 (VAR_4);

  if (VAR_4->ev) {
    VAR_4->ev->data = 0;
  }
  FUNC_2 (VAR_4, 0, sizeof(struct connection));

  return 1;
}
