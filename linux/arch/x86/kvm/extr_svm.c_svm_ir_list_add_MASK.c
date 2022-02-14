
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm* kvm; } ;
struct vcpu_svm {int ir_list_lock; int ir_list; TYPE_1__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;
struct amd_svm_iommu_ir {int node; scalar_t__ data; } ;
struct amd_iommu_pi_data {scalar_t__ prev_ga_tag; scalar_t__ ir_data; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_vcpu* FUNC_1 (struct kvm*,int ) ;
 struct amd_svm_iommu_ir* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct vcpu_svm*,struct amd_iommu_pi_data*) ;
 struct vcpu_svm* FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_8(struct vcpu_svm *VAR_3, struct amd_iommu_pi_data *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct amd_svm_iommu_ir *VAR_7;






 if (VAR_4->ir_data && (VAR_4->prev_ga_tag != 0)) {
  struct kvm *VAR_8 = VAR_3->vcpu.kvm;
  u32 VAR_9 = FUNC_0(VAR_4->prev_ga_tag);
  struct kvm_vcpu *VAR_10 = FUNC_1(VAR_8, VAR_9);
  struct vcpu_svm *VAR_11;

  if (!VAR_10) {
   VAR_5 = -VAR_0;
   goto out;
  }

  VAR_11 = FUNC_7(VAR_10);
  FUNC_6(VAR_11, VAR_4);
 }





 VAR_7 = FUNC_2(sizeof(struct amd_svm_iommu_ir), VAR_2);
 if (!VAR_7) {
  VAR_5 = -VAR_1;
  goto out;
 }
 VAR_7->data = VAR_4->ir_data;

 FUNC_4(&VAR_3->ir_list_lock, VAR_6);
 FUNC_3(&VAR_7->node, &VAR_3->ir_list);
 FUNC_5(&VAR_3->ir_list_lock, VAR_6);
out:
 return VAR_5;
}
