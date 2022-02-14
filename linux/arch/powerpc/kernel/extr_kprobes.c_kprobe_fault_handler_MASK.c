
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long nip; int msr; } ;
struct kprobe_ctlblk {int kprobe_status; int kprobe_saved_msr; } ;
struct kprobe {int (* fault_handler ) (struct kprobe*,struct pt_regs*,int) ;scalar_t__ addr; } ;
struct exception_table_entry {int dummy; } ;






 int VAR_0 ;
 unsigned long FUNC_0 (struct exception_table_entry const*) ;
 struct kprobe_ctlblk* FUNC_1 () ;
 struct kprobe* FUNC_2 () ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct kprobe_ctlblk*) ;
 struct exception_table_entry* FUNC_7 (unsigned long) ;
 int FUNC_8 (struct kprobe*,struct pt_regs*,int) ;

int FUNC_9(struct pt_regs *VAR_1, int VAR_2)
{
 struct kprobe *VAR_3 = FUNC_2();
 struct kprobe_ctlblk *VAR_4 = FUNC_1();
 const struct exception_table_entry *VAR_5;

 switch(VAR_4->kprobe_status) {
 case 130:
 case 128:







  VAR_1->nip = (unsigned long)VAR_3->addr;
  VAR_1->msr &= ~VAR_0;
  VAR_1->msr |= VAR_4->kprobe_saved_msr;
  if (VAR_4->kprobe_status == 128)
   FUNC_6(VAR_4);
  else
   FUNC_5();
  FUNC_4();
  break;
 case 131:
 case 129:





  FUNC_3(VAR_3);
  if (VAR_3->fault_handler && VAR_3->fault_handler(VAR_3, VAR_1, VAR_2))
   return 1;





  if ((VAR_5 = FUNC_7(VAR_1->nip)) != ((void*)0)) {
   VAR_1->nip = FUNC_0(VAR_5);
   return 1;
  }





  break;
 default:
  break;
 }
 return 0;
}
