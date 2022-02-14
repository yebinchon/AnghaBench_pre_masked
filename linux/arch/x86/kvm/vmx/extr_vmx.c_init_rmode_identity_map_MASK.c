
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tmp ;
struct kvm_vmx {int ept_identity_pagetable_done; int ept_identity_map_addr; } ;
struct kvm {int slots_lock; int srcu; } ;
typedef int kvm_pfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct kvm*,int ,int,int ) ;
 int FUNC_1 (struct kvm*,int,int ,int ) ;
 int FUNC_2 (struct kvm*,int,int*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 struct kvm_vmx* FUNC_8 (struct kvm*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_11)
{
 struct kvm_vmx *VAR_12 = FUNC_8(VAR_11);
 int VAR_13, VAR_14, VAR_15 = 0;
 kvm_pfn_t VAR_16;
 u32 VAR_17;


 FUNC_4(&VAR_11->slots_lock);

 if (FUNC_3(VAR_12->ept_identity_pagetable_done))
  goto out2;

 if (!VAR_12->ept_identity_map_addr)
  VAR_12->ept_identity_map_addr = VAR_4;
 VAR_16 = VAR_12->ept_identity_map_addr >> VAR_1;

 VAR_15 = FUNC_0(VAR_11, VAR_0,
        VAR_12->ept_identity_map_addr, VAR_2);
 if (VAR_15 < 0)
  goto out2;

 VAR_14 = FUNC_6(&VAR_11->srcu);
 VAR_15 = FUNC_1(VAR_11, VAR_16, 0, VAR_2);
 if (VAR_15 < 0)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_17 = (VAR_13 << 22) + (VAR_7 | VAR_9 | VAR_10 |
   VAR_5 | VAR_6 | VAR_8);
  VAR_15 = FUNC_2(VAR_11, VAR_16,
    &VAR_17, VAR_13 * sizeof(VAR_17), sizeof(VAR_17));
  if (VAR_15 < 0)
   goto out;
 }
 VAR_12->ept_identity_pagetable_done = 1;

out:
 FUNC_7(&VAR_11->srcu, VAR_14);

out2:
 FUNC_5(&VAR_11->slots_lock);
 return VAR_15;
}
