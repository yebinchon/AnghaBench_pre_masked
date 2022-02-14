
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int root; } ;
typedef TYPE_1__ treap ;
struct TYPE_11__ {TYPE_1__* subs; int id; } ;
typedef TYPE_2__ queue ;
struct TYPE_12__ {int y; int x; } ;
typedef TYPE_3__ pli ;
typedef int ll ;


 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_3__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_1__*,int ,scalar_t__,int,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_5 (ll VAR_10, pli *VAR_11, int VAR_12) {
  queue *VAR_13 = FUNC_2 (VAR_10, 1);
  if (VAR_13 == ((void*)0)) {
    return 0;
  }
  VAR_10 = VAR_13->id;

  FUNC_0 (VAR_11, VAR_12);

  VAR_7 = VAR_9 = 0;
  VAR_0 = VAR_11;
  VAR_1 = VAR_11 + VAR_12;

  VAR_4 += VAR_12;
  VAR_3++;

  treap *VAR_14 = VAR_13->subs;
  FUNC_1 (VAR_14->root);
  while (VAR_0 != VAR_1 && FUNC_3 (VAR_0->x, VAR_0->y)) {
    VAR_0++;
  }
  VAR_2 += VAR_9 + VAR_7;
  VAR_5 += (VAR_9 + VAR_7) != 0;

  FUNC_4 (VAR_10, VAR_14, VAR_8, VAR_9, 0, 0);
  FUNC_4 (VAR_10, VAR_14, VAR_6, VAR_7, 1, 0);
  return 1;
}
