
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ways; unsigned long sets; unsigned long entry_shift; scalar_t__ way_incr; scalar_t__ linesz; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3.dcache.ways;
 VAR_5 = VAR_3.dcache.sets;
 VAR_5 <<= VAR_3.dcache.entry_shift;

 VAR_6 = VAR_0;

 do {
  unsigned long VAR_7;

  for (VAR_7 = VAR_6;
       VAR_7 < VAR_6 + VAR_5;
       VAR_7 += VAR_3.dcache.linesz) {
   unsigned long VAR_8;
   int VAR_9 = VAR_1 | VAR_2;

   VAR_8 = FUNC_0(VAR_7);

   if ((VAR_8 & VAR_9) == VAR_9)
    FUNC_1(VAR_8 & ~VAR_9, VAR_7);

  }

  VAR_6 += VAR_3.dcache.way_incr;
 } while (--VAR_4);
}
