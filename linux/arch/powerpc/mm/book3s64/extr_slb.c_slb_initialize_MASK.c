
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long vmalloc_sllp; int stab_rr; unsigned int slb_kern_bitmap; unsigned int slb_used_bitmap; int kstack; } ;
struct TYPE_3__ {unsigned long sllp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,unsigned long,int ) ;
 TYPE_2__* FUNC_1 () ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (char*,unsigned long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 unsigned long VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 static int VAR_16;





 VAR_12 = VAR_9[VAR_8].sllp;
 VAR_14 = VAR_9[VAR_6].sllp;
 VAR_13 = VAR_9[VAR_10].sllp;
 FUNC_1()->vmalloc_sllp = VAR_4 | VAR_13;



 if (!VAR_16) {
  VAR_16 = 1;
  FUNC_2("SLB: linear  LLP = %04lx\n", VAR_12);
  FUNC_2("SLB: io      LLP = %04lx\n", VAR_14);



 }

 FUNC_1()->stab_rr = VAR_3 - 1;
 FUNC_1()->slb_kern_bitmap = (1U << VAR_3) - 1;
 FUNC_1()->slb_used_bitmap = FUNC_1()->slb_kern_bitmap;

 VAR_15 = VAR_4 | VAR_12;


 asm volatile("isync":::"memory");
 asm volatile("slbmte  %0,%0"::"r" (0) : "memory");
 asm volatile("isync; slbia; isync":::"memory");
 FUNC_0(VAR_2, VAR_7, VAR_15, VAR_1);







 FUNC_5(VAR_0);
 if (FUNC_3() != VAR_5 &&
     (FUNC_1()->kstack & FUNC_4(VAR_7)) > VAR_2)
  FUNC_0(FUNC_1()->kstack,
         VAR_7, VAR_15, VAR_0);

 asm volatile("isync":::"memory");
}
