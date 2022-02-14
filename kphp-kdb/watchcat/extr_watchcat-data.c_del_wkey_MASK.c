
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int x; int * next_time; TYPE_2__* parent; } ;
typedef TYPE_1__ wkey ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {int id; struct TYPE_11__* next; TYPE_5__ keys; } ;
typedef TYPE_2__ watchcat ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;

inline void FUNC_7 (wkey *VAR_4) {
  watchcat *VAR_5 = VAR_4->parent;

  if (VAR_4->next_time != ((void*)0)) {
    FUNC_0 (VAR_4);
  }

  FUNC_5 (&VAR_5->keys, VAR_4->x);


  if (VAR_5->keys.size == 0) {
    watchcat *VAR_6 = FUNC_6 (VAR_5);

    if (VAR_6->next == VAR_6) {
      FUNC_4 (&VAR_1, &VAR_6->id);
      FUNC_3 (VAR_6);
    }

    if (VAR_2 > 1) {
      FUNC_1 (VAR_3, "Del watchcat %d\n", VAR_5->id);
    }

    FUNC_4 (&VAR_0, &VAR_5->id);
    FUNC_2 (VAR_5);
  }
}
