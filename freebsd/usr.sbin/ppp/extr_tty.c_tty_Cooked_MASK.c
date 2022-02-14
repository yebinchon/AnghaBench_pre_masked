
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttydevice {int ios; } ;
struct TYPE_2__ {int name; } ;
struct physical {int fd; TYPE_1__ link; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct physical*) ;
 struct ttydevice* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct physical*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (struct physical*) ;

__attribute__((used)) static void
FUNC_8(struct physical *VAR_6)
{
  struct ttydevice *VAR_7 = FUNC_1(VAR_6->handler);
  int VAR_8;

  FUNC_7(VAR_6);

  FUNC_5(VAR_6->fd, VAR_4);

  if (!FUNC_4(VAR_6) && FUNC_6(VAR_6->fd, VAR_5, &VAR_7->ios) == -1)
    FUNC_3(VAR_2, "%s: tcsetattr: Unable to restore device settings\n",
               VAR_6->link.name);


  FUNC_0(VAR_6);


  if ((VAR_8 = FUNC_2(VAR_6->fd, VAR_0, 0)) != -1)
    FUNC_2(VAR_6->fd, VAR_1, VAR_8 & ~VAR_3);
}
