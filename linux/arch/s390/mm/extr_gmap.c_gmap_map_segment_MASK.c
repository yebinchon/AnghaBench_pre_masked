
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmap {unsigned long asce_end; TYPE_1__* mm; int guest_to_host; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct gmap*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gmap*) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (struct gmap*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int *,unsigned long,void*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct gmap *VAR_5, unsigned long VAR_6,
       unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 FUNC_0(FUNC_4(VAR_5));
 if ((VAR_6 | VAR_7 | VAR_8) & (VAR_3 - 1))
  return -VAR_0;
 if (VAR_8 == 0 || VAR_6 + VAR_8 < VAR_6 || VAR_7 + VAR_8 < VAR_7 ||
     VAR_6 + VAR_8 - 1 > VAR_4 || VAR_7 + VAR_8 - 1 > VAR_5->asce_end)
  return -VAR_0;

 VAR_10 = 0;
 FUNC_2(&VAR_5->mm->mmap_sem);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_3) {

  VAR_10 |= FUNC_1(VAR_5, VAR_7 + VAR_9);

  if (FUNC_6(&VAR_5->guest_to_host,
          (VAR_7 + VAR_9) >> VAR_2,
          (void *) VAR_6 + VAR_9))
   break;
 }
 FUNC_7(&VAR_5->mm->mmap_sem);
 if (VAR_10)
  FUNC_3(VAR_5);
 if (VAR_9 >= VAR_8)
  return 0;
 FUNC_5(VAR_5, VAR_7, VAR_8);
 return -VAR_1;
}
