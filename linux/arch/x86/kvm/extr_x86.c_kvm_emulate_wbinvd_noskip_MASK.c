
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wbinvd_dirty_mask; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ (* has_wbinvd_exit ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int *,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_3)
{
 if (!FUNC_3(VAR_3))
  return VAR_0;

 if (VAR_1->has_wbinvd_exit()) {
  int VAR_4 = FUNC_2();

  FUNC_1(VAR_4, VAR_3->arch.wbinvd_dirty_mask);
  FUNC_5(VAR_3->arch.wbinvd_dirty_mask,
    VAR_2, ((void*)0), 1);
  FUNC_4();
  FUNC_0(VAR_3->arch.wbinvd_dirty_mask);
 } else
  FUNC_7();
 return VAR_0;
}
