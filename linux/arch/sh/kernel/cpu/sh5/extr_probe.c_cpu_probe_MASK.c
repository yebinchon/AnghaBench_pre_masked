
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ways; int sets; int linesz; int way_incr; int entry_shift; int way_size; int entry_mask; scalar_t__ flags; } ;
struct TYPE_4__ {TYPE_1__ dcache; TYPE_1__ icache; int family; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 unsigned long long FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 unsigned long long VAR_7;







 VAR_7 = FUNC_0(0x0d000008);
 if ((VAR_7 & 0xffff) == 0x5103)
  VAR_6.type = VAR_2;
 else if (((VAR_7 >> 32) & 0xffff) == 0x51e2)

  VAR_6.type = VAR_1;

 VAR_6.family = VAR_0;




 VAR_6.icache.ways = 4;
 VAR_6.icache.sets = 256;
 VAR_6.icache.linesz = VAR_3;
 VAR_6.icache.way_incr = (1 << 13);
 VAR_6.icache.entry_shift = 5;
 VAR_6.icache.way_size = VAR_6.icache.sets *
        VAR_6.icache.linesz;
 VAR_6.icache.entry_mask = 0x1fe0;
 VAR_6.icache.flags = 0;
 VAR_6.dcache = VAR_6.icache;
 FUNC_2();
}
