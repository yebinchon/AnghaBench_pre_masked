
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vpa {unsigned long next_gpa; unsigned long len; int update_pending; } ;
struct TYPE_2__ {int vpa_update_lock; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, struct kvmppc_vpa *VAR_3,
     unsigned long VAR_4, unsigned long VAR_5)
{

 if (VAR_4 & (VAR_1 - 1))
  return -VAR_0;
 FUNC_0(&VAR_2->arch.vpa_update_lock);
 if (VAR_3->next_gpa != VAR_4 || VAR_3->len != VAR_5) {
  VAR_3->next_gpa = VAR_4;
  VAR_3->len = VAR_4 ? VAR_5 : 0;
  VAR_3->update_pending = 1;
 }
 FUNC_1(&VAR_2->arch.vpa_update_lock);
 return 0;
}
