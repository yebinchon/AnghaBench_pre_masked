
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcb_seg {int dummy; } ;
struct vmcb_save_area {struct vmcb_seg ldtr; struct vmcb_seg tr; struct vmcb_seg ss; struct vmcb_seg gs; struct vmcb_seg fs; struct vmcb_seg es; struct vmcb_seg ds; struct vmcb_seg cs; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vmcb; } ;
struct TYPE_3__ {struct vmcb_save_area save; } ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static struct vmcb_seg *FUNC_2(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct vmcb_save_area *VAR_2 = &FUNC_1(VAR_0)->vmcb->save;

 switch (VAR_1) {
 case 135: return &VAR_2->cs;
 case 134: return &VAR_2->ds;
 case 133: return &VAR_2->es;
 case 132: return &VAR_2->fs;
 case 131: return &VAR_2->gs;
 case 129: return &VAR_2->ss;
 case 128: return &VAR_2->tr;
 case 130: return &VAR_2->ldtr;
 }
 FUNC_0();
 return ((void*)0);
}
