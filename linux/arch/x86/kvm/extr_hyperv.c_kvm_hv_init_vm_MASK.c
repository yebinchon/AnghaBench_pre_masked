
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conn_to_evt; int hv_lock; } ;
struct TYPE_4__ {TYPE_1__ hyperv; } ;
struct kvm {TYPE_2__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kvm *VAR_0)
{
 FUNC_1(&VAR_0->arch.hyperv.hv_lock);
 FUNC_0(&VAR_0->arch.hyperv.conn_to_evt);
}
