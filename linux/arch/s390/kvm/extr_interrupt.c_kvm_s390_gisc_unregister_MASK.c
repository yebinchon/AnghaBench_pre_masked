
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__* ref_count; int mask; int ref_lock; } ;
struct kvm_s390_gisa_interrupt {TYPE_2__ alert; int origin; } ;
struct TYPE_3__ {struct kvm_s390_gisa_interrupt gisa_int; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm *VAR_4, u32 VAR_5)
{
 struct kvm_s390_gisa_interrupt *VAR_6 = &VAR_4->arch.gisa_int;
 int VAR_7 = 0;

 if (!VAR_6->origin)
  return -VAR_1;
 if (VAR_5 > VAR_3)
  return -VAR_2;

 FUNC_1(&VAR_6->alert.ref_lock);
 if (VAR_6->alert.ref_count[VAR_5] == 0) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_6->alert.ref_count[VAR_5]--;
 if (VAR_6->alert.ref_count[VAR_5] == 0) {
  VAR_6->alert.mask &= ~(0x80 >> VAR_5);
  FUNC_0(VAR_6->origin, VAR_6->alert.mask);
 }
out:
 FUNC_2(&VAR_6->alert.ref_lock);

 return VAR_7;
}
