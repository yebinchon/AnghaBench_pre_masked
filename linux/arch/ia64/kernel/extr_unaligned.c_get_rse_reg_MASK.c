
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_stack {unsigned long ar_bspstore; unsigned long ar_rnat; } ;
struct pt_regs {int cr_ifs; scalar_t__ ar_bspstore; } ;


 int FUNC_0 (char*,void*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,struct switch_stack*,unsigned long,unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long*) ;
 unsigned long* FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 (unsigned long*,long) ;
 unsigned long FUNC_5 (unsigned long*) ;
 long FUNC_6 (long,long,long) ;
 int FUNC_7 (scalar_t__,struct pt_regs*) ;

__attribute__((used)) static void
FUNC_8 (struct pt_regs *VAR_2, unsigned long VAR_3, unsigned long *VAR_4, int *VAR_5)
{
 struct switch_stack *VAR_6 = (struct switch_stack *) VAR_2 - 1;
 unsigned long *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 unsigned long *VAR_12 = (void *) VAR_1 + VAR_0;
 unsigned long VAR_13, VAR_14;
 unsigned long VAR_15;
 long VAR_16 = (VAR_2->cr_ifs) & 0x7f;
 long VAR_17 = 8 * ((VAR_2->cr_ifs >> 14) & 0xf);
 long VAR_18 = (VAR_2->cr_ifs >> 18) & 0x7f;
 long VAR_19 = VAR_3 - 32;

 if (VAR_19 >= VAR_16) {

  FUNC_0("ignoring read from r%lu; only %lu registers are allocated!\n", VAR_3, VAR_16);
  goto fail;
 }

 if (VAR_19 < VAR_17)
  VAR_19 = FUNC_6(VAR_17, VAR_18, VAR_19);

 FUNC_0("r%lu, sw.bspstore=%lx pt.bspstore=%lx sof=%ld sol=%ld ridx=%ld\n",
        VAR_3, VAR_6->ar_bspstore, VAR_2->ar_bspstore, VAR_16, (VAR_2->cr_ifs >> 7) & 0x7f, VAR_19);

 VAR_15 = FUNC_2(VAR_12, (unsigned long *) VAR_6->ar_bspstore);
 VAR_8 = FUNC_4((unsigned long *) VAR_6->ar_bspstore, -VAR_16 + VAR_19);
 if (VAR_8 >= VAR_12) {

  *VAR_4 = *VAR_8;
  if (VAR_5) {
   VAR_9 = FUNC_3(VAR_8);
   if ((unsigned long) VAR_9 >= VAR_6->ar_bspstore)
    VAR_9 = &VAR_6->ar_rnat;
   VAR_14 = 1UL << FUNC_5(VAR_8);
   *VAR_5 = (*VAR_9 & VAR_14) != 0;
  }
  return;
 }

 if (!FUNC_7(VAR_1, VAR_2)) {
  FUNC_0("ignoring kernel read of r%lu; register isn't on the RBS!", VAR_3);
  goto fail;
 }

 VAR_11 = (unsigned long *)VAR_2->ar_bspstore;
 VAR_10 = FUNC_4(VAR_11, VAR_15);
 VAR_7 = FUNC_4(VAR_10, -VAR_16);
 VAR_8 = FUNC_4(VAR_7, VAR_19);

 FUNC_0("ubs_end=%p bsp=%p addr=%p\n", (void *) VAR_10, (void *) VAR_7, (void *) VAR_8);

 FUNC_1(VAR_1, VAR_6, (unsigned long) VAR_10, (unsigned long) VAR_8, VAR_4);

 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_8);
  VAR_14 = 1UL << FUNC_5(VAR_8);

  FUNC_0("rnat @%p = 0x%lx\n", (void *) VAR_9, VAR_13);

  FUNC_1(VAR_1, VAR_6, (unsigned long) VAR_10, (unsigned long) VAR_9, &VAR_13);
  *VAR_5 = (VAR_13 & VAR_14) != 0;
 }
 return;

  fail:
 *VAR_4 = 0;
 if (VAR_5)
  *VAR_5 = 0;
 return;
}
