
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int rb_gc_cnt; int rb_user_cnt; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct pblk_rl *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->rb_user_cnt);
 FUNC_0(VAR_2, &VAR_0->rb_gc_cnt);
}
