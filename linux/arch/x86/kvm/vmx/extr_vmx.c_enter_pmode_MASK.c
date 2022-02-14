
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long save_rflags; int * segs; scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_1__ rmode; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (struct kvm_vcpu*,size_t,int *) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*,int *,size_t) ;
 int FUNC_6 (struct vcpu_vmx*) ;
 int FUNC_7 (struct kvm_vcpu*,int *,size_t) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_12)
{
 unsigned long VAR_13;
 struct vcpu_vmx *VAR_14 = FUNC_1(VAR_12);





 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_6], VAR_6);
 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_5], VAR_5);
 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_7], VAR_7);
 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_8], VAR_8);
 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_9], VAR_9);
 FUNC_5(VAR_12, &VAR_14->rmode.segs[VAR_4], VAR_4);

 VAR_14->rmode.vm86_active = 0;

 FUNC_6(VAR_14);

 FUNC_7(VAR_12, &VAR_14->rmode.segs[VAR_10], VAR_10);

 VAR_13 = FUNC_3(VAR_2);
 VAR_13 &= VAR_3;
 VAR_13 |= VAR_14->rmode.save_rflags & ~VAR_3;
 FUNC_4(VAR_2, VAR_13);

 FUNC_4(VAR_1, (FUNC_3(VAR_1) & ~VAR_11) |
   (FUNC_3(VAR_0) & VAR_11));

 FUNC_2(VAR_12);

 FUNC_0(VAR_12, VAR_4, &VAR_14->rmode.segs[VAR_4]);
 FUNC_0(VAR_12, VAR_9, &VAR_14->rmode.segs[VAR_9]);
 FUNC_0(VAR_12, VAR_6, &VAR_14->rmode.segs[VAR_6]);
 FUNC_0(VAR_12, VAR_5, &VAR_14->rmode.segs[VAR_5]);
 FUNC_0(VAR_12, VAR_7, &VAR_14->rmode.segs[VAR_7]);
 FUNC_0(VAR_12, VAR_8, &VAR_14->rmode.segs[VAR_8]);
}
