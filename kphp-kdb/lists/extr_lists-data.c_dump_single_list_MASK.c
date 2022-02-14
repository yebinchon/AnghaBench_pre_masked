
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int listree_t ;
struct TYPE_6__ {int* list_id; TYPE_1__* o_tree; } ;
typedef TYPE_2__ list_t ;
struct TYPE_5__ {int delta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;

int FUNC_7 (list_t *VAR_13) {
  listree_t VAR_14;




  int VAR_15 = *VAR_13->list_id;

  if (VAR_15 == VAR_0) {
    return 0;
  }
  VAR_15 %= VAR_6;
  if (VAR_15 != VAR_7 && VAR_15 != -VAR_7) {
    return 0;
  }

  FUNC_4 (VAR_13);

  VAR_10 = 0;

  int VAR_16;

  if (!VAR_5) {
    VAR_16 = VAR_1 + VAR_13->o_tree->delta;

    FUNC_6 (VAR_13->list_id);
    FUNC_5 (VAR_16);

    VAR_9 = VAR_11;
    VAR_8 = VAR_3;


    FUNC_1 ((listree_t *) &VAR_2, 0, VAR_0);
  } else {
    int VAR_17 = VAR_5 & 7;

    VAR_16 = FUNC_3 (VAR_17);

    if (!VAR_16) {
      return 0;
    }

    FUNC_6 (VAR_13->list_id);
    FUNC_5 (VAR_16);

    VAR_9 = VAR_12;
    VAR_8 = VAR_4;

    FUNC_2 (&VAR_14, VAR_17);
    FUNC_1 (&VAR_14, 0, VAR_0);
  }

  FUNC_0 (VAR_16 == VAR_10);

  return 1;
}
