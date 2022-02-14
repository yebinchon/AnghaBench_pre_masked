
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int gc_forced; int gc_enabled; int lock; } ;
struct pblk {struct pblk_gc gc; } ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pblk *VAR_1, int VAR_2)
{
 struct pblk_gc *VAR_3 = &VAR_1->gc;

 if (VAR_2 < 0 || VAR_2 > 1)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);
 VAR_3->gc_forced = VAR_2;

 if (VAR_2)
  VAR_3->gc_enabled = 1;
 else
  VAR_3->gc_enabled = 0;
 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_1);

 return 0;
}
