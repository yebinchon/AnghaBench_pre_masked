
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct user_langs* langs; } ;
typedef TYPE_1__ user_t ;
struct user_langs {int cur_langs; int tot_langs; int * L; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct user_langs*,int) ;

__attribute__((used)) static void FUNC_2 (user_t *VAR_0) {
  struct user_langs *VAR_1 = VAR_0->langs;

  if (VAR_1) {
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->cur_langs; VAR_2++) {
      FUNC_0 (VAR_0, VAR_1->L[VAR_2]);
    }
    FUNC_1 (VAR_1, sizeof (struct user_langs) + VAR_1->tot_langs*2);
  }

  VAR_0->langs = 0;
}
