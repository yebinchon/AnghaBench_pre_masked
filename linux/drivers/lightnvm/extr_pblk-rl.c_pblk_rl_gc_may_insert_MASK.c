
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int rb_gc_max; int rb_user_active; int rb_gc_cnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct pblk_rl *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(&VAR_0->rb_gc_cnt);
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0->rb_user_active);
 return (!(VAR_2 >= VAR_0->rb_gc_max && VAR_3));
}
