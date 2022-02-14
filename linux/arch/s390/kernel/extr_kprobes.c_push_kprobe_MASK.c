
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int kp; } ;
struct kprobe_ctlblk {int kprobe_status; TYPE_1__ prev_kprobe; } ;
struct kprobe {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kprobe*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct kprobe_ctlblk *VAR_1, struct kprobe *VAR_2)
{
 VAR_1->prev_kprobe.kp = FUNC_0(VAR_0);
 VAR_1->prev_kprobe.status = VAR_1->kprobe_status;
 FUNC_1(VAR_0, VAR_2);
}
