
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ val_type ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ dtype; int v_int; size_t v_fid; } ;
struct TYPE_14__ {int vn; int is_const; TYPE_2__ tok; struct TYPE_14__** v; } ;
typedef TYPE_3__ node ;
struct TYPE_12__ {size_t type; } ;
struct TYPE_11__ {TYPE_1__* fields; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_10__* VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_9 (node *VAR_15) {
  if (VAR_15->tok.type == VAR_2 || VAR_15->tok.type == VAR_3) {
    int VAR_16 = VAR_15->tok.type == VAR_2 ? 0 : 1;

    int VAR_17 = 1;
    VAR_15->tok.dtype = VAR_12;
    int VAR_18;

    for (VAR_18 = 0; VAR_18 < VAR_15->vn; VAR_18++) {
      if (!FUNC_9 (VAR_15->v[VAR_18])) {
        return 0;
      }
      VAR_17 &= VAR_15->v[VAR_18]->is_const;

      if (VAR_15->v[VAR_18]->tok.dtype != VAR_12 && VAR_15->v[VAR_18]->tok.dtype != VAR_13) {
        return 0;
      }

      if (VAR_15->v[VAR_18]->is_const) {
        int VAR_19 = FUNC_7 (VAR_15->v[VAR_18]);
        if (VAR_19 == VAR_16) {
          VAR_15->tok.v_int = VAR_16;
          VAR_15->is_const = VAR_17;


          FUNC_5 (VAR_15);
          return 1;
        }

      }
    }
    VAR_15->is_const = VAR_17;
    if (VAR_17) {
      VAR_15->tok.v_int = 1 - VAR_16;
    }

    FUNC_5 (VAR_15);
    return 1;
  } else {
    if (VAR_15->vn == 0 && !FUNC_0(VAR_15->tok.type)) {
      FUNC_2 (VAR_15->tok.type == VAR_8);

      VAR_15->is_const = VAR_15->tok.dtype != VAR_11;

      if (VAR_15->tok.dtype == VAR_11) {
        VAR_15->tok.type = VAR_7;
        VAR_15->tok.dtype = VAR_6[VAR_1->fields[VAR_15->tok.v_fid].type + VAR_0];
      }
    } else {
      int VAR_20;
      int VAR_21 = 1;
      val_type VAR_22 = VAR_12;

      for (VAR_20 = 0; VAR_20 < VAR_15->vn; VAR_20++) {
        if (!FUNC_9 (VAR_15->v[VAR_20])) {
          return 0;
        }
        VAR_21 &= VAR_15->v[VAR_20]->is_const;
        VAR_22 = FUNC_4 (VAR_22, VAR_15->v[VAR_20]->tok.dtype);
      }

      if (VAR_15->tok.type == VAR_5 && FUNC_1(VAR_22)) {
        void *VAR_23;
        VAR_23 = VAR_15->v[0], VAR_15->v[0] = VAR_15->v[1], VAR_15->v[1] = VAR_23;
        VAR_15->tok.type = VAR_4;
      }

      if (VAR_22 == VAR_14) {
        VAR_22 = VAR_9;
      }
      for (VAR_20 = 0; VAR_20 < VAR_15->vn; VAR_20++) {
        if (VAR_15->v[VAR_20]->tok.dtype != VAR_22) {
          int VAR_24 = FUNC_1(VAR_22), VAR_25 = FUNC_1(VAR_15->v[VAR_20]->tok.dtype);
          if (VAR_24 && VAR_25) {
            continue;
          }

          VAR_15->v[VAR_20] = FUNC_8 (VAR_15->v[VAR_20], VAR_22);

          if (VAR_15->v[VAR_20]->is_const) {
            if (!FUNC_6 (VAR_15->v[VAR_20])) {
              return 0;
            }
          }
        }
      }
      VAR_15->tok.dtype = FUNC_3 (VAR_22, VAR_15->tok.type);
      if (VAR_15->tok.dtype == VAR_10) {
        return 0;
      }
      VAR_15->is_const = VAR_21;

      if (VAR_21) {
        if (!FUNC_6 (VAR_15)) {
          return 0;
        }
        FUNC_5 (VAR_15);
      } else {
      }
    }
  }

  return 1;
}
