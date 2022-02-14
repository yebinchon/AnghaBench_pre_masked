
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long n_counter; unsigned long name; int flags; } ;


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
 int VAR_12 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 () ;

void FUNC_6(void)
{
 unsigned long VAR_14, VAR_15, VAR_16;
 u32 VAR_17[VAR_0];
 int VAR_18;

 if (!VAR_13) {
  FUNC_3("Performance monitor hardware not registered.\n");
  return;
 }

 if (!VAR_13->n_counter)
  return;

 FUNC_1(VAR_16);

 FUNC_3("CPU: %d PMU registers, ppmu = %s n_counters = %d",
   FUNC_5(), VAR_13->name, VAR_13->n_counter);

 for (VAR_18 = 0; VAR_18 < VAR_13->n_counter; VAR_18++)
  VAR_17[VAR_18] = FUNC_4(VAR_18 + 1);

 for (; VAR_18 < VAR_0; VAR_18++)
  VAR_17[VAR_18] = 0xdeadbeef;

 FUNC_3("PMC1:  %08x PMC2: %08x PMC3: %08x PMC4: %08x\n",
   VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);

 if (VAR_13->n_counter > 4)
  FUNC_3("PMC5:  %08x PMC6: %08x PMC7: %08x PMC8: %08x\n",
    VAR_17[4], VAR_17[5], VAR_17[6], VAR_17[7]);

 FUNC_3("MMCR0: %016lx MMCR1: %016lx MMCRA: %016lx\n",
  FUNC_2(VAR_6), FUNC_2(VAR_7), FUNC_2(VAR_9));

 VAR_14 = VAR_15 = 0;
 FUNC_3("SIAR:  %016lx SDAR:  %016lx SIER:  %016lx\n",
  FUNC_2(VAR_11), VAR_14, VAR_15);

 FUNC_0(VAR_16);
}
