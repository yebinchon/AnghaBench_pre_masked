
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int v_int; } ;
struct TYPE_7__ {int vn; struct TYPE_7__** v; TYPE_1__ tok; } ;
typedef TYPE_2__ node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

inline int FUNC_2 (node *VAR_2) {
  int VAR_3;

  int VAR_4 = -1;
  if (VAR_2->tok.type == VAR_0) {
    VAR_4 = 0;
  }
  if (VAR_2->tok.type == VAR_1) {
    VAR_4 = 1;
  }

  if (VAR_4 != -1) {
    for (VAR_3 = 0; VAR_3 < VAR_2->vn; VAR_3++) {
      if (!FUNC_2 (VAR_2->v[VAR_3])) {
        return 0;
      }

      int VAR_5 = FUNC_1 (VAR_2->v[VAR_3]);
      if (VAR_5 == VAR_4) {
        VAR_2->tok.v_int = VAR_4;
        return 1;
      }
    }

    VAR_2->tok.v_int = 1 - VAR_4;
    return 1;
  } else {
    for (VAR_3 = 0; VAR_3 < VAR_2->vn; VAR_3++) {
      if (!FUNC_2 (VAR_2->v[VAR_3])) {
        return 0;
      }
    }

    return FUNC_0 (VAR_2);
  }
}
