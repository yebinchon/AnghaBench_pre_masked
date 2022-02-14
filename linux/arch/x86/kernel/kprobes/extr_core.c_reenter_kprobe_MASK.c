
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct kprobe_ctlblk {int kprobe_status; } ;
struct kprobe {int dummy; } ;


 int FUNC_0 () ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct kprobe*) ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct kprobe*,struct pt_regs*,struct kprobe_ctlblk*,int) ;

__attribute__((used)) static int FUNC_6(struct kprobe *VAR_0, struct pt_regs *VAR_1,
     struct kprobe_ctlblk *VAR_2)
{
 switch (VAR_2->kprobe_status) {
 case 129:
 case 131:
 case 130:
  FUNC_3(VAR_0);
  FUNC_5(VAR_0, VAR_1, VAR_2, 1);
  break;
 case 128:






  FUNC_4("Unrecoverable kprobe detected.\n");
  FUNC_2(VAR_0);
  FUNC_0();
 default:

  FUNC_1(1);
  return 0;
 }

 return 1;
}
