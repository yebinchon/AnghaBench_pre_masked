
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ppc_smmu_info {int data_keys; int instr_keys; int flags; int slb_size; struct kvm_ppc_one_seg_page_size* sps; } ;
struct kvm_ppc_one_seg_page_size {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct kvm_ppc_one_seg_page_size**,int,int) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_6,
      struct kvm_ppc_smmu_info *VAR_7)
{
 struct kvm_ppc_one_seg_page_size *VAR_8;






 VAR_7->data_keys = 32;
 VAR_7->instr_keys = FUNC_0(VAR_0) ? 32 : 0;


 VAR_7->flags = VAR_3 | VAR_1;
 VAR_7->slb_size = 32;


 VAR_8 = &VAR_7->sps[0];
 FUNC_2(&VAR_8, 12, 0);
 FUNC_2(&VAR_8, 16, VAR_4 | VAR_5);
 FUNC_2(&VAR_8, 24, VAR_4);


 if (FUNC_1())
  VAR_7->flags |= VAR_2;

 return 0;
}
