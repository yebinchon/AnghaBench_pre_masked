
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ways; int way_incr; int sets; int entry_shift; scalar_t__ flags; int linesz; } ;
struct TYPE_4__ {TYPE_1__ dcache; TYPE_1__ icache; int flags; int type; int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;

void FUNC_0(void)
{
 VAR_12.family = VAR_0;


 VAR_12.flags |= VAR_3;
 VAR_12.dcache.ways = 4;
 VAR_12.dcache.way_incr = (1 << 11);
 VAR_12.dcache.sets = 128;
 VAR_12.dcache.entry_shift = 4;
 VAR_12.dcache.linesz = VAR_11;
 VAR_12.dcache.flags = 0;







 VAR_12.icache = VAR_12.dcache;
}
