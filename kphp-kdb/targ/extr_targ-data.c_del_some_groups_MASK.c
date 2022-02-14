
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct user_groups* grp; } ;
typedef TYPE_1__ user_t ;
struct user_groups {int cur_groups; int* G; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1 (user_t *VAR_0, int VAR_1) {
  if (!VAR_0 || !VAR_0->grp) {
    return 0;
  }

  struct user_groups *VAR_2 = VAR_0->grp;
  int VAR_3, VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_2->cur_groups; VAR_3++) {
    if ((VAR_2->G[VAR_3] ^ VAR_1) >= 0) {
      FUNC_0 (VAR_0, VAR_2->G[VAR_3]);
    } else {
      VAR_2->G[VAR_4++] = VAR_2->G[VAR_3];
    }
  }

  VAR_3 -= VAR_4;
  VAR_2->cur_groups = VAR_4;
  return VAR_3;
}
