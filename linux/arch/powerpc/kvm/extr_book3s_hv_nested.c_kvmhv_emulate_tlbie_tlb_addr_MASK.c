
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int tlb_lock; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct kvm_nested_guest* FUNC_1 (struct kvm*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_nested_guest*,unsigned long,int*) ;
 int FUNC_3 (struct kvm_nested_guest*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2, int VAR_3,
     int VAR_4, long VAR_5)
{
 struct kvm *VAR_6 = VAR_2->kvm;
 struct kvm_nested_guest *VAR_7;
 long VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = FUNC_0(VAR_4);
 VAR_11 = VAR_5 << 12;
 if (VAR_9 < 0)

  return -VAR_0;

 VAR_11 &= ~((1UL << VAR_9) - 1);
 VAR_8 = 1UL << (VAR_9 - VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_3, 0);
 if (!VAR_7)
  return 0;
 FUNC_4(&VAR_7->tlb_lock);


 do {
  FUNC_2(VAR_2, VAR_7, VAR_11, &VAR_10);

  VAR_8 -= 1UL << (VAR_10 - VAR_1);
  VAR_11 += 1UL << VAR_10;
 } while (VAR_8 > 0);

 FUNC_5(&VAR_7->tlb_lock);
 FUNC_3(VAR_7);
 return 0;
}
