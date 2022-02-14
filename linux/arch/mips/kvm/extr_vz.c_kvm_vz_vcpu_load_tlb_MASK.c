
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_3__ {int last_exec_cpu; int* vzguestid; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct TYPE_4__ {int asid_flush_mask; struct mm_struct gpa_mm; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mm_struct*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct kvm_vcpu*) ;
 int FUNC_6 () ;
 struct kvm_vcpu** VAR_3 ;
 int FUNC_7 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_4, int VAR_5)
{
 struct kvm *VAR_6 = VAR_4->kvm;
 struct mm_struct *VAR_7 = &VAR_6->arch.gpa_mm;
 bool VAR_8;





 VAR_8 = (VAR_4->arch.last_exec_cpu != VAR_5);
 VAR_4->arch.last_exec_cpu = VAR_5;







 if (VAR_2) {







  if (VAR_8 ||
      (VAR_4->arch.vzguestid[VAR_5] ^ FUNC_4(VAR_5)) &
     VAR_1) {
   FUNC_5(VAR_5, VAR_4);
   VAR_4->arch.vzguestid[VAR_5] = FUNC_4(VAR_5);
   FUNC_7(VAR_4,
       VAR_4->arch.vzguestid[VAR_5]);
  }


  FUNC_0(VAR_0, VAR_4->arch.vzguestid[VAR_5]);
 } else {







  if (VAR_8 || VAR_3[VAR_5] != VAR_4)
   FUNC_6();
  VAR_3[VAR_5] = VAR_4;





  if (FUNC_2(VAR_5, &VAR_6->arch.asid_flush_mask))
   FUNC_3(VAR_7);
  else
   FUNC_1(VAR_7);
 }
}
