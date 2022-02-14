
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* file; } ;
struct TYPE_12__ {char* msrepstr; char* repstr; TYPE_1__ cfg; } ;
struct bundle {TYPE_2__ radius; } ;
struct TYPE_13__ {int name; } ;
struct authinfo {TYPE_6__* physical; TYPE_3__ in; int id; } ;
struct TYPE_18__ {char* authresponse; } ;
struct TYPE_17__ {struct bundle* bundle; } ;
struct TYPE_14__ {int want_authtype; scalar_t__ auth_iwait; scalar_t__ auth_ineed; } ;
struct TYPE_15__ {TYPE_4__ lcp; } ;
struct TYPE_16__ {TYPE_7__* dl; TYPE_5__ link; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,int ,char const*,int ,int *) ;
 scalar_t__ FUNC_1 (struct bundle*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_2 (struct authinfo*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(struct authinfo *VAR_3)
{
  struct bundle *VAR_4 = VAR_3->physical->dl->bundle;
  const char *VAR_5;

  FUNC_4(VAR_3->physical->dl, VAR_3->in.name);

  if (VAR_3->physical->link.lcp.want_authtype == 0x81) {

    if (*VAR_4->radius.cfg.file && VAR_4->radius.msrepstr)
      VAR_5 = VAR_4->radius.msrepstr;
    else

      VAR_5 = FUNC_2(VAR_3)->authresponse;
    VAR_1 = 1;
  } else


  if (*VAR_4->radius.cfg.file && VAR_4->radius.repstr)
    VAR_5 = VAR_4->radius.repstr;
  else

    VAR_5 = "Welcome!!";

  FUNC_0(VAR_3->physical, VAR_0, VAR_3->id, VAR_5, FUNC_6(VAR_5),
             ((void*)0));

  VAR_3->physical->link.lcp.auth_ineed = 0;
  if (FUNC_1(VAR_4, VAR_2))
    FUNC_5(VAR_3->physical, VAR_3->in.name);

  if (VAR_3->physical->link.lcp.auth_iwait == 0)




    FUNC_3(VAR_3->physical->dl);
}
