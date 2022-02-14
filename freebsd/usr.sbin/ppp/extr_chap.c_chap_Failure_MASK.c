
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* file; } ;
struct TYPE_11__ {char* errstr; TYPE_2__ cfg; } ;
struct bundle {TYPE_3__ radius; } ;
struct authinfo {TYPE_8__* physical; int id; } ;
struct TYPE_9__ {struct bundle* bundle; } ;
struct TYPE_12__ {int want_authtype; TYPE_1__ fsm; } ;
struct TYPE_13__ {TYPE_4__ lcp; } ;
struct TYPE_16__ {int dl; TYPE_5__ link; } ;
struct TYPE_14__ {int* local; } ;
struct TYPE_15__ {TYPE_6__ challenge; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,int ,int ,char const*,scalar_t__,int *) ;
 TYPE_7__* FUNC_1 (struct authinfo*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct authinfo *VAR_1)
{

  char VAR_2[1024], *VAR_3;

  const char *VAR_4;


  struct bundle *VAR_5 = VAR_1->physical->link.lcp.fsm.bundle;
  if (*VAR_5->radius.cfg.file && VAR_5->radius.errstr)
    VAR_4 = VAR_5->radius.errstr;
  else


  if (VAR_1->physical->link.lcp.want_authtype == 0x80) {
    FUNC_3(VAR_2, "E=691 R=1 M=Invalid!");
    VAR_4 = VAR_2;
  } else if (VAR_1->physical->link.lcp.want_authtype == 0x81) {
    int VAR_6;

    VAR_3 = VAR_2;
    VAR_3 += FUNC_3(VAR_2, "E=691 R=0 C=");
    for (VAR_6=0; VAR_6<16; VAR_6++)
      VAR_3 += FUNC_3(VAR_3, "%02X", *(FUNC_1(VAR_1)->challenge.local+1+VAR_6));

    FUNC_3(VAR_3, " V=3 M=Invalid!");
    VAR_4 = VAR_2;
  } else

    VAR_4 = "Invalid!!";

  FUNC_0(VAR_1->physical, VAR_0, VAR_1->id, VAR_4, FUNC_4(VAR_4) + 1,
             ((void*)0));
  FUNC_2(VAR_1->physical->dl);
}
