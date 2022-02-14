
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* r; struct TYPE_4__* l; int x; } ;
typedef TYPE_1__ wkey ;
struct TYPE_5__ {long long w_id; int q_id; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;

void FUNC_0 (wkey *VAR_3, long long VAR_4) {
  if (VAR_3 == ((void*)0) || VAR_2 >= VAR_0) {
    return;
  }
  VAR_1[VAR_2].w_id = VAR_4;
  VAR_1[VAR_2].q_id = VAR_3->x;
  VAR_2++;

  FUNC_0 (VAR_3->l, VAR_4);
  FUNC_0 (VAR_3->r, VAR_4);
}
