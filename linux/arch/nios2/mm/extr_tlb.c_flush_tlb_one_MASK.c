
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tlb_num_ways; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (int ,unsigned long) ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (unsigned long*,unsigned long*) ;
 int FUNC_3 (char*,unsigned int,...) ;
 unsigned long FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_9)
{
 unsigned int VAR_10;
 unsigned long VAR_11, VAR_12;

 FUNC_3("Flush tlb-entry for vaddr=%#lx\n", VAR_9);


 FUNC_2(&VAR_11, &VAR_12);

 FUNC_1(VAR_0, (VAR_9 >> VAR_3) << 2);

 for (VAR_10 = 0; VAR_10 < VAR_8.tlb_num_ways; VAR_10++) {
  unsigned long VAR_13;
  unsigned long VAR_14;

  VAR_14 = VAR_5 | (VAR_10 << VAR_6);
  FUNC_1(VAR_2, VAR_14);

  VAR_13 = FUNC_0(VAR_0);
  if (((VAR_13 >> 2) & 0xfffff) != (VAR_9 >> VAR_3))
   continue;

  FUNC_3("Flush entry by writing way=%dl pid=%ld\n",
    VAR_10, (VAR_12 >> VAR_4));

  VAR_14 = VAR_7 | (VAR_10 << VAR_6);
  FUNC_1(VAR_2, VAR_14);
  FUNC_1(VAR_0, FUNC_4(VAR_9));
  FUNC_1(VAR_1, 0);
 }

 FUNC_1(VAR_2, VAR_11);
}
