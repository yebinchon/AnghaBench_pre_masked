
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int nip; int dar; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;
struct TYPE_3__ {int align_ctl; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct pt_regs*,int,int ) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pt_regs*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pt_regs*,int) ;
 scalar_t__ FUNC_9 (struct pt_regs*) ;

void FUNC_10(struct pt_regs *VAR_9)
{
 enum ctx_state VAR_10 = FUNC_4();
 int VAR_11, VAR_12, VAR_13 = 0;


 if (!FUNC_1(VAR_9))
  FUNC_7();

 if (FUNC_8(VAR_9, VAR_6 | VAR_7))
  goto bail;


 if (!(VAR_8->thread.align_ctl & VAR_2))
  VAR_13 = FUNC_6(VAR_9);

 if (VAR_13 == 1) {
  VAR_9->nip += 4;
  FUNC_3(VAR_9);
  goto bail;
 }


 if (VAR_13 == -VAR_1) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_0;
 }
 if (FUNC_9(VAR_9))
  FUNC_0(VAR_11, VAR_9, VAR_12, VAR_9->dar);
 else
  FUNC_2(VAR_9, VAR_9->dar, VAR_11);

bail:
 FUNC_5(VAR_10);
}
