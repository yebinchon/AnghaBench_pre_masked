
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct user_groups* grp; } ;
typedef TYPE_1__ user_t ;
struct user_groups {int cur_groups; int G; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2 (int VAR_3) {
  user_t *VAR_4 = FUNC_0 (VAR_3);
  if (!VAR_4 || !VAR_4->grp) {
    VAR_2 = 0;
    return 0;
  }
  struct user_groups *VAR_5 = VAR_4->grp;
  int VAR_6 = VAR_5->cur_groups;
  VAR_2 = (VAR_6 > VAR_0 ? VAR_0 : VAR_6);
  FUNC_1 (VAR_1, VAR_5->G, VAR_2 * 4);
  return VAR_6;
}
