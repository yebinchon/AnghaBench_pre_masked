
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long waysize; unsigned long waybit; unsigned long ways; } ;
struct TYPE_4__ {TYPE_1__ icache; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 unsigned long VAR_5 = VAR_2;
 unsigned long VAR_6 = VAR_5 + VAR_4.icache.waysize;
 unsigned long VAR_7 = 1UL << VAR_4.icache.waybit;
 unsigned long VAR_8 = VAR_4.icache.ways <<
          VAR_4.icache.waybit;
 unsigned long VAR_9, VAR_10;

 VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_7)
  for (VAR_10 = VAR_5 + 0x400; VAR_10 < VAR_6; VAR_10 += 0x400 * 2)
   FUNC_0(VAR_10|VAR_9, VAR_3);
 VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_7)
  for (VAR_10 = VAR_5; VAR_10 < VAR_6; VAR_10 += 0x400 * 2)
   FUNC_0(VAR_10|VAR_9, VAR_3);
}
