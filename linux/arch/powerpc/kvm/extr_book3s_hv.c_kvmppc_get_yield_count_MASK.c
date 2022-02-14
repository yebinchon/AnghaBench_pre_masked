
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lppaca {int yield_count; } ;
struct TYPE_3__ {scalar_t__ pinned_addr; } ;
struct TYPE_4__ {int vpa_update_lock; TYPE_1__ vpa; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 int VAR_1 = 0;
 struct lppaca *VAR_2;

 FUNC_1(&VAR_0->arch.vpa_update_lock);
 VAR_2 = (struct lppaca *)VAR_0->arch.vpa.pinned_addr;
 if (VAR_2)
  VAR_1 = FUNC_0(VAR_2->yield_count);
 FUNC_2(&VAR_0->arch.vpa_update_lock);
 return VAR_1;
}
