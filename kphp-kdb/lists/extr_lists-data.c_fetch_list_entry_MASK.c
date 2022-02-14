
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void tree_ext_large_t ;
struct tree_payload {int flags; int date; scalar_t__ text; scalar_t__ value; scalar_t__ global_id; } ;
typedef int object_id_t ;
typedef int list_t ;
typedef int list_id_t ;
struct TYPE_3__ {int N; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 TYPE_1__ VAR_1 ;
 struct tree_payload* FUNC_2 (void*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (scalar_t__) ;
 void* FUNC_7 (TYPE_1__*,int ,int*) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int,int*) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int ,int) ;
 int FUNC_14 (int *) ;

int FUNC_15 (list_id_t VAR_4, object_id_t VAR_5, int VAR_6[13]) {
  if (VAR_3 && FUNC_13 (VAR_4, 1) < 0) {
    return -2;
  }
  list_t *VAR_7 = FUNC_3 (VAR_4, 2);
  if (!VAR_7) {
    return -1;
  }

  FUNC_14 (VAR_7);

  int VAR_8;
  tree_ext_large_t *VAR_9 = FUNC_7 (&VAR_1, VAR_5, &VAR_8);

  if (!VAR_9) {
    return -1;
  }

  FUNC_8 (VAR_6 + 6, 0, 28);

  if (VAR_9 != (void *) -1) {
    struct tree_payload *VAR_10 = FUNC_2 (VAR_9);
    VAR_6[0] = VAR_10->flags;
    VAR_6[1] = VAR_10->date;
    *((long long *) (VAR_6 + 2)) = (long long) VAR_10->global_id;
    *((long long *) (VAR_6 + 4)) = (long long) VAR_10->value;

    if (VAR_10->text) {
      VAR_6[12] = FUNC_5 (VAR_10->text);
      *((char **) (VAR_6 + 10)) = FUNC_6 (VAR_10->text);
    } else {
      FUNC_4 (FUNC_1 (VAR_9) != VAR_2);
      *((char **) (VAR_6 + 10)) = FUNC_11 (VAR_1.N - FUNC_0 (VAR_9), VAR_6 + 12);
    }
  } else {
    VAR_6[0] = FUNC_10 (VAR_8);
    VAR_6[1] = FUNC_9 (VAR_8);
    *((long long *) (VAR_6 + 2)) = (long long) VAR_0[VAR_8];
    *((long long *) (VAR_6 + 4)) = (long long) FUNC_12 (VAR_8);
    *((char **) (VAR_6 + 10)) = FUNC_11 (VAR_8, VAR_6 + 12);
  }
  return 6;
}
