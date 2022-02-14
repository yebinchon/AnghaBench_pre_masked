
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int rb_user_max; int rb_space; int rb_user_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct pblk_rl *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(&VAR_3->rb_user_cnt);
 int VAR_6 = FUNC_0(&VAR_3->rb_space);

 if (FUNC_1(VAR_6 >= 0) && (VAR_6 - VAR_4 < 0))
  return VAR_0;

 if (VAR_5 >= VAR_3->rb_user_max)
  return VAR_2;

 return VAR_1;
}
