
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_mask; int entry_shift; int sets; unsigned long long way_size; unsigned long long ways; int flags; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(int VAR_3, int VAR_4)
{




 int VAR_5;
 unsigned long long VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_5 = ((int)&VAR_2 &
     VAR_1->dcache.entry_mask) >>
     VAR_1->dcache.entry_shift;
 VAR_10 = VAR_3 - VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++, VAR_10++) {
  VAR_10 &= (VAR_1->dcache.sets - 1);
  VAR_7 = (unsigned long long)VAR_2 +
   (VAR_10 << VAR_1->dcache.entry_shift);
  VAR_8 = VAR_7 + VAR_1->dcache.way_size *
      VAR_1->dcache.ways;

  for (VAR_6 = VAR_7; VAR_6 < VAR_8;
       VAR_6 += VAR_1->dcache.way_size) {
   __asm__ __volatile__ ("alloco %0, 0" : : "r" (VAR_6));
   __asm__ __volatile__ ("synco");
  }

  VAR_8 = VAR_7 + VAR_1->dcache.way_size *
      VAR_1->dcache.ways;

  for (VAR_6 = VAR_7; VAR_6 < VAR_8;
       VAR_6 += VAR_1->dcache.way_size) {




   if (FUNC_1(VAR_0, &(VAR_1->dcache.flags)))
    FUNC_0((unsigned long)VAR_6);
  }
 }






}
