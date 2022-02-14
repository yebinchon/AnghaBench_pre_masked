
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe_ctlblk {int kprobe_status; } ;
struct kprobe {int dummy; } ;


 int FUNC_0 () ;




 int FUNC_1 (struct kprobe*) ;
 int FUNC_2 (struct kprobe*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct kprobe_ctlblk *VAR_0, struct kprobe *VAR_1)
{
 switch (VAR_0->kprobe_status) {
 case 129:
 case 131:
  FUNC_2(VAR_1);
  break;
 case 130:
 case 128:
 default:





  FUNC_3("Invalid kprobe detected.\n");
  FUNC_1(VAR_1);
  FUNC_0();
 }
}
