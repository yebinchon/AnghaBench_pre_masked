
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ways; unsigned long sets; unsigned long entry_shift; scalar_t__ way_incr; scalar_t__ linesz; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_4 |= VAR_2;
 FUNC_5(VAR_8);
 FUNC_3();

 VAR_5 = VAR_3.dcache.ways;
 VAR_6 = VAR_3.dcache.sets;
 VAR_6 <<= VAR_3.dcache.entry_shift;

 VAR_7 = VAR_0;

 do {
  unsigned long VAR_9;

  for (VAR_9 = VAR_7;
       VAR_9 < VAR_7 + VAR_6;
       VAR_9 += VAR_3.dcache.linesz) {
   unsigned long VAR_10;

   VAR_10 = FUNC_0(VAR_9) & (0x1ffffC00 | VAR_2);
          if (VAR_10 == VAR_4) {
    VAR_10 &= ~(VAR_2 | VAR_1);
    FUNC_1(VAR_10, VAR_9);
   }
  }

  VAR_7 += VAR_3.dcache.way_incr;
 } while (--VAR_5);

 FUNC_2();
 FUNC_4(VAR_8);
}
