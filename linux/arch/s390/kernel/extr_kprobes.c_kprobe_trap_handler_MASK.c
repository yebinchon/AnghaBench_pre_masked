
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct pt_regs {TYPE_1__ psw; } ;
struct kprobe_ctlblk {int kprobe_status; } ;
struct kprobe {int (* fault_handler ) (struct kprobe*,struct pt_regs*,int) ;scalar_t__ addr; } ;
struct exception_table_entry {int dummy; } ;






 int FUNC_0 (struct kprobe_ctlblk*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (struct exception_table_entry const*) ;
 struct kprobe_ctlblk* FUNC_2 () ;
 struct kprobe* FUNC_3 () ;
 int FUNC_4 (struct kprobe*) ;
 int FUNC_5 (struct kprobe_ctlblk*) ;
 int FUNC_6 () ;
 struct exception_table_entry* FUNC_7 (int ) ;
 int FUNC_8 (struct kprobe*,struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_9(struct pt_regs *VAR_0, int VAR_1)
{
 struct kprobe_ctlblk *VAR_2 = FUNC_2();
 struct kprobe *VAR_3 = FUNC_3();
 const struct exception_table_entry *VAR_4;

 switch(VAR_2->kprobe_status) {
 case 130:
 case 128:







  FUNC_0(VAR_2, VAR_0, (unsigned long) VAR_3->addr);
  FUNC_5(VAR_2);
  FUNC_6();
  break;
 case 131:
 case 129:





  FUNC_4(VAR_3);
  if (VAR_3->fault_handler && VAR_3->fault_handler(VAR_3, VAR_0, VAR_1))
   return 1;





  VAR_4 = FUNC_7(VAR_0->psw.addr);
  if (VAR_4) {
   VAR_0->psw.addr = FUNC_1(VAR_4);
   return 1;
  }





  break;
 default:
  break;
 }
 return 0;
}
