
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct physical {TYPE_2__* handler; TYPE_1__ link; } ;
struct etherdevice {scalar_t__ cs; } ;
typedef int fd_set ;
struct TYPE_4__ {int (* removefromset ) (struct physical*,int *,int *,int *) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int VAR_0 ;
 struct etherdevice* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct physical*,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct physical *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4)
{
  struct etherdevice *VAR_5 = FUNC_2(VAR_1->handler);
  int VAR_6;

  if (VAR_2 && VAR_5->cs >= 0 && FUNC_1(VAR_5->cs, VAR_2)) {
    FUNC_0(VAR_5->cs, VAR_2);
    FUNC_3(VAR_0, "%s: fdunset(ctrl) %d\n", VAR_1->link.name, VAR_5->cs);
    VAR_6 = 1;
  } else
    VAR_6 = 0;



  VAR_1->handler->removefromset = ((void*)0);
  VAR_6 += FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_1->handler->removefromset = FUNC_5;

  return VAR_6;
}
