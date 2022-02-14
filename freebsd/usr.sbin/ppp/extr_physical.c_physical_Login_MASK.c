
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct utmpx {int ut_host; int ut_line; int ut_user; int ut_id; int ut_tv; int ut_type; } ;
struct TYPE_4__ {char const* base; } ;
struct physical {scalar_t__ type; int Utmp; TYPE_2__ name; TYPE_1__* handler; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 (struct utmpx*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (int ,char,int) ;
 int FUNC_5 (struct utmpx*,int ,int) ;
 int FUNC_6 (int ,int,char*,int) ;
 int FUNC_7 (int ,char const*,int) ;

void
FUNC_8(struct physical *VAR_4, const char *VAR_5)
{
  if (VAR_4->type == VAR_0 && *VAR_4->name.base && !VAR_4->Utmp) {
    struct utmpx VAR_6;
    const char *VAR_7;
    char *VAR_8;

    FUNC_5(&VAR_6, 0, sizeof VAR_6);
    VAR_6.ut_type = VAR_3;
    FUNC_3(&VAR_6.ut_tv, ((void*)0));
    FUNC_6(VAR_6.ut_id, sizeof VAR_6.ut_id, "%xppp", (int)FUNC_2());
    FUNC_7(VAR_6.ut_user, VAR_5, sizeof VAR_6.ut_user);
    if (VAR_4->handler && (VAR_4->handler->type == VAR_1 ||
                       VAR_4->handler->type == VAR_2)) {
      FUNC_7(VAR_6.ut_host, VAR_4->name.base, sizeof VAR_6.ut_host);
      VAR_8 = FUNC_4(VAR_6.ut_host, ':', sizeof VAR_6.ut_host);
      if (VAR_8)
        *VAR_8 = '\0';
    } else
      FUNC_7(VAR_6.ut_line, VAR_4->name.base, sizeof VAR_6.ut_line);
    if ((VAR_7 = FUNC_1("CONNECT")))

      FUNC_7(VAR_6.ut_host, VAR_7, sizeof VAR_6.ut_host);
    FUNC_0(&VAR_6);
    VAR_4->Utmp = 1;
  }
}
