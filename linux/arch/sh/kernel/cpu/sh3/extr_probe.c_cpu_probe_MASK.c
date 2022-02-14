
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ways; int entry_shift; int way_incr; int entry_mask; int sets; int flags; int linesz; } ;
struct TYPE_4__ {int family; TYPE_1__ dcache; TYPE_1__ icache; int type; int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_18 ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 unsigned long VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 FUNC_3();





 VAR_19 = VAR_0 + (3 << 12);
 VAR_20 = VAR_0 + (1 << 12);


 VAR_21 = FUNC_0(VAR_19);
 FUNC_1(VAR_21&~(VAR_17|VAR_16), VAR_19);
 VAR_22 = FUNC_0(VAR_20);
 FUNC_1(VAR_22&~(VAR_17|VAR_16), VAR_20);


 VAR_21 = FUNC_0(VAR_19);
 VAR_21 ^= VAR_17;
 FUNC_1(VAR_21, VAR_19);
 VAR_22 = FUNC_0(VAR_20);
 VAR_23 = VAR_22 ^ VAR_17;
 FUNC_1(VAR_23, VAR_20);
 VAR_24 = FUNC_0(VAR_19);


 FUNC_1(VAR_21&~VAR_17, VAR_19);
 FUNC_1(VAR_23&~VAR_17, VAR_20);

 FUNC_2();

 VAR_18.dcache.ways = 4;
 VAR_18.dcache.entry_shift = 4;
 VAR_18.dcache.linesz = VAR_14;
 VAR_18.dcache.flags = 0;





 if (VAR_21 == VAR_22 && VAR_23 == VAR_24) {
  VAR_18.dcache.way_incr = (1 << 11);
  VAR_18.dcache.entry_mask = 0x7f0;
  VAR_18.dcache.sets = 128;
  VAR_18.type = VAR_8;

  VAR_18.flags |= VAR_5;
 } else {
  VAR_18.dcache.way_incr = (1 << 12);
  VAR_18.dcache.entry_mask = 0xff0;
  VAR_18.dcache.sets = 256;
  VAR_18.type = VAR_13;
 }




 VAR_18.dcache.flags |= VAR_15;
 VAR_18.icache = VAR_18.dcache;

 VAR_18.family = VAR_4;
}
