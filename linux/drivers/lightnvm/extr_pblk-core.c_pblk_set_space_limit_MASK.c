
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int rb_space; } ;
struct pblk {struct pblk_rl rl; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct pblk *VAR_0)
{
 struct pblk_rl *VAR_1 = &VAR_0->rl;

 FUNC_0(&VAR_1->rb_space, 0);
}
