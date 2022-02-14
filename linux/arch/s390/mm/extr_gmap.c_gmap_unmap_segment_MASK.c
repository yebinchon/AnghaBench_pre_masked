
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmap {TYPE_1__* mm; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gmap*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gmap*) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct gmap *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(FUNC_4(VAR_2));
 if ((VAR_3 | VAR_4) & (VAR_1 - 1))
  return -VAR_0;
 if (VAR_4 == 0 || VAR_3 + VAR_4 < VAR_3)
  return -VAR_0;

 VAR_6 = 0;
 FUNC_2(&VAR_2->mm->mmap_sem);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_1)
  VAR_6 |= FUNC_1(VAR_2, VAR_3 + VAR_5);
 FUNC_5(&VAR_2->mm->mmap_sem);
 if (VAR_6)
  FUNC_3(VAR_2);
 return 0;
}
