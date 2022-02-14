
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct user_groups* grp; } ;
typedef TYPE_1__ user_t ;
struct user_groups {int cur_groups; int tot_groups; int * G; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct user_groups*,int) ;

__attribute__((used)) static void FUNC_2 (user_t *VAR_0) {
  struct user_groups *VAR_1 = VAR_0->grp;

  if (VAR_1) {
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->cur_groups; VAR_2++) {
      FUNC_0 (VAR_0, VAR_1->G[VAR_2]);
    }
    FUNC_1 (VAR_1, sizeof (struct user_groups) + VAR_1->tot_groups*4);
  }

  VAR_0->grp = 0;
}
