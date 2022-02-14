
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct user_langs* langs; } ;
typedef TYPE_1__ user_t ;
struct user_langs {int cur_langs; int* L; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_0, int VAR_1[], int VAR_2) {
  if (VAR_2 < 0) {
    return -1;
  }
  if (!VAR_0 || !VAR_2 || !VAR_0->langs) {
    return 0;
  }

  struct user_langs *VAR_3 = VAR_0->langs;
  int VAR_4, VAR_5 = 0, VAR_6 = 0;

  FUNC_0 (VAR_1[0] >= 0);
  for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
    FUNC_0 (VAR_1[VAR_4-1] < VAR_1[VAR_4]);
  }


  for (VAR_4 = 0; VAR_4 < VAR_3->cur_langs; VAR_4++) {
    while (VAR_5 < VAR_2 && VAR_1[VAR_5] < VAR_3->L[VAR_4]) {
      VAR_5++;
    }
    if (VAR_5 < VAR_2 && VAR_1[VAR_5] == VAR_3->L[VAR_4]) {
      FUNC_1 (VAR_0, VAR_1[VAR_5++]);
    } else {
      VAR_3->L[VAR_6++] = VAR_3->L[VAR_4];
    }
  }

  VAR_4 -= VAR_6;
  VAR_3->cur_langs = VAR_6;
  return VAR_4;
}
