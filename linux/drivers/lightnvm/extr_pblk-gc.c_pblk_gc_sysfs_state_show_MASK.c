
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int gc_enabled; int gc_active; int lock; } ;
struct pblk {struct pblk_gc gc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pblk *VAR_0, int *VAR_1,
         int *VAR_2)
{
 struct pblk_gc *VAR_3 = &VAR_0->gc;

 FUNC_0(&VAR_3->lock);
 *VAR_1 = VAR_3->gc_enabled;
 *VAR_2 = VAR_3->gc_active;
 FUNC_1(&VAR_3->lock);
}
