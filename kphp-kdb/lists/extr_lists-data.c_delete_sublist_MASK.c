
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lev_generic {int a; } ;
struct lev_del_entry {int type; } ;
typedef int object_id_t ;
struct TYPE_8__ {TYPE_1__* o_tree; } ;
typedef TYPE_2__ list_t ;
typedef int list_id_t ;
struct TYPE_9__ {scalar_t__ N; int root; } ;
struct TYPE_7__ {int delta; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,struct lev_generic*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,TYPE_4__*,int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (int,struct lev_generic*) ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct lev_del_entry*,int ,int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (struct lev_del_entry*,scalar_t__) ;
 struct lev_del_entry* FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *,long long) ;
 int * FUNC_18 (long long) ;

__attribute__((used)) static int FUNC_19 (list_id_t VAR_18, int VAR_19, struct lev_generic *VAR_20) {
  FUNC_14 (4, "delete_sublist\n");
  if (VAR_11) {


    int VAR_21 = FUNC_7 (VAR_18);
    if (VAR_21 >= 0) {
      if (!FUNC_2 (VAR_21, -1)) {
        FUNC_11 (VAR_21, (struct lev_generic *)VAR_20);
        return 1;
      } else if (VAR_11 & 2) {
        FUNC_11 (VAR_21, (struct lev_generic *)VAR_20);
      } else {
        if (!(VAR_11 & 1)) {
          FUNC_9 (VAR_18);
        }
      }
    }
  }

  list_t *VAR_22 = FUNC_6 (VAR_18);
  int VAR_23, VAR_24 = 0, VAR_25 = VAR_19 & 0xff, VAR_26 = (VAR_19 >> 8) & 0xff;

  if (!VAR_22) {
    return FUNC_3 (VAR_18) < 0 ? -1 : 0;
  }

  FUNC_12 (VAR_22);

  for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
    if (!((VAR_23 ^ VAR_25) & 7 & VAR_26)) {
      VAR_24 += FUNC_10 (VAR_23);
    }
  }

  if (!VAR_24) {
    return 0;
  }

  VAR_7 = VAR_25;
  VAR_5 = VAR_26;
  VAR_6 = 0;

  VAR_8 = VAR_4;
  VAR_9 = VAR_17;

  long long VAR_27 = 0;
  if (VAR_11 & 1) {
    VAR_16 = 0;
    if (VAR_2 + VAR_22->o_tree->delta <= VAR_14) {
      VAR_15 = VAR_13;
    } else {
      VAR_27 = sizeof (object_id_t) * (VAR_2 + VAR_22->o_tree->delta);
      VAR_15 = FUNC_18 (VAR_27);
    }
  }
  FUNC_1 (!FUNC_8 (VAR_3.root, &VAR_3, 0, VAR_3.N - 1, VAR_1));
  if (VAR_11 & 1) {
    struct lev_del_entry *VAR_28 = FUNC_16 (sizeof (struct lev_del_entry) + VAR_10);
    VAR_28->type = VAR_0;
    int VAR_29 = VAR_12;
    VAR_12 = 1;
    for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
      ((struct lev_generic *)VAR_28)->a = FUNC_0(VAR_18);
      FUNC_13 (VAR_28, VAR_18, VAR_15[VAR_23]);
      FUNC_1 (FUNC_4 (VAR_18, VAR_15[VAR_23], 0, (struct lev_generic *)VAR_28) >= 0);
    }
    VAR_12 = VAR_29;
    FUNC_15 (VAR_28, sizeof (struct lev_del_entry) + VAR_10);
    if (VAR_15 != VAR_13) {
      FUNC_17 (VAR_15, VAR_27);
    }
  }

  if (VAR_2 + VAR_22->o_tree->delta == 0 && !(VAR_11 & 2)) {
    FUNC_1 (FUNC_5 (VAR_18, 0));
  }

  return VAR_6;
}
