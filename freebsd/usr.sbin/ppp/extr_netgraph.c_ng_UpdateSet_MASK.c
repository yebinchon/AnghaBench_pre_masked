
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct physical {TYPE_1__ link; TYPE_2__* dl; int handler; } ;
struct ngdevice {int cs; } ;
struct fdescriptor {int dummy; } ;
typedef int fd_set ;
struct TYPE_4__ {int state; } ;




 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 struct physical* FUNC_1 (struct fdescriptor*) ;
 struct ngdevice* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct fdescriptor*,int *,int *,int *,int*,int ) ;

__attribute__((used)) static int
FUNC_5(struct fdescriptor *VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4, int *VAR_5)
{
  struct physical *VAR_6 = FUNC_1(VAR_1);
  struct ngdevice *VAR_7 = FUNC_2(VAR_6->handler);
  int VAR_8;

  switch (VAR_6->dl->state) {
    case 129:
    case 128:
      if (VAR_2) {
        FUNC_0(VAR_7->cs, VAR_2);
        FUNC_3(VAR_0, "%s(ctrl): fdset(r) %d\n", VAR_6->link.name, VAR_7->cs);
        VAR_8 = 1;
      } else
        VAR_8 = 0;
      break;

    default:
      VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
      break;
  }

  return VAR_8;
}
