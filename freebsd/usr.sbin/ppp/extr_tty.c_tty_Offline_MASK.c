
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttydevice {int mbits; int Timer; } ;
struct termios {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct physical {scalar_t__ fd; TYPE_1__ link; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ttydevice*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct termios*,int ) ;
 struct ttydevice* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (scalar_t__,struct termios*) ;
 int FUNC_5 (scalar_t__,int ,struct termios*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct physical *VAR_4)
{
  struct ttydevice *VAR_5 = FUNC_2(VAR_4->handler);

  if (VAR_4->fd >= 0) {
    FUNC_6(&VAR_5->Timer);
    VAR_5->mbits &= ~VAR_3;
    if (FUNC_0(VAR_5)) {
      struct termios VAR_6;

      FUNC_4(VAR_4->fd, &VAR_6);
      if (FUNC_1(&VAR_6, VAR_0) == -1 || FUNC_5(VAR_4->fd, VAR_2, &VAR_6) == -1)
        FUNC_3(VAR_1, "%s: Unable to set physical to speed 0\n",
                   VAR_4->link.name);
    }
  }
}
