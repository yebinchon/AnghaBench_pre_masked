
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct physical {TYPE_1__* dl; } ;
struct fsm {int link; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct physical*) ;
 int FUNC_1 (struct fsm*,int ,int ,int *,int ,int ) ;
 struct physical* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct fsm *VAR_3, u_char VAR_4)
{

  struct physical *VAR_5 = FUNC_2(VAR_3->link);

  if (VAR_5 && VAR_5->dl->state == VAR_1)
    FUNC_0(VAR_5);

  FUNC_1(VAR_3, VAR_0, VAR_4, ((void*)0), 0, VAR_2);
}
