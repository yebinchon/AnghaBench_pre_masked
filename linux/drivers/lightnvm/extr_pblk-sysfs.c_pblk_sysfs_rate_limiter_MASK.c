
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rb_user_max; int rb_gc_max; int rb_budget; int rb_state; int total_blocks; int high; int rb_user_active; int rb_gc_cnt; int rb_user_cnt; } ;
struct pblk {TYPE_1__ rl; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ,char*,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct pblk *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_3 = FUNC_2(&VAR_1->rl);
 VAR_4 = FUNC_3(&VAR_1->rl);
 VAR_6 = VAR_1->rl.rb_user_max;
 VAR_7 = FUNC_1(&VAR_1->rl.rb_user_cnt);
 VAR_8 = VAR_1->rl.rb_gc_max;
 VAR_9 = FUNC_1(&VAR_1->rl.rb_gc_cnt);
 VAR_10 = VAR_1->rl.rb_budget;
 VAR_11 = VAR_1->rl.rb_state;

 VAR_5 = VAR_1->rl.total_blocks;

 return FUNC_4(VAR_2, VAR_0,
  "u:%u/%u,gc:%u/%u(%u)(stop:<%u,full:>%u,free:%d/%d/%d)-%d\n",
    VAR_7,
    VAR_6,
    VAR_9,
    VAR_8,
    VAR_11,
    VAR_10,
    VAR_1->rl.high,
    VAR_3,
    VAR_4,
    VAR_5,
    FUNC_0(VAR_1->rl.rb_user_active));
}
