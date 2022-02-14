
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* file; } ;
struct TYPE_10__ {char* repstr; TYPE_1__ cfg; } ;
struct bundle {TYPE_2__ radius; } ;
struct TYPE_11__ {int name; } ;
struct authinfo {TYPE_6__* physical; TYPE_3__ in; } ;
struct TYPE_15__ {struct bundle* bundle; } ;
struct TYPE_12__ {scalar_t__ auth_iwait; scalar_t__ auth_ineed; } ;
struct TYPE_13__ {TYPE_4__ lcp; } ;
struct TYPE_14__ {TYPE_7__* dl; TYPE_5__ link; } ;


 scalar_t__ FUNC_0 (struct bundle*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct authinfo*,int ,char*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct authinfo *VAR_2)
{
  struct bundle *VAR_3 = VAR_2->physical->dl->bundle;

  FUNC_3(VAR_2->physical->dl, VAR_2->in.name);

  if (*VAR_3->radius.cfg.file && VAR_3->radius.repstr)
    FUNC_1(VAR_2, VAR_1, VAR_3->radius.repstr);
  else

    FUNC_1(VAR_2, VAR_1, "Greetings!!");
  VAR_2->physical->link.lcp.auth_ineed = 0;
  if (FUNC_0(VAR_3, VAR_0))
    FUNC_4(VAR_2->physical, VAR_2->in.name);

  if (VAR_2->physical->link.lcp.auth_iwait == 0)




    FUNC_2(VAR_2->physical->dl);
}
