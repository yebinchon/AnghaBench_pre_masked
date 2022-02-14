
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int kp; } ;
struct kprobe_ctlblk {TYPE_1__ prev_kprobe; int kprobe_status; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct kprobe_ctlblk *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->prev_kprobe.kp);
 VAR_1->kprobe_status = VAR_1->prev_kprobe.status;
}
