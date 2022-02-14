
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {unsigned long orig_ax; scalar_t__ ip; scalar_t__ gs; int cs; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct optimized_kprobe {TYPE_1__ kp; } ;
struct kprobe_ctlblk {int kprobe_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 struct kprobe_ctlblk* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct pt_regs*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(struct optimized_kprobe *VAR_4, struct pt_regs *VAR_5)
{

 if (FUNC_3(&VAR_4->kp))
  return;

 FUNC_7();
 if (FUNC_4()) {
  FUNC_5(&VAR_4->kp);
 } else {
  struct kprobe_ctlblk *VAR_6 = FUNC_2();

  VAR_5->cs = VAR_2;




  VAR_5->ip = (unsigned long)VAR_4->kp.addr + VAR_0;
  VAR_5->orig_ax = ~0UL;

  FUNC_0(VAR_3, &VAR_4->kp);
  VAR_6->kprobe_status = VAR_1;
  FUNC_6(&VAR_4->kp, VAR_5);
  FUNC_0(VAR_3, ((void*)0));
 }
 FUNC_8();
}
