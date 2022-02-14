
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int fd; int disc; scalar_t__ speed; } ;
struct ttydevice {int cs; char* hook; TYPE_2__ dev; TYPE_1__ real; } ;
struct TYPE_6__ {scalar_t__ name; } ;
struct physical {int fd; TYPE_3__ link; int handler; } ;


 scalar_t__ FUNC_0 (int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct ttydevice* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ttydevice*) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (struct physical*,scalar_t__) ;
 int FUNC_6 (struct physical*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct physical *VAR_4)
{
  struct ttydevice *VAR_5 = FUNC_2(VAR_4->handler);

  if (FUNC_3(VAR_5)) {
    if (!FUNC_5(VAR_4, VAR_5->real.speed))
      FUNC_4(VAR_1, "Couldn't reset tty speed to %d\n", VAR_5->real.speed);
    VAR_5->real.speed = 0;
    FUNC_1(VAR_4->fd);
    VAR_4->fd = VAR_5->real.fd;
    VAR_5->real.fd = -1;
    FUNC_1(VAR_5->cs);
    VAR_5->cs = -1;
    *VAR_5->hook = '\0';
    if (FUNC_0(VAR_4->fd, VAR_3, &VAR_5->real.disc) == 0) {
      FUNC_6(VAR_4, VAR_5->dev.name, VAR_2);
      FUNC_4(VAR_0, "%s: Unloaded netgraph tty line discipline\n",
                 VAR_4->link.name);
    } else
      FUNC_4(VAR_1, "%s: Failed to unload netgraph tty line discipline\n",
                 VAR_4->link.name);
  }
}
