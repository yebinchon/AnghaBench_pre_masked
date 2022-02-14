
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long tlb_num_ways_log2; unsigned int tlb_num_ways; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_2 (char*,unsigned int,unsigned long,...) ;

void FUNC_3(unsigned long VAR_16)
{
 unsigned int VAR_17;
 unsigned long VAR_18;

 FUNC_2("dump tlb-entries for line=%#lx (addr %08lx)\n", VAR_16,
  VAR_16 << (VAR_3 + VAR_15.tlb_num_ways_log2));


 VAR_18 = (FUNC_0(VAR_2) & (VAR_4 | VAR_8));

 FUNC_1(VAR_0, VAR_16 << 2);

 for (VAR_17 = 0; VAR_17 < VAR_15.tlb_num_ways; VAR_17++) {
  unsigned long VAR_19;
  unsigned long VAR_20;
  unsigned long VAR_21;

  FUNC_1(VAR_2, VAR_7 | (VAR_17 << VAR_9));
  VAR_19 = FUNC_0(VAR_0);
  VAR_20 = FUNC_0(VAR_2);
  VAR_21 = FUNC_0(VAR_1);

  if ((VAR_21 << VAR_3) != 0) {
   FUNC_2("-- way:%02x vpn:0x%08lx phys:0x%08lx pid:0x%02lx flags:%c%c%c%c%c\n",
    VAR_17,
    (VAR_19 << (VAR_3-2)),
    (VAR_21 << VAR_3),
    ((VAR_20 >> VAR_6) &
    VAR_5),
    (VAR_21 & VAR_13 ? 'r' : '-'),
    (VAR_21 & VAR_14 ? 'w' : '-'),
    (VAR_21 & VAR_11 ? 'x' : '-'),
    (VAR_21 & VAR_12 ? 'g' : '-'),
    (VAR_21 & VAR_10 ? 'c' : '-'));
  }
 }

 FUNC_1(VAR_2, VAR_18);
}
