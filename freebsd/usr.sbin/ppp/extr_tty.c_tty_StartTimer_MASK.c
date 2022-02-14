
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; struct physical* arg; int func; int load; } ;
struct ttydevice {TYPE_2__ Timer; } ;
struct TYPE_4__ {int name; } ;
struct physical {TYPE_1__ link; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ttydevice* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct physical *VAR_3)
{
  struct ttydevice *VAR_4 = FUNC_0(VAR_3->handler);

  FUNC_3(&VAR_4->Timer);
  VAR_4->Timer.load = VAR_1;
  VAR_4->Timer.func = VAR_2;
  VAR_4->Timer.name = "tty CD";
  VAR_4->Timer.arg = VAR_3;
  FUNC_1(VAR_0, "%s: Using tty_Timeout [%p]\n",
             VAR_3->link.name, VAR_2);
  FUNC_2(&VAR_4->Timer);
}
