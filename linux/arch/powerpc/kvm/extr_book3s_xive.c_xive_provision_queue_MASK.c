
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct xive_q {int qpage; } ;
struct kvmppc_xive_vcpu {int server_num; int vp_id; struct xive_q* queues; struct kvmppc_xive* xive; } ;
struct kvmppc_xive {int q_order; int q_page_order; } ;
struct TYPE_2__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (int ,struct xive_q*,size_t,void*,int,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_2, u8 VAR_3)
{
 struct kvmppc_xive_vcpu *VAR_4 = VAR_2->arch.xive_vcpu;
 struct kvmppc_xive *VAR_5 = VAR_4->xive;
 struct xive_q *VAR_6 = &VAR_4->queues[VAR_3];
 void *VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_6->qpage))
  return 0;


 VAR_7 = (__be32 *)FUNC_1(VAR_1, VAR_5->q_page_order);
 if (!VAR_7) {
  FUNC_3("Failed to allocate queue %d for VCPU %d\n",
         VAR_3, VAR_4->server_num);
  return -VAR_0;
 }
 FUNC_2(VAR_7, 0, 1 << VAR_5->q_order);
 VAR_8 = FUNC_4(VAR_4->vp_id, VAR_6, VAR_3, VAR_7,
      VAR_5->q_order, 1);
 if (VAR_8)
  FUNC_3("Failed to configure queue %d for VCPU %d\n",
         VAR_3, VAR_4->server_num);
 return VAR_8;
}
