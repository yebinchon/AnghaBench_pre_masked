
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct trap_per_cpu {int cpu_list_pa; int cpu_mondo_block_pa; } ;


 unsigned long FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,int,...) ;
 int FUNC_6 () ;
 unsigned long FUNC_7 (int,int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct trap_per_cpu *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 u16 VAR_18 = 0xffff;
 unsigned long VAR_19 = 0;
 unsigned long VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 u16 *VAR_23;
 u16 VAR_24;

 VAR_10 = FUNC_6();
 VAR_23 = FUNC_1(VAR_8->cpu_list_pa);
 VAR_15 = VAR_9 * VAR_7;
 if (VAR_15 > VAR_6)
  VAR_15 = VAR_6;
 VAR_16 = VAR_17 = 0;
 VAR_11 = VAR_9;
 VAR_12 = 0;

 do {
  int VAR_25, VAR_26, VAR_27;

  VAR_20 = FUNC_7(VAR_9,
           VAR_8->cpu_list_pa,
           VAR_8->cpu_mondo_block_pa);


  if (FUNC_3(VAR_20 == VAR_3))
   goto xcall_done;


  if (FUNC_10((VAR_20 != VAR_4) &&
   (VAR_20 != VAR_1) &&
   (VAR_20 != VAR_2)))
   goto fatal_errors;
  VAR_14 = 0;
  VAR_25 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   VAR_24 = VAR_23[VAR_13];
   if (FUNC_3(VAR_24 == 0xffff)) {
    VAR_25++;
   } else if ((VAR_20 == VAR_1) &&
    (FUNC_8(VAR_24) == VAR_0)) {
    VAR_21 = VAR_24 + 1;
   } else if (VAR_20 == VAR_2 && !FUNC_2(VAR_24)) {
    VAR_22 = VAR_24 + 1;
   } else {
    VAR_23[VAR_14++] = VAR_24;
   }
  }


  if (VAR_14 == 0)
   break;


  VAR_9 = VAR_14;




  if (VAR_18 != VAR_23[0]) {
   VAR_18 = VAR_23[0];
   VAR_19 = FUNC_0(VAR_18);
  }


  VAR_26 = (VAR_25 > VAR_12);
  VAR_12 = VAR_25;


  VAR_27 = (VAR_19 < FUNC_0(VAR_18));
  VAR_19 = FUNC_0(VAR_18);




  if (FUNC_3(VAR_26 || VAR_27)) {
   VAR_17 += VAR_16;
   VAR_16 = 0;
  } else if (FUNC_10(VAR_16 > VAR_5)) {
   goto fatal_mondo_timeout;
  }




  if (!VAR_26)
   FUNC_9(VAR_15);

  VAR_16++;
 } while (1);

xcall_done:
 if (FUNC_10(VAR_21 > 0)) {
  FUNC_5("CPU[%d]: SUN4V mondo cpu error, target cpu(%d) was in error state\n",
         VAR_10, VAR_21 - 1);
 } else if (FUNC_10(VAR_22 > 0)) {
  FUNC_5("CPU[%d]: SUN4V mondo cpu error, target cpu(%d) does not belong to the domain\n",
         VAR_10, VAR_22 - 1);
 }
 return;

fatal_errors:

 FUNC_5("CPU[%d]: Args were cnt(%d) cpulist_pa(%lx) mondo_block_pa(%lx)\n",
        VAR_10, VAR_11, VAR_8->cpu_list_pa, VAR_8->cpu_mondo_block_pa);
 FUNC_4("Unexpected SUN4V mondo error %lu\n", VAR_20);

fatal_mondo_timeout:

 FUNC_5("CPU[%d]: SUN4V mondo timeout, cpu(%d) made no forward progress after %d retries. Total target cpus(%d).\n",
        VAR_10, VAR_18, (VAR_17 + VAR_16), VAR_11);
 FUNC_4("SUN4V mondo timeout panic\n");
}
