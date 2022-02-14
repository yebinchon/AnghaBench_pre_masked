
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int msr; } ;
struct TYPE_6__ {int in_nmi; } ;
struct TYPE_5__ {int sreset_irqs; } ;
struct TYPE_4__ {scalar_t__ (* system_reset_exception ) (struct pt_regs*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*,char*) ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct pt_regs*) ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (char*,struct pt_regs*,int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 () ;
 TYPE_2__ VAR_9 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 unsigned long FUNC_14 (int ) ;
 int FUNC_15 (int ,unsigned long) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct pt_regs*,char*) ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_19 (struct pt_regs*) ;

void FUNC_20(struct pt_regs *VAR_11)
{
 unsigned long VAR_12, VAR_13;
 bool VAR_14 = FUNC_11();
 bool VAR_15 = 0;





 if (!VAR_14)
  FUNC_16();
 if (FUNC_3(VAR_0)) {
  VAR_12 = FUNC_14(VAR_6);
  VAR_13 = FUNC_14(VAR_7);
  VAR_15 = 1;
 }

 FUNC_10(VAR_11);

 FUNC_1(VAR_9.sreset_irqs);


 if (VAR_10.system_reset_exception) {
  if (VAR_10.system_reset_exception(VAR_11))
   goto out;
 }

 if (FUNC_7(VAR_11))
  goto out;

 FUNC_12(VAR_1);





 FUNC_4(VAR_11, "System Reset");

 FUNC_5(VAR_11);






 FUNC_6(VAR_11);





 FUNC_8("System Reset", VAR_11, VAR_5);

 FUNC_13(2*VAR_3);
 FUNC_2(VAR_8, VAR_2);
 FUNC_18(VAR_11, "System Reset");

out:






 if (!(VAR_11->msr & VAR_4))
  FUNC_18(VAR_11, "Unrecoverable System Reset");

 if (VAR_15) {
  FUNC_15(VAR_6, VAR_12);
  FUNC_15(VAR_7, VAR_13);
 }

 if (!VAR_14)
  FUNC_17();


}
