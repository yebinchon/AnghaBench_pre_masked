
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_16__ {char* local; } ;
struct chap {TYPE_5__ challenge; } ;
struct authinfo {TYPE_10__* physical; } ;
struct TYPE_20__ {TYPE_8__* bundle; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_18__ {TYPE_6__ auth; } ;
struct TYPE_12__ {scalar_t__* file; } ;
struct TYPE_13__ {TYPE_1__ cfg; } ;
struct TYPE_19__ {TYPE_7__ cfg; TYPE_2__ radius; } ;
struct TYPE_14__ {int want_authtype; } ;
struct TYPE_15__ {TYPE_3__ lcp; } ;
struct TYPE_11__ {TYPE_9__* dl; TYPE_4__ link; } ;


 int VAR_0 ;
 struct chap* FUNC_0 (struct authinfo*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct authinfo *VAR_1)
{
  struct chap *VAR_2 = FUNC_0(VAR_1);
  int VAR_3, VAR_4;
  char *VAR_5;

  VAR_3 = FUNC_4(VAR_1->physical->dl->bundle->cfg.auth.name);

  if (!*VAR_2->challenge.local) {
    FUNC_2();
    VAR_5 = VAR_2->challenge.local;


    if (*VAR_1->physical->dl->bundle->radius.cfg.file) {

      *VAR_5++ = 16;
      for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
        *VAR_5++ = (FUNC_3() % 10) + '0';
    } else

    {

      if (VAR_1->physical->link.lcp.want_authtype == 0x80)
        *VAR_5++ = 8;
      else if (VAR_1->physical->link.lcp.want_authtype == 0x81)
        *VAR_5++ = 16;
      else

        *VAR_5++ = FUNC_3() % (VAR_0-16) + 16;
      for (VAR_4 = 0; VAR_4 < *VAR_2->challenge.local; VAR_4++)
        *VAR_5++ = FUNC_3() & 0xff;
    }
    FUNC_1(VAR_5, VAR_1->physical->dl->bundle->cfg.auth.name, VAR_3);
  }
}
