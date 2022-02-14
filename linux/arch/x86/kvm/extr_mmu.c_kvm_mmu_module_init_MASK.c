
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union kvm_mmu_role {int dummy; } kvm_mmu_role ;
typedef union kvm_mmu_page_role {int dummy; } kvm_mmu_page_role ;
typedef union kvm_mmu_extended_role {int dummy; } kvm_mmu_extended_role ;
typedef int u64 ;
typedef int u32 ;
struct pte_list_desc {int dummy; } ;
struct kvm_mmu_page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (char*,int,int ,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 () ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 void* VAR_7 ;
 int FUNC_8 (int *) ;

int FUNC_9(void)
{
 int VAR_8 = -VAR_0;

 if (VAR_6 == -1)
  FUNC_1(FUNC_2());







 FUNC_0(sizeof(union kvm_mmu_page_role) != sizeof(u32));
 FUNC_0(sizeof(union kvm_mmu_extended_role) != sizeof(u32));
 FUNC_0(sizeof(union kvm_mmu_role) != sizeof(u64));

 FUNC_4();

 FUNC_5();

 VAR_7 = FUNC_3("pte_list_desc",
         sizeof(struct pte_list_desc),
         0, VAR_2, ((void*)0));
 if (!VAR_7)
  goto out;

 VAR_4 = FUNC_3("kvm_mmu_page_header",
        sizeof(struct kvm_mmu_page),
        0, VAR_2, ((void*)0));
 if (!VAR_4)
  goto out;

 if (FUNC_7(&VAR_3, 0, VAR_1))
  goto out;

 VAR_8 = FUNC_8(&VAR_5);
 if (VAR_8)
  goto out;

 return 0;

out:
 FUNC_6();
 return VAR_8;
}
