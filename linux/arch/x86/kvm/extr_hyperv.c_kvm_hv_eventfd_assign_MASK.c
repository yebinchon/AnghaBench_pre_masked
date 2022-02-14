
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvm_hv {int hv_lock; int conn_to_evt; } ;
struct TYPE_2__ {struct kvm_hv hyperv; } ;
struct kvm {TYPE_1__ arch; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 struct eventfd_ctx* FUNC_2 (int) ;
 int FUNC_3 (struct eventfd_ctx*) ;
 int FUNC_4 (int *,struct eventfd_ctx*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct kvm *VAR_3, u32 VAR_4, int VAR_5)
{
 struct kvm_hv *VAR_6 = &VAR_3->arch.hyperv;
 struct eventfd_ctx *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_5(&VAR_6->hv_lock);
 VAR_8 = FUNC_4(&VAR_6->conn_to_evt, VAR_7, VAR_4, VAR_4 + 1,
   VAR_2);
 FUNC_6(&VAR_6->hv_lock);

 if (VAR_8 >= 0)
  return 0;

 if (VAR_8 == -VAR_1)
  VAR_8 = -VAR_0;
 FUNC_3(VAR_7);
 return VAR_8;
}
