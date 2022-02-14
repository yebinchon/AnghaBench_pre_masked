
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int logout; int hangup; } ;
struct TYPE_6__ {TYPE_2__ script; } ;
struct TYPE_4__ {scalar_t__ run; } ;
struct datalink {int stayonline; scalar_t__ state; TYPE_3__ cfg; int chat; TYPE_1__ script; int physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (struct datalink*) ;
 int FUNC_2 (struct datalink*) ;
 int FUNC_3 (struct datalink*,scalar_t__) ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct datalink *VAR_8, int VAR_9)
{
  int VAR_10;

  if (VAR_9 == VAR_0)
    FUNC_1(VAR_8);
  else if (VAR_9 == VAR_1)
    FUNC_4(VAR_8);

  VAR_10 = VAR_8->stayonline;
  VAR_8->stayonline = 0;

  if (VAR_8->state >= VAR_6 && VAR_10) {
    FUNC_7(VAR_8->physical);
    FUNC_3(VAR_8, VAR_6);
  } else if (VAR_8->state != VAR_2 && VAR_8->state != VAR_3) {
    FUNC_6(VAR_8->physical);
    if (VAR_8->script.run && VAR_8->state != VAR_5) {
      if (VAR_8->state == VAR_4) {
        FUNC_3(VAR_8, VAR_3);
        if (!FUNC_0(&VAR_8->chat, VAR_8->cfg.script.hangup, ((void*)0)))
          FUNC_5(VAR_7, "Invalid hangup script\n");
      } else {
        FUNC_3(VAR_8, VAR_4);
        if (!FUNC_0(&VAR_8->chat, VAR_8->cfg.script.logout, ((void*)0)))
          FUNC_5(VAR_7, "Invalid logout script\n");
      }
    } else
      FUNC_2(VAR_8);
  }
}
