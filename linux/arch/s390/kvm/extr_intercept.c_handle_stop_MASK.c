
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int exit_stop_request; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ stop; } ;
struct kvm_s390_local_interrupt {int lock; TYPE_2__ irq; } ;
struct TYPE_7__ {struct kvm_s390_local_interrupt local_int; } ;
struct kvm_vcpu {int kvm; TYPE_4__ stat; TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_3)
{
 struct kvm_s390_local_interrupt *VAR_4 = &VAR_3->arch.local_int;
 int VAR_5 = 0;
 uint8_t VAR_6, VAR_7;

 VAR_3->stat.exit_stop_request++;


 if (FUNC_2(VAR_3, 1))
  return 0;


 FUNC_5(&VAR_4->lock);
 VAR_6 = VAR_4->irq.stop.flags;
 VAR_7 = FUNC_0(VAR_3);
 FUNC_6(&VAR_4->lock);

 FUNC_7(VAR_7, VAR_6);
 if (!VAR_7)
  return 0;

 if (VAR_6 & VAR_1) {
  VAR_5 = FUNC_4(VAR_3,
      VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 if (!FUNC_1(VAR_3->kvm))
  FUNC_3(VAR_3);
 return -VAR_0;
}
