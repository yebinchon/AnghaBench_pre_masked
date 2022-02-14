
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_io_adapter {int masked; int maps_lock; } ;
struct TYPE_2__ {int adapter_id; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ adapter; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,struct s390_io_adapter*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct s390_io_adapter* FUNC_2 (struct kvm*,int ) ;
 int FUNC_3 (struct kvm*,struct s390_io_adapter*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm_kernel_irq_routing_entry *VAR_0,
      struct kvm *VAR_1, int VAR_2, int VAR_3,
      bool VAR_4)
{
 int VAR_5;
 struct s390_io_adapter *VAR_6;


 if (!VAR_3)
  return 0;
 VAR_6 = FUNC_2(VAR_1, VAR_0->adapter.adapter_id);
 if (!VAR_6)
  return -1;
 FUNC_1(&VAR_6->maps_lock);
 VAR_5 = FUNC_0(VAR_1, VAR_6, &VAR_0->adapter);
 FUNC_4(&VAR_6->maps_lock);
 if ((VAR_5 > 0) && !VAR_6->masked) {
  VAR_5 = FUNC_3(VAR_1, VAR_6);
  if (VAR_5 == 0)
   VAR_5 = 1;
 }
 return VAR_5;
}
