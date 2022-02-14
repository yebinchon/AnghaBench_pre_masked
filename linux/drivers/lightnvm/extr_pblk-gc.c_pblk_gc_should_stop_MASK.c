
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {scalar_t__ gc_active; int gc_forced; } ;
struct pblk {struct pblk_gc gc; } ;



void FUNC_0(struct pblk *VAR_0)
{
 struct pblk_gc *VAR_1 = &VAR_0->gc;

 if (VAR_1->gc_active && !VAR_1->gc_forced)
  VAR_1->gc_active = 0;
}
