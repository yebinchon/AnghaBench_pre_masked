
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct cpuinfo_arc_mmu {int ways; int sets; } ;
struct TYPE_2__ {struct cpuinfo_arc_mmu mmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct cpuinfo_arc_mmu*,int,int) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,unsigned int,int,int,int) ;
 unsigned int FUNC_7 (int ) ;
 size_t FUNC_8 () ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(unsigned long VAR_8, unsigned long VAR_9,
     struct pt_regs *VAR_10)
{
 struct cpuinfo_arc_mmu *VAR_11 = &VAR_6[FUNC_8()].mmu;
 unsigned long VAR_12;
 int VAR_13, VAR_14 = VAR_11->ways;

 VAR_14 = FUNC_5(VAR_14, 4);
 FUNC_0(VAR_11->ways > 4);

 FUNC_4(VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_11->sets; VAR_13++) {

  int VAR_15, VAR_16;
  unsigned int VAR_17[4];


  for (VAR_16 = 0, VAR_15 = 0; VAR_16 < VAR_14; VAR_16++) {
   FUNC_9(VAR_1,
       FUNC_1(VAR_11, VAR_13, VAR_16));
   FUNC_9(VAR_0, VAR_4);
   VAR_17[VAR_16] = FUNC_7(VAR_2);
   VAR_15 |= VAR_17[VAR_16] & VAR_5;
   VAR_17[VAR_16] &= VAR_3;
  }


  if (!VAR_15)
   continue;


  for (VAR_16 = 0; VAR_16 < VAR_14 - 1; VAR_16++) {

   int VAR_18;

   if (!VAR_17[VAR_16])
    continue;

   for (VAR_18 = VAR_16 + 1; VAR_18 < VAR_14; VAR_18++) {
    if (VAR_17[VAR_16] != VAR_17[VAR_18])
     continue;

    if (!VAR_7)
     FUNC_6("Dup TLB PD0 %08x @ set %d ways %d,%d\n",
      VAR_17[VAR_16], VAR_13, VAR_16, VAR_18);





    VAR_17[VAR_16] = 0;
    FUNC_9(VAR_1,
      FUNC_1(VAR_11, VAR_13, VAR_16));
    FUNC_2();
   }
  }
 }

 FUNC_3(VAR_12);
}
