
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct utmpx {int ut_id; int ut_tv; int ut_type; } ;
struct TYPE_9__ {char* full; char* base; } ;
struct TYPE_6__ {int total; } ;
struct TYPE_7__ {int name; TYPE_1__ stats; } ;
struct physical {int fd; scalar_t__ session_owner; TYPE_4__ name; TYPE_3__* handler; TYPE_2__ link; TYPE_5__* dl; scalar_t__ Utmp; } ;
typedef scalar_t__ pid_t ;
struct TYPE_10__ {int bundle; } ;
struct TYPE_8__ {int (* destroy ) (struct physical*) ;int (* cooked ) (struct physical*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct utmpx*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct utmpx*,int ,int) ;
 int FUNC_11 (struct physical*) ;
 int FUNC_12 (struct physical*) ;
 int FUNC_13 (char*,int,char*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct physical*) ;
 int FUNC_16 (struct physical*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *) ;

void
FUNC_20(struct physical *VAR_8)
{
  int VAR_9;
  char VAR_10[VAR_4];
  struct utmpx VAR_11;

  if (VAR_8->fd < 0)
    return;

  FUNC_8(VAR_2, "%s: Close\n", VAR_8->link.name);

  if (VAR_8->handler && VAR_8->handler->cooked)
    (*VAR_8->handler->cooked)(VAR_8);

  FUNC_11(VAR_8);
  if (VAR_8->Utmp) {
    FUNC_10(&VAR_11, 0, sizeof VAR_11);
    VAR_11.ut_type = VAR_0;
    FUNC_7(&VAR_11.ut_tv, ((void*)0));
    FUNC_13(VAR_11.ut_id, sizeof VAR_11.ut_id, "%xppp", (int)FUNC_6());
    FUNC_1(&VAR_11);
    VAR_8->Utmp = 0;
  }
  VAR_9 = FUNC_17(VAR_8->fd) == FUNC_5();
  FUNC_4(VAR_8->fd);
  VAR_8->fd = -1;
  FUNC_9(VAR_8->dl);

  FUNC_19(&VAR_8->link.stats.total);
  FUNC_18(&VAR_8->link.stats.total, VAR_3, VAR_8->link.name);

  if (VAR_8->session_owner != (pid_t)-1) {
    FUNC_8(VAR_3, "%s: HUPing %ld\n", VAR_8->link.name,
               (long)VAR_8->session_owner);
    FUNC_0(VAR_8->session_owner, VAR_5);
    VAR_8->session_owner = (pid_t)-1;
  }

  if (VAR_9)
    FUNC_3(VAR_8->dl->bundle, 0);

  if (*VAR_8->name.full == '/') {
    FUNC_13(VAR_10, sizeof VAR_10, "%s%s.if", VAR_6, VAR_8->name.base);
    if (FUNC_2(VAR_10) == -1)
      FUNC_8(VAR_1, "%s: Can't remove %s: %s\n",
                 VAR_8->link.name, VAR_10, FUNC_14(VAR_7));
  }
  FUNC_12(VAR_8);
  if (VAR_8->handler && VAR_8->handler->destroy)
    (*VAR_8->handler->destroy)(VAR_8);
  VAR_8->handler = ((void*)0);
  VAR_8->name.base = VAR_8->name.full;
  *VAR_8->name.full = '\0';
}
