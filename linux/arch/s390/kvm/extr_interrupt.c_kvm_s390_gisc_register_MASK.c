
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int* ref_count; int mask; int ref_lock; } ;
struct kvm_s390_gisa_interrupt {TYPE_1__ alert; int origin; } ;
struct TYPE_5__ {struct kvm_s390_gisa_interrupt gisa_int; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_6__ {int nisc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm *VAR_4, u32 VAR_5)
{
 struct kvm_s390_gisa_interrupt *VAR_6 = &VAR_4->arch.gisa_int;

 if (!VAR_6->origin)
  return -VAR_0;
 if (VAR_5 > VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_6->alert.ref_lock);
 VAR_6->alert.ref_count[VAR_5]++;
 if (VAR_6->alert.ref_count[VAR_5] == 1) {
  VAR_6->alert.mask |= 0x80 >> VAR_5;
  FUNC_0(VAR_6->origin, VAR_6->alert.mask);
 }
 FUNC_2(&VAR_6->alert.ref_lock);

 return VAR_3->nisc;
}
