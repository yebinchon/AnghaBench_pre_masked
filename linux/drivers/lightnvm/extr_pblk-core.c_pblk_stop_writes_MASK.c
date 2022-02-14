
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line {int dummy; } ;
struct TYPE_2__ {int free_lock; } ;
struct pblk {int state; TYPE_1__ l_mg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 FUNC_0(&VAR_1->l_mg.free_lock);

 FUNC_2(VAR_1);
 VAR_1->state = VAR_0;
 FUNC_3(FUNC_1(VAR_1), VAR_1->state);
}
