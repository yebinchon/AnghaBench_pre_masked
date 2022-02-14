
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


struct TYPE_15__ {scalar_t__* local; } ;
struct chap {TYPE_7__ challenge; } ;
struct authinfo {int id; TYPE_8__* physical; } ;
struct TYPE_13__ {int want_authtype; } ;
struct TYPE_14__ {TYPE_5__ lcp; } ;
struct TYPE_16__ {TYPE_6__ link; TYPE_4__* dl; } ;
struct TYPE_12__ {TYPE_3__* bundle; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_1__ auth; } ;
struct TYPE_11__ {TYPE_2__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,int ,int ,scalar_t__*,scalar_t__,int *) ;
 int VAR_1 ;
 struct chap* FUNC_1 (struct authinfo*) ;
 int FUNC_2 (struct authinfo*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct authinfo *VAR_2)
{
  struct chap *VAR_3 = FUNC_1(VAR_2);
  int VAR_4;

  FUNC_3(VAR_1, "CHAP%02X: Challenge\n",
             VAR_2->physical->link.lcp.want_authtype);

  VAR_4 = FUNC_4(VAR_2->physical->dl->bundle->cfg.auth.name);


  if (!*VAR_3->challenge.local)
    FUNC_2(VAR_2);


  if (VAR_2->physical->link.lcp.want_authtype == 0x81)
    FUNC_0(VAR_2->physical, VAR_0, VAR_2->id,
             VAR_3->challenge.local, 1 + *VAR_3->challenge.local, ((void*)0));
  else

    FUNC_0(VAR_2->physical, VAR_0, VAR_2->id,
             VAR_3->challenge.local, 1 + *VAR_3->challenge.local + VAR_4, ((void*)0));
}
