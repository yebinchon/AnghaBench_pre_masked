
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct physical {TYPE_1__ link; TYPE_2__* handler; } ;
struct execdevice {scalar_t__ fd_out; } ;
typedef int fd_set ;
struct TYPE_4__ {int (* removefromset ) (struct physical*,int *,int *,int *) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 struct execdevice* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ,scalar_t__) ;
 int FUNC_4 (struct physical*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct physical *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4)
{
  struct execdevice *VAR_5 = FUNC_2(VAR_1->handler);
  int VAR_6;

  VAR_1->handler->removefromset = ((void*)0);
  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_1->handler->removefromset = FUNC_5;

  if (VAR_5->fd_out >= 0) {
    if (VAR_3 && FUNC_1(VAR_5->fd_out, VAR_3)) {
      FUNC_0(VAR_5->fd_out, VAR_3);
      FUNC_3(VAR_0, "%s: fdunset(w) %d\n", VAR_1->link.name, VAR_5->fd_out);
      VAR_6++;
    }
    if (VAR_4 && FUNC_1(VAR_5->fd_out, VAR_4)) {
      FUNC_0(VAR_5->fd_out, VAR_4);
      FUNC_3(VAR_0, "%s: fdunset(e) %d\n", VAR_1->link.name, VAR_5->fd_out);
      VAR_6++;
    }
  }

  return VAR_6;
}
