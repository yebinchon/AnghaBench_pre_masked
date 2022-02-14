
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subs; int id; } ;
typedef TYPE_1__ queue ;
typedef int pli ;
typedef int ll ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int,int,int ) ;

int FUNC_2 (ll VAR_0, pli *VAR_1, int VAR_2) {
  queue *VAR_3 = FUNC_0 (VAR_0, 0);
  if (VAR_3 == ((void*)0)) {
    return 0;
  }
  VAR_0 = VAR_3->id;

  FUNC_1 (VAR_0, VAR_3->subs, VAR_1, VAR_2, 1, 0);
  return 1;
}
