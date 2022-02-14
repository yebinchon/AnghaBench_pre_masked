
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_7__ {TYPE_3__* q; int id; TYPE_1__ s; } ;
typedef TYPE_2__ subscribers ;
struct TYPE_8__ {int subscr_cnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5 (subscribers *VAR_3) {
  FUNC_0 (VAR_3->s.size == 0);
  FUNC_3 (&VAR_0, &VAR_3->id);
  VAR_1--;

  if (VAR_3->q != ((void*)0)) {
    VAR_3->q->subscr_cnt--;
    FUNC_4 (VAR_3->q);
  }

  VAR_2 -= FUNC_2();
  FUNC_1 (VAR_3, sizeof (subscribers));
  VAR_2 += FUNC_2();
}
