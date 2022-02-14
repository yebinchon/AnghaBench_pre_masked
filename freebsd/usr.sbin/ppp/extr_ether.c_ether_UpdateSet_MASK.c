
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct physical {TYPE_1__ link; int handler; } ;
struct fdescriptor {int dummy; } ;
struct etherdevice {scalar_t__ cs; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 struct etherdevice* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct fdescriptor*,int *,int *,int *,int*,int ) ;

__attribute__((used)) static int
FUNC_5(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4, int *VAR_5)
{
  struct physical *VAR_6 = FUNC_1(VAR_1);
  struct etherdevice *VAR_7 = FUNC_2(VAR_6->handler);
  int VAR_8;

  if (VAR_2 && VAR_7->cs >= 0) {
    FUNC_0(VAR_7->cs, VAR_2);
    FUNC_3(VAR_0, "%s(ctrl): fdset(r) %d\n", VAR_6->link.name, VAR_7->cs);
    VAR_8 = 1;
  } else
    VAR_8 = 0;

  VAR_8 += FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);

  return VAR_8;
}
