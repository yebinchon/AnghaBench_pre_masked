
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmap {TYPE_1__* mm; } ;
struct TYPE_2__ {int mmap_sem; } ;


 unsigned long FUNC_0 (struct gmap*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

unsigned long FUNC_3(struct gmap *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->mm->mmap_sem);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mm->mmap_sem);
 return VAR_2;
}
