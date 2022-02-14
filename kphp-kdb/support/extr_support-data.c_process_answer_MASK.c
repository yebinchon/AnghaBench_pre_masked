
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lev_support_add_answer {int user_id; int mark; char* question_with_answer; } ;
typedef int set_int ;
typedef TYPE_1__* answers_list_ptr ;
struct TYPE_4__ {int q_hashes_len; int* q_hashes; struct lev_support_add_answer* E; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (int*,int) ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__** FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int*,int*,int) ;
 int VAR_2 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int* FUNC_15 (int*,int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_16 (answers_list_ptr VAR_5, int VAR_6) {
  struct lev_support_add_answer *VAR_7 = VAR_5->E;
  int VAR_8 = VAR_7->user_id;

  FUNC_0 (VAR_6 == -1 || VAR_6 == 1);

  if (VAR_6 == 1) {
    *FUNC_7 (&VAR_3, VAR_8) = VAR_5;
  } else {
    FUNC_8 (&VAR_3, VAR_8);
  }

  VAR_0 += VAR_6;

  int VAR_9 = VAR_6 * (2 * VAR_7->mark + 1);
  if (VAR_7->mark < 0) {
    VAR_9 = VAR_6;
  }
  VAR_9 = VAR_6;

  if (VAR_6 == 1) {
    char *VAR_10 = VAR_7->question_with_answer;
    while (*VAR_10 != '\t') {
      VAR_10++;
    }
    FUNC_9 (VAR_1, VAR_7->question_with_answer, VAR_10 - VAR_7->question_with_answer);
    VAR_1[VAR_10 - VAR_7->question_with_answer] = 0;

    int *VAR_11 = FUNC_15 (VAR_1, &VAR_5->q_hashes_len, 0);
    int VAR_12 = sizeof (int) * (VAR_5->q_hashes_len + 1);
    VAR_5->q_hashes = FUNC_2 (VAR_12);
    FUNC_9 (VAR_5->q_hashes, VAR_11, VAR_12);
  }

  int *VAR_13 = VAR_5->q_hashes;

  int VAR_14;
  for (VAR_14 = 0; VAR_13[VAR_14]; VAR_14++) {
    int *VAR_15 = FUNC_3 (&VAR_2, VAR_13[VAR_14]);
    set_int *VAR_16 = FUNC_5 (&VAR_4, VAR_13[VAR_14]);
    if (*VAR_15 == 0) {
      FUNC_13 (VAR_16);
    }

    if (VAR_6 == -1) {
      int VAR_17 = FUNC_14 (VAR_16);
      FUNC_11 (VAR_16, VAR_8);
      FUNC_0 (FUNC_14 (VAR_16) == VAR_17 - 1 && VAR_17 > 0);
    } else {
      int VAR_18 = FUNC_14 (VAR_16);
      FUNC_10 (VAR_16, VAR_8);
      FUNC_0 (FUNC_14 (VAR_16) == VAR_18 + 1);
    }

    *VAR_15 += VAR_9;
    FUNC_0 (*VAR_15 >= 0);

    if (*VAR_15 == 0) {
      FUNC_0 (FUNC_14 (VAR_16) == 0);
      FUNC_12 (VAR_16);
      FUNC_6 (&VAR_4, VAR_13[VAR_14]);
    }
    if (*VAR_15 == 0) {
      FUNC_4 (&VAR_2, VAR_13[VAR_14]);
    }
  }

  if (VAR_6 == -1) {
    int VAR_19 = sizeof (int) * (VAR_5->q_hashes_len + 1);
    FUNC_1 (VAR_5->q_hashes, VAR_19);
  }
}
