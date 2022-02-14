
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int gc_active; scalar_t__ gc_enabled; } ;
struct pblk {struct pblk_gc gc; } ;


 int FUNC_0 (struct pblk*) ;
 int FUNC_1 (struct pblk*) ;

void FUNC_2(struct pblk *VAR_0)
{
 struct pblk_gc *VAR_1 = &VAR_0->gc;

 if (VAR_1->gc_enabled && !VAR_1->gc_active) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
 }
}
