
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {unsigned long nip; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct optimized_kprobe {TYPE_1__ kp; } ;
struct TYPE_7__ {int kprobe_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct pt_regs*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct optimized_kprobe *VAR_2,
          struct pt_regs *VAR_3)
{

 if (FUNC_2(&VAR_2->kp))
  return;

 FUNC_6();

 if (FUNC_3()) {
  FUNC_4(&VAR_2->kp);
 } else {
  FUNC_0(VAR_1, &VAR_2->kp);
  VAR_3->nip = (unsigned long)VAR_2->kp.addr;
  FUNC_1()->kprobe_status = VAR_0;
  FUNC_5(&VAR_2->kp, VAR_3);
  FUNC_0(VAR_1, ((void*)0));
 }

 FUNC_7();
}
