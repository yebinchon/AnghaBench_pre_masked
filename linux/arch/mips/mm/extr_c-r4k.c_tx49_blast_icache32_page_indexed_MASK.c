
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int waysize; unsigned long waybit; unsigned long ways; } ;
struct TYPE_4__ {TYPE_1__ icache; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_5.icache.waysize - 1;
 unsigned long VAR_8 = VAR_2 + (VAR_6 & VAR_7);
 unsigned long VAR_9 = VAR_8 + VAR_4;
 unsigned long VAR_10 = 1UL << VAR_5.icache.waybit;
 unsigned long VAR_11 = VAR_5.icache.ways <<
          VAR_5.icache.waybit;
 unsigned long VAR_12, VAR_13;

 VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += VAR_10)
  for (VAR_13 = VAR_8 + 0x400; VAR_13 < VAR_9; VAR_13 += 0x400 * 2)
   FUNC_0(VAR_13|VAR_12, VAR_3);
 VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += VAR_10)
  for (VAR_13 = VAR_8; VAR_13 < VAR_9; VAR_13 += 0x400 * 2)
   FUNC_0(VAR_13|VAR_12, VAR_3);
}
