
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mult_iterator {scalar_t__ pos; int (* jump_to ) (int ,scalar_t__) ;} ;
struct lev_delete_group {int group_id; } ;
typedef int iterator_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9 (struct lev_delete_group *VAR_4) {
  int VAR_5 = VAR_4->group_id, VAR_6 = 0, VAR_7;

  FUNC_2 ();

  if (FUNC_7 (FUNC_6 (VAR_3, VAR_5))) {
    FUNC_4 (0);
    struct mult_iterator *VAR_8 = (struct mult_iterator *) FUNC_1 (FUNC_6 (VAR_3, VAR_5));
    while (VAR_8->pos < VAR_0) {
      VAR_2[VAR_6++] = VAR_8->pos;
      VAR_8->jump_to ((iterator_t)VAR_8, VAR_8->pos + 1);
    }
    FUNC_5 (0);
    FUNC_0 ((unsigned)VAR_6 <= VAR_1);
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
      FUNC_3 (VAR_2[VAR_7], VAR_5);
    }
  }

  return 1;
}
