
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long mmap_base; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_2__* VAR_4 ;
 unsigned long FUNC_1 () ;

unsigned long inline FUNC_2(unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_4->mm->mmap_base, VAR_7, VAR_8, VAR_9;
 VAR_6 = FUNC_0(VAR_6);


 VAR_7 = (VAR_6 + VAR_5 + VAR_2 - 1) & VAR_1;
 if (VAR_7 >= VAR_3)
  VAR_7 = VAR_3;
 VAR_7 -= VAR_5;

 if (VAR_7 > VAR_6) {
  VAR_8 = FUNC_1() % (((VAR_7 - VAR_6) >> VAR_0) + 1);
  VAR_9 = VAR_6 + (VAR_8 << VAR_0);
 } else {
  VAR_9 = VAR_6;
 }
 return VAR_9;
}
