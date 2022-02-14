
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {scalar_t__ nip; } ;
struct TYPE_2__ {int soft_nmi_irqs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct pt_regs*,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int,int,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct pt_regs*) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (unsigned long*) ;
 int FUNC_17 (unsigned long*) ;
 int VAR_8 ;

void FUNC_18(struct pt_regs *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = FUNC_11();
 u64 VAR_12;

 if (!FUNC_1(VAR_11, &VAR_5))
  return;

 FUNC_4();

 FUNC_0(VAR_3.soft_nmi_irqs);

 VAR_12 = FUNC_2();
 if (VAR_12 - FUNC_7(VAR_8, VAR_11) >= VAR_6) {
  FUNC_16(&VAR_10);
  if (FUNC_1(VAR_11, &VAR_7)) {
   FUNC_17(&VAR_10);
   goto out;
  }
  FUNC_12(VAR_11, VAR_12);

  FUNC_8("CPU %d self-detected hard LOCKUP @ %pS\n",
    VAR_11, (void *)VAR_9->nip);
  FUNC_8("CPU %d TB:%lld, last heartbeat TB:%lld (%lldms ago)\n",
    VAR_11, VAR_12, FUNC_7(VAR_8, VAR_11),
    FUNC_14(VAR_12 - FUNC_7(VAR_8, VAR_11)) / 1000000);
  FUNC_10();
  FUNC_9(VAR_1);
  FUNC_13(VAR_9);

  FUNC_17(&VAR_10);

  if (VAR_4)
   FUNC_15();

  if (VAR_2)
   FUNC_6(VAR_9, "Hard LOCKUP");
 }
 if (VAR_6 < 0x7fffffff)
  FUNC_3(VAR_0, VAR_6);

out:
 FUNC_5();
}
