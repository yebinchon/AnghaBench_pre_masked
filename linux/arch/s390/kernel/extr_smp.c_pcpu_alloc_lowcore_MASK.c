
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcpu {struct lowcore* lowcore; } ;
struct lowcore {unsigned long nodat_stack; unsigned long async_stack; int cpu_nr; int br_r1_trampoline; scalar_t__ spinlock_index; int spinlock_lockval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,int ) ;
 struct lowcore** VAR_8 ;
 int FUNC_3 (struct lowcore*,int *,int) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (struct lowcore*) ;
 int FUNC_6 (struct lowcore*) ;
 struct pcpu* VAR_9 ;
 int FUNC_7 (struct pcpu*,int ,int ) ;
 unsigned long FUNC_8 () ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (struct lowcore*) ;

__attribute__((used)) static int FUNC_11(struct pcpu *VAR_10, int VAR_11)
{
 unsigned long VAR_12, VAR_13;
 struct lowcore *VAR_14;

 if (VAR_10 != &VAR_9[0]) {
  VAR_10->lowcore = (struct lowcore *)
   FUNC_0(VAR_2 | VAR_1, VAR_3);
  VAR_13 = FUNC_0(VAR_2, VAR_7);
  if (!VAR_10->lowcore || !VAR_13)
   goto out;
 } else {
  VAR_13 = VAR_10->lowcore->nodat_stack - VAR_6;
 }
 VAR_12 = FUNC_8();
 if (!VAR_12)
  goto out;
 VAR_14 = VAR_10->lowcore;
 FUNC_3(VAR_14, &VAR_4, 512);
 FUNC_4((char *) VAR_14 + 512, 0, sizeof(*VAR_14) - 512);
 VAR_14->async_stack = VAR_12 + VAR_6;
 VAR_14->nodat_stack = VAR_13 + VAR_6;
 VAR_14->cpu_nr = VAR_11;
 VAR_14->spinlock_lockval = FUNC_1(VAR_11);
 VAR_14->spinlock_index = 0;
 VAR_14->br_r1_trampoline = 0x07f1;
 if (FUNC_5(VAR_14))
  goto out_async;
 if (FUNC_10(VAR_14))
  goto out_mcesa;
 VAR_8[VAR_11] = VAR_14;
 FUNC_7(VAR_10, VAR_5, (u32)(unsigned long) VAR_14);
 return 0;

out_mcesa:
 FUNC_6(VAR_14);
out_async:
 FUNC_9(VAR_12);
out:
 if (VAR_10 != &VAR_9[0]) {
  FUNC_2(VAR_13, VAR_7);
  FUNC_2((unsigned long) VAR_10->lowcore, VAR_3);
 }
 return -VAR_0;
}
