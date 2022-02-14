
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lcp {scalar_t__ auth_ineed; scalar_t__ want_auth; scalar_t__ auth_iwait; scalar_t__ his_auth; int want_authtype; int his_authtype; } ;
struct fsm {scalar_t__ proto; } ;
struct TYPE_6__ {int auth; } ;
struct datalink {TYPE_5__* physical; TYPE_2__* parent; TYPE_1__ chap; int pap; int name; int bundle; } ;
struct TYPE_8__ {int fsm; } ;
struct TYPE_9__ {TYPE_3__ ccp; struct lcp lcp; } ;
struct TYPE_10__ {TYPE_4__ link; } ;
struct TYPE_7__ {int object; int (* LayerUp ) (int ,int *) ;} ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (struct datalink*,char*) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct fsm *VAR_8)
{

  struct datalink *VAR_9 = (struct datalink *)VAR_7;
  struct lcp *VAR_10 = &VAR_9->physical->link.lcp;

  if (VAR_8->proto == VAR_5) {
    FUNC_5(VAR_9, "");
    VAR_10->auth_ineed = VAR_10->want_auth;
    VAR_10->auth_iwait = VAR_10->his_auth;
    if (VAR_10->his_auth || VAR_10->want_auth) {
      if (FUNC_3(VAR_9->bundle) != VAR_2)
        FUNC_2(VAR_9->bundle, VAR_1);
      FUNC_6(VAR_0, "%s: his = %s, mine = %s\n", VAR_9->name,
                FUNC_0(VAR_10->his_auth, VAR_10->his_authtype),
                FUNC_0(VAR_10->want_auth, VAR_10->want_authtype));
      if (VAR_10->his_auth == VAR_6)
        FUNC_1(&VAR_9->pap);
      if (VAR_10->want_auth == VAR_4)
        FUNC_1(&VAR_9->chap.auth);
    } else
      FUNC_4(VAR_9);
  } else if (VAR_8->proto == VAR_3)
    (*VAR_9->parent->LayerUp)(VAR_9->parent->object, &VAR_9->physical->link.ccp.fsm);
}
