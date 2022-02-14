
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subs; int id; } ;
typedef TYPE_1__ queue ;
typedef int ll ;
struct TYPE_6__ {int x; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int,int ,int ) ;
 TYPE_2__* VAR_0 ;

int FUNC_2 (ll VAR_1, ll *VAR_2, int VAR_3) {
  queue *VAR_4 = FUNC_0 (VAR_1, 0);
  if (VAR_4 == ((void*)0)) {
    return 0;
  }
  VAR_1 = VAR_4->id;

  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    VAR_0[VAR_5].x = VAR_2[VAR_5];
  }
  FUNC_1 (VAR_1, VAR_4->subs, VAR_0, VAR_3, 0, 0);

  return 1;
}
