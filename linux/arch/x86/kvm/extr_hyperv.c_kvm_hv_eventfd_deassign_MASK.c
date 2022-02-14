
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_hv {int hv_lock; int conn_to_evt; } ;
struct TYPE_2__ {struct kvm_hv hyperv; } ;
struct kvm {int srcu; TYPE_1__ arch; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct eventfd_ctx*) ;
 struct eventfd_ctx* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_1, u32 VAR_2)
{
 struct kvm_hv *VAR_3 = &VAR_1->arch.hyperv;
 struct eventfd_ctx *VAR_4;

 FUNC_2(&VAR_3->hv_lock);
 VAR_4 = FUNC_1(&VAR_3->conn_to_evt, VAR_2);
 FUNC_3(&VAR_3->hv_lock);

 if (!VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_1->srcu);
 FUNC_0(VAR_4);
 return 0;
}
