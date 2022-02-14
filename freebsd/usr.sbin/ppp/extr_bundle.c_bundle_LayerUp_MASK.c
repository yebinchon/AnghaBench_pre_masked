
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct physical {int dl; } ;
struct fsm {scalar_t__ proto; TYPE_4__* bundle; int link; } ;
struct TYPE_6__ {scalar_t__ sessiontime; } ;
struct TYPE_5__ {int mp; } ;
struct bundle {TYPE_2__ radius; int upat; TYPE_1__ ncp; } ;
struct TYPE_7__ {int mp; } ;
struct TYPE_8__ {TYPE_3__ ncp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct bundle*,int ) ;
 int FUNC_2 (struct bundle*,int ) ;
 int FUNC_3 (struct bundle*,int ) ;
 int FUNC_4 (struct bundle*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct physical* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_3, struct fsm *VAR_4)
{
  struct bundle *VAR_5 = (struct bundle *)VAR_3;

  if (VAR_4->proto == VAR_2) {
    struct physical *VAR_6 = FUNC_6(VAR_4->link);

    FUNC_1(VAR_5, VAR_6->dl);
    FUNC_7(&VAR_5->ncp.mp);
  } else if (FUNC_5(VAR_4->proto)) {
    if (FUNC_8(&VAR_4->bundle->ncp) == 1) {
      FUNC_0(VAR_4->bundle);
      FUNC_9(&VAR_5->upat);

      if (VAR_5->radius.sessiontime)
        FUNC_4(VAR_5, 0);

      FUNC_3(VAR_5, 0);
      FUNC_7(&VAR_4->bundle->ncp.mp);
    }
    FUNC_2(VAR_5, VAR_0);
  } else if (VAR_4->proto == VAR_1)
    FUNC_0(VAR_4->bundle);
}
