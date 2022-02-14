
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* write_log_dirty ) (struct kvm_vcpu*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

int FUNC_1(struct kvm_vcpu *VAR_1)
{
 if (VAR_0->write_log_dirty)
  return VAR_0->write_log_dirty(VAR_1);

 return 0;
}
