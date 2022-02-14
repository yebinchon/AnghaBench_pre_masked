
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int hdlc; } ;
struct fsm {TYPE_1__* link; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct physical* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct physical*) ;

__attribute__((used)) static void
FUNC_6(struct fsm *VAR_1)
{

  struct physical *VAR_2 = FUNC_3(VAR_1->link);

  FUNC_4(VAR_0, "%s: LayerDown\n", VAR_1->link->name);
  FUNC_1(&VAR_2->hdlc);
  FUNC_5(VAR_2);
  FUNC_2(FUNC_0(VAR_1), 0);
}
