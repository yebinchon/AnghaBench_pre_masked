
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct physical {scalar_t__ fd; TYPE_2__ link; TYPE_1__* handler; } ;
typedef int fd_set ;
struct TYPE_3__ {int (* removefromset ) (struct physical*,int *,int *,int *) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (struct physical*,int *,int *,int *) ;

int
FUNC_4(struct physical *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4)
{
  if (VAR_1->handler && VAR_1->handler->removefromset)
    return (*VAR_1->handler->removefromset)(VAR_1, VAR_2, VAR_3, VAR_4);
  else {
    int VAR_5;

    VAR_5 = 0;
    if (VAR_1->fd >= 0) {
      if (VAR_2 && FUNC_1(VAR_1->fd, VAR_2)) {
        FUNC_0(VAR_1->fd, VAR_2);
        FUNC_2(VAR_0, "%s: fdunset(r) %d\n", VAR_1->link.name, VAR_1->fd);
        VAR_5++;
      }
      if (VAR_4 && FUNC_1(VAR_1->fd, VAR_4)) {
        FUNC_0(VAR_1->fd, VAR_4);
        FUNC_2(VAR_0, "%s: fdunset(e) %d\n", VAR_1->link.name, VAR_1->fd);
        VAR_5++;
      }
      if (VAR_3 && FUNC_1(VAR_1->fd, VAR_3)) {
        FUNC_0(VAR_1->fd, VAR_3);
        FUNC_2(VAR_0, "%s: fdunset(w) %d\n", VAR_1->link.name, VAR_1->fd);
        VAR_5++;
      }
    }

    return VAR_5;
  }
}
