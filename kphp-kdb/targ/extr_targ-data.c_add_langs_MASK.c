
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; struct user_langs* langs; } ;
typedef TYPE_1__ user_t ;
struct user_langs {int cur_langs; int tot_langs; int* L; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct user_langs*,struct user_langs*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct user_langs*,int) ;
 struct user_langs* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (user_t *VAR_3, int VAR_4[], int VAR_5) {
  struct user_langs *VAR_6 = VAR_3->langs;

  if (VAR_5 < 0 || VAR_5 > VAR_0) {
    return -1;
  }
  if (!VAR_5 || (VAR_6 && VAR_6->cur_langs >= VAR_0)) {
    return 0;
  }

  int VAR_7, VAR_8, VAR_9 = 0;
  FUNC_1 (VAR_4[0] >= 0);
  for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
    if (VAR_4[VAR_7-1] >= VAR_4[VAR_7]) {
      FUNC_2 (VAR_2, "add_langs: user_id=%d, len=%d,", VAR_3->user_id, VAR_5);
      int VAR_10;
      for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        FUNC_2 (VAR_2, " %d", VAR_4[VAR_10]);
      }
      FUNC_2 (VAR_2, ".\n");
    }
    FUNC_1 (VAR_4[VAR_7-1] < VAR_4[VAR_7]);
  }

  if (VAR_6) {
    FUNC_1 (VAR_6->cur_langs >= 0 && VAR_6->cur_langs <= VAR_6->tot_langs);
    VAR_7 = VAR_8 = 0;
    while (VAR_7 < VAR_5 && VAR_8 < VAR_6->cur_langs) {
      if (VAR_4[VAR_7] < VAR_6->L[VAR_8]) { VAR_7++; }
      else if (VAR_4[VAR_7] > VAR_6->L[VAR_8]) { VAR_8++; }
      else { VAR_9++; VAR_7++; VAR_8++; }
    }
    int VAR_11 = VAR_6->cur_langs + VAR_5 - VAR_9, VAR_12 = VAR_6->tot_langs;
    if (VAR_11 > VAR_12) {
      while (VAR_11 > VAR_12) { VAR_12 <<= 1; }
      struct user_langs *VAR_13 = FUNC_5 (sizeof (struct user_langs) + 2 * VAR_12);
      FUNC_3 (VAR_13, VAR_6, sizeof(struct user_langs) + 2 * VAR_6->cur_langs);
      FUNC_4 (VAR_6, sizeof (struct user_langs) + 2 * VAR_6->tot_langs);
      VAR_3->langs = VAR_6 = VAR_13;
      VAR_6->tot_langs = VAR_12;
    }

    VAR_7 = VAR_5-1;
    VAR_8 = VAR_6->cur_langs-1;
    VAR_6->cur_langs = VAR_11;

    while (VAR_7 >= 0 && VAR_8 >= 0) {
      FUNC_1 (VAR_11 > 0);
      if (VAR_4[VAR_7] > VAR_6->L[VAR_8]) {
        VAR_6->L[--VAR_11] = VAR_4[VAR_7];
        FUNC_0 (VAR_3, VAR_4[VAR_7--]);
      } else {
        if (VAR_4[VAR_7] == VAR_6->L[VAR_8]) {
          VAR_7--;
        }
        VAR_6->L[--VAR_11] = VAR_6->L[VAR_8--];
      }
    }
    while (VAR_7 >= 0) {
      FUNC_1 (VAR_11 > 0);
      VAR_6->L[--VAR_11] = VAR_4[VAR_7];
      FUNC_0 (VAR_3, VAR_4[VAR_7--]);
    }
    while (VAR_8 >= 0) {
      FUNC_1 (VAR_11 > 0);
      VAR_6->L[--VAR_11] = VAR_6->L[VAR_8--];
    }
    FUNC_1 (!VAR_11);
    return VAR_5 - VAR_9;
  }

  int VAR_14 = VAR_1;
  while (VAR_14 < VAR_5) { VAR_14 <<= 1; }

  VAR_3->langs = VAR_6 = FUNC_5 (sizeof (struct user_langs) + 2 * VAR_14);
  VAR_6->cur_langs = VAR_5;
  VAR_6->tot_langs = VAR_14;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    VAR_6->L[VAR_7] = VAR_4[VAR_7];
    FUNC_0 (VAR_3, VAR_4[VAR_7]);
  }

  return VAR_5;
}
